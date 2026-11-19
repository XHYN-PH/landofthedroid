cmake_minimum_required(VERSION 3.22)
project(lotdport C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Android platform flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -fno-strict-aliasing -w")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -fno-strict-aliasing -w")

set(REPO_DIR "${CMAKE_CURRENT_SOURCE_DIR}/repo")
set(SDL3_DIR "${CMAKE_CURRENT_SOURCE_DIR}/SDL3")
set(SDL2_COMPAT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/sdl2-compat")
set(FFMPEG_DIR "${CMAKE_CURRENT_SOURCE_DIR}/ffmpeg")

# Add SDL3
add_subdirectory(${SDL3_DIR} SDL3 EXCLUDE_FROM_ALL)

# Collect all recompiled C sources
file(GLOB_RECURSE GEN_SRCS
    "${REPO_DIR}/gen/*.c"
)

# Collect runtime shims
file(GLOB RUNTIME_SRCS
    "${REPO_DIR}/src/*.c"
)

# Main library expected by SDLActivity
add_library(main SHARED
    ${GEN_SRCS}
    ${RUNTIME_SRCS}
    "${SDL2_COMPAT_DIR}/src/sdl2_compat.c"
)

target_include_directories(main PRIVATE
    "${REPO_DIR}/src"
    "${SDL2_COMPAT_DIR}/include/SDL2"
    "${SDL2_COMPAT_DIR}/src"
    "${SDL3_DIR}/include"
    "${FFMPEG_DIR}/include"
)

target_link_libraries(main PRIVATE
    SDL3::SDL3-shared
    "${FFMPEG_DIR}/lib/libavformat.a"
    "${FFMPEG_DIR}/lib/libavcodec.a"
    "${FFMPEG_DIR}/lib/libswscale.a"
    "${FFMPEG_DIR}/lib/libswresample.a"
    "${FFMPEG_DIR}/lib/libavutil.a"
    GLESv3
    EGL
    android
    log
    m
    z
)
