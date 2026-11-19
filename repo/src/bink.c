// BINKW32 (RAD Bink video: the intro and the cut-scenes in Cinematics/NTSC), as EngineEx uses it: BinkOpen, then
// each frame BinkWait / BinkDoFrame / BinkCopyToBufferRect into a locked texture / BinkNextFrame until FrameNum
// reaches Frames, then BinkClose and the script's "video complete" event.
//
// Powered by FFmpeg for native Bink video and audio playback.
#include "host.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
#include <libavutil/imgutils.h>
#include <libavutil/opt.h>

// the public head of RAD's BINK structure
#define BK_WIDTH 0
#define BK_HEIGHT 4
#define BK_FRAMES 8
#define BK_FRAMENUM 12
#define BK_LASTFRAMENUM 16
#define BK_FRAMERATE 20
#define BK_FRAMERATEDIV 24
#define BK_SIZE 0x400

#define BINK_AUDIO_RING_SAMPLES 65536
static float s_audio_ring[BINK_AUDIO_RING_SAMPLES * 2]; // stereo float interleaved
static volatile int s_audio_read_pos = 0;
static volatile int s_audio_write_pos = 0;

void bink_mix_audio(float *out, int frames) {
    int r = s_audio_read_pos;
    int w = s_audio_write_pos;
    int avail = (w >= r) ? (w - r) : (BINK_AUDIO_RING_SAMPLES - r + w);
    int to_read = frames;
    if (to_read > avail) to_read = avail;
    for (int i = 0; i < to_read; i++) {
        out[2 * i]     += s_audio_ring[r * 2];
        out[2 * i + 1] += s_audio_ring[r * 2 + 1];
        r = (r + 1) % BINK_AUDIO_RING_SAMPLES;
    }
    s_audio_read_pos = r;
}

static void push_audio_samples(const float *samples, int count) {
    int r = s_audio_read_pos;
    int w = s_audio_write_pos;
    int free_space = (r > w) ? (r - w - 1) : (BINK_AUDIO_RING_SAMPLES - w + r - 1);
    int to_write = count;
    if (to_write > free_space) to_write = free_space;
    for (int i = 0; i < to_write; i++) {
        s_audio_ring[w * 2]     = samples[i * 2];
        s_audio_ring[w * 2 + 1] = samples[i * 2 + 1];
        w = (w + 1) % BINK_AUDIO_RING_SAMPLES;
    }
    s_audio_write_pos = w;
}

typedef struct {
    uint32_t handle;        // guest handle
    AVFormatContext *fmt;
    AVCodecContext *vctx;
    AVCodecContext *actx;
    int video_idx;
    int audio_idx;
    AVFrame *vframe;
    AVFrame *aframe;
    AVPacket *pkt;
    struct SwsContext *sws;
    SwrContext *swr;
    uint8_t *bgra_buffer;   // full frame decoded BGRA (w * h * 4)
    int w, h;
    uint32_t total_frames;
    uint32_t rate, div;
    uint64_t start_ms;
    int has_frame;
    int eof;
} Movie;

static Movie movies[8];

int bink_is_active(void) {
    for (int i = 0; i < 8; i++) {
        if (movies[i].handle) return 1;
    }
    return 0;
}

void bink_skip_current(void) {
    for (int i = 0; i < 8; i++) {
        if (movies[i].handle) {
            movies[i].eof = 1;
            uint32_t b = movies[i].handle;
            uint32_t tf = movies[i].total_frames;
            W32(b + BK_FRAMENUM, tf);
            W32(b + BK_LASTFRAMENUM, tf);
            host_log("bink_skip_current: skipped movie handle %08x (frames %u)\n", b, tf);
        }
    }
}

static void b_BinkOpen(void) {
    const char *name = ARG(0) ? GSTR(ARG(0)) : "";
    char path[1024];
    path[0] = '\0';
    if (!fs_resolve(name, path, sizeof path, 0)) {
        strncpy(path, name, sizeof path - 1);
        path[sizeof path - 1] = '\0';
    }

    uint32_t b = heap_alloc(BK_SIZE);
    memset(G + b, 0, BK_SIZE);

    int slot = -1;
    for (int i = 0; i < 8; i++) {
        if (!movies[i].handle) {
            slot = i;
            break;
        }
    }
    if (slot < 0) {
        host_log("BinkOpen: no free movie slots for %s\n", name);
        SRET(0, 2);
        return;
    }

    Movie *m = &movies[slot];
    memset(m, 0, sizeof(*m));
    m->handle = b;
    m->video_idx = -1;
    m->audio_idx = -1;

    if (avformat_open_input(&m->fmt, path, NULL, NULL) < 0 ||
        avformat_find_stream_info(m->fmt, NULL) < 0) {
        host_log("BinkOpen(%s): could not open '%s' (fallback dummy frame)\n", name, path);
        if (m->fmt) { avformat_close_input(&m->fmt); m->fmt = NULL; }
        W32(b + BK_WIDTH, 640);
        W32(b + BK_HEIGHT, 480);
        W32(b + BK_FRAMES, 1);
        W32(b + BK_FRAMERATE, 30);
        W32(b + BK_FRAMERATEDIV, 1);
        SRET(b, 2);
        return;
    }

    for (int i = 0; i < (int)m->fmt->nb_streams; i++) {
        enum AVMediaType type = m->fmt->streams[i]->codecpar->codec_type;
        if (type == AVMEDIA_TYPE_VIDEO && m->video_idx < 0) m->video_idx = i;
        else if (type == AVMEDIA_TYPE_AUDIO && m->audio_idx < 0) m->audio_idx = i;
    }

    if (m->video_idx < 0) {
        host_log("BinkOpen(%s): no video stream found\n", name);
        avformat_close_input(&m->fmt); m->fmt = NULL;
        W32(b + BK_WIDTH, 640); W32(b + BK_HEIGHT, 480); W32(b + BK_FRAMES, 1);
        W32(b + BK_FRAMERATE, 30); W32(b + BK_FRAMERATEDIV, 1);
        SRET(b, 2);
        return;
    }

    AVStream *vst = m->fmt->streams[m->video_idx];
    const AVCodec *vcodec = avcodec_find_decoder(vst->codecpar->codec_id);
    if (!vcodec) {
        host_log("BinkOpen(%s): video decoder not found\n", name);
        avformat_close_input(&m->fmt); m->fmt = NULL;
        W32(b + BK_WIDTH, 640); W32(b + BK_HEIGHT, 480); W32(b + BK_FRAMES, 1);
        W32(b + BK_FRAMERATE, 30); W32(b + BK_FRAMERATEDIV, 1);
        SRET(b, 2);
        return;
    }
    m->vctx = avcodec_alloc_context3(vcodec);
    avcodec_parameters_to_context(m->vctx, vst->codecpar);
    if (avcodec_open2(m->vctx, vcodec, NULL) < 0) {
        host_log("BinkOpen(%s): failed to open video decoder\n", name);
        avcodec_free_context(&m->vctx);
        avformat_close_input(&m->fmt); m->fmt = NULL;
        W32(b + BK_WIDTH, 640); W32(b + BK_HEIGHT, 480); W32(b + BK_FRAMES, 1);
        W32(b + BK_FRAMERATE, 30); W32(b + BK_FRAMERATEDIV, 1);
        SRET(b, 2);
        return;
    }

    m->w = m->vctx->width;
    m->h = m->vctx->height;
    if (m->w <= 0 || m->h <= 0) {
        m->w = vst->codecpar->width > 0 ? vst->codecpar->width : 640;
        m->h = vst->codecpar->height > 0 ? vst->codecpar->height : 480;
    }

    AVRational fr = av_guess_frame_rate(m->fmt, vst, NULL);
    if (fr.num > 0 && fr.den > 0) {
        m->rate = fr.num;
        m->div = fr.den;
    } else {
        m->rate = 30;
        m->div = 1;
    }

    m->total_frames = vst->nb_frames > 0 ? (uint32_t)vst->nb_frames : 0;
    if (m->total_frames == 0 && vst->duration > 0 && vst->time_base.den > 0) {
        double dur = (double)vst->duration * av_q2d(vst->time_base);
        m->total_frames = (uint32_t)(dur * ((double)m->rate / (double)m->div) + 0.5);
    }
    if (m->total_frames == 0) m->total_frames = 924;

    if (m->audio_idx >= 0) {
        AVStream *ast = m->fmt->streams[m->audio_idx];
        const AVCodec *acodec = avcodec_find_decoder(ast->codecpar->codec_id);
        if (acodec) {
            m->actx = avcodec_alloc_context3(acodec);
            avcodec_parameters_to_context(m->actx, ast->codecpar);
            if (avcodec_open2(m->actx, acodec, NULL) == 0) {
                AVChannelLayout out_layout = AV_CHANNEL_LAYOUT_STEREO;
                swr_alloc_set_opts2(&m->swr, &out_layout, AV_SAMPLE_FMT_FLT, 44100,
                                    &m->actx->ch_layout, m->actx->sample_fmt, m->actx->sample_rate, 0, NULL);
                if (m->swr) swr_init(m->swr);
                m->aframe = av_frame_alloc();
            } else {
                avcodec_free_context(&m->actx);
                m->actx = NULL;
            }
        }
    }

    m->vframe = av_frame_alloc();
    m->pkt = av_packet_alloc();
    m->sws = sws_getContext(m->w, m->h, m->vctx->pix_fmt,
                            m->w, m->h, AV_PIX_FMT_BGRA,
                            SWS_BILINEAR, NULL, NULL, NULL);

    m->bgra_buffer = (uint8_t *)calloc(1, (size_t)m->w * m->h * 4);
    m->start_ms = host_ticks();

    W32(b + BK_WIDTH, m->w);
    W32(b + BK_HEIGHT, m->h);
    W32(b + BK_FRAMES, m->total_frames);
    W32(b + BK_FRAMERATE, m->rate);
    W32(b + BK_FRAMERATEDIV, m->div ? m->div : 1);
    W32(b + BK_FRAMENUM, 0);
    W32(b + BK_LASTFRAMENUM, 0);

    host_log("BinkOpen(%s): %dx%d, %u frames at %u/%u fps (FFmpeg Bink)\n",
             name, m->w, m->h, m->total_frames, m->rate, m->div);
    SRET(b, 2);
}

static void b_BinkClose(void) {
    uint32_t b = ARG(0);
    for (int i = 0; i < 8; i++) {
        if (movies[i].handle == b) {
            Movie *m = &movies[i];
            if (m->bgra_buffer) free(m->bgra_buffer);
            if (m->sws) sws_freeContext(m->sws);
            if (m->swr) swr_free(&m->swr);
            if (m->vframe) av_frame_free(&m->vframe);
            if (m->aframe) av_frame_free(&m->aframe);
            if (m->pkt) av_packet_free(&m->pkt);
            if (m->vctx) avcodec_free_context(&m->vctx);
            if (m->actx) avcodec_free_context(&m->actx);
            if (m->fmt) avformat_close_input(&m->fmt);
            memset(m, 0, sizeof(*m));
            break;
        }
    }
    s_audio_read_pos = s_audio_write_pos = 0;
    if (b) heap_free(b);
    SRET(0, 1);
}

static void b_BinkWait(void) {
    uint32_t b = ARG(0);
    Movie *m = NULL;
    for (int i = 0; i < 8; i++) {
        if (movies[i].handle == b) { m = &movies[i]; break; }
    }
    if (!m || !m->fmt) { SRET(0, 1); return; }

    uint32_t cur = R32(b + BK_FRAMENUM);
    uint32_t now = host_ticks();
    uint64_t due = m->start_ms + (uint64_t)cur * 1000 * m->div / m->rate;
    if (now < due) {
        SRET(1, 1); // Not ready yet
        return;
    }
    SRET(0, 1);     // Ready to render
}

static void b_BinkDoFrame(void) {
    uint32_t b = ARG(0);
    Movie *m = NULL;
    for (int i = 0; i < 8; i++) {
        if (movies[i].handle == b) { m = &movies[i]; break; }
    }
    if (!m || !m->fmt) { SRET(0, 1); return; }

    int got_video = 0;
    while (!got_video && !m->eof) {
        int ret = av_read_frame(m->fmt, m->pkt);
        if (ret < 0) {
            m->eof = 1;
            avcodec_send_packet(m->vctx, NULL);
            if (m->actx) avcodec_send_packet(m->actx, NULL);
        } else if (m->pkt->stream_index == m->video_idx) {
            if (avcodec_send_packet(m->vctx, m->pkt) == 0) {
                if (avcodec_receive_frame(m->vctx, m->vframe) == 0) {
                    got_video = 1;
                }
            }
        } else if (m->actx && m->pkt->stream_index == m->audio_idx) {
            if (avcodec_send_packet(m->actx, m->pkt) == 0) {
                while (avcodec_receive_frame(m->actx, m->aframe) == 0) {
                    if (m->swr) {
                        float audio_tmp[4096 * 2];
                        uint8_t *out_ptrs[1] = { (uint8_t *)audio_tmp };
                        int conv = swr_convert(m->swr, out_ptrs, 4096,
                                               (const uint8_t **)m->aframe->data, m->aframe->nb_samples);
                        if (conv > 0) push_audio_samples(audio_tmp, conv);
                    }
                }
            }
        }
        av_packet_unref(m->pkt);
        if (m->eof) {
            if (avcodec_receive_frame(m->vctx, m->vframe) == 0) {
                got_video = 1;
            }
            break;
        }
    }

    if (got_video && m->vframe && m->bgra_buffer) {
        if (!m->sws) {
            m->sws = sws_getContext(m->vframe->width, m->vframe->height, (enum AVPixelFormat)m->vframe->format,
                                    m->w, m->h, AV_PIX_FMT_BGRA,
                                    SWS_BILINEAR, NULL, NULL, NULL);
        }
        if (m->sws) {
            uint8_t *dst_data[4] = { m->bgra_buffer, NULL, NULL, NULL };
            int dst_linesize[4] = { m->w * 4, 0, 0, 0 };
            sws_scale(m->sws, (const uint8_t * const *)m->vframe->data, m->vframe->linesize,
                      0, m->vframe->height, dst_data, dst_linesize);
            m->has_frame = 1;
        }
    }
    SRET(0, 1);
}

static void b_BinkNextFrame(void) {
    uint32_t b = ARG(0);
    if (b) {
        uint32_t cur = R32(b + BK_FRAMENUM);
        W32(b + BK_LASTFRAMENUM, cur);
        W32(b + BK_FRAMENUM, cur + 1);
    }
    SRET(0, 1);
}

// BinkCopyToBufferRect(bink, dest, pitch, height, destx, desty, srcx, srcy, srcw, srch, flags)
static void b_BinkCopyToBufferRect(void) {
    uint32_t b = ARG(0);
    uint32_t dest = ARG(1);
    uint32_t pitch = ARG(2);
    uint32_t height = ARG(3);
    uint32_t destx = ARG(4);
    uint32_t desty = ARG(5);
    uint32_t srcx = ARG(6);
    uint32_t srcy = ARG(7);
    uint32_t srcw = ARG(8);
    uint32_t srch = ARG(9);
    (void)ARG(10); // flags

    Movie *m = NULL;
    for (int i = 0; i < 8; i++) {
        if (movies[i].handle == b) { m = &movies[i]; break; }
    }

    if (!dest || !pitch || height >= 4096) {
        SRET(0, 11);
        return;
    }

    uint8_t *dst_base = (uint8_t *)(G + dest);

    if (!m || !m->has_frame || !m->bgra_buffer) {
        memset(dst_base, 0, (size_t)pitch * height);
        SRET(0, 11);
        return;
    }

    if (srcx >= (uint32_t)m->w || srcy >= (uint32_t)m->h) {
        SRET(0, 11);
        return;
    }
    if (srcx + srcw > (uint32_t)m->w) srcw = m->w - srcx;
    if (srcy + srch > (uint32_t)m->h) srch = m->h - srcy;

    for (uint32_t y = 0; y < srch; y++) {
        uint32_t dy = desty + y;
        if (dy >= height) break;
        const uint8_t *s = m->bgra_buffer + (srcy + y) * ((uint32_t)m->w * 4) + srcx * 4;
        uint8_t *d = dst_base + dy * pitch + destx * 4;
        memcpy(d, s, (size_t)srcw * 4);
    }
    SRET(0, 11);
}

static void b_ret0_1(void) { SRET(0, 1); }
static void b_ret1_1(void) { SRET(1, 1); }
static void b_ret0_2(void) { SRET(0, 2); }

const ShimDef shims_bink[] = {
    {"binkw32", "_BinkOpen@8", b_BinkOpen}, {"binkw32", "_BinkClose@4", b_BinkClose},
    {"binkw32", "_BinkDoFrame@4", b_BinkDoFrame}, {"binkw32", "_BinkNextFrame@4", b_BinkNextFrame},
    {"binkw32", "_BinkWait@4", b_BinkWait}, {"binkw32", "_BinkOpenDirectSound@4", b_ret1_1},
    {"binkw32", "_BinkSetSoundSystem@8", b_ret0_2}, {"binkw32", "_BinkSetSoundTrack@8", b_ret0_2},
    {"binkw32", "_BinkCopyToBufferRect@44", b_BinkCopyToBufferRect},
    {0, 0, 0}
};
