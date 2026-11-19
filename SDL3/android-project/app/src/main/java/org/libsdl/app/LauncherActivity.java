package org.libsdl.app;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.ActivityInfo;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.util.Log;
import android.util.TypedValue;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.SeekBar;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;
import android.app.AlertDialog;
import android.content.DialogInterface;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.URL;
import java.net.HttpURLConnection;
import android.os.Environment;
import org.json.JSONObject;
import org.json.JSONArray;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.nio.charset.StandardCharsets;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Locale;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;
import java.util.zip.ZipOutputStream;

public class LauncherActivity extends Activity {

    public static final String PREFS_NAME = "LOTDSettings";
    public static final String KEY_TARGET_FPS = "lotd_target_fps";
    public static final String KEY_HUD_OPACITY = "lotd_hud_opacity";
    public static final String KEY_HUD_SCALE = "lotd_hud_scale";
    public static final String KEY_HAPTIC = "lotd_haptic";
    public static final String KEY_SELECTED_MAP = "lotd_selected_map";
    public static final String KEY_SKIP_LAUNCHER = "lotd_skip_launcher";
    public static final String KEY_WIDESCREEN = "lotd_widescreen";
    public static final String KEY_RES_W = "lotd_res_w";
    public static final String KEY_RES_H = "lotd_res_h";
    public static final String KEY_TARGET_FOV = "lotd_target_fov";
    public static final String KEY_MUT_SPRINT = "lotd_mut_sprint";
    public static final String KEY_MUT_VAMP = "lotd_mut_vamp";
    public static final String KEY_MUT_LOWGRAV = "lotd_mut_lowgrav";
    public static final String KEY_MUT_SPEED = "lotd_mut_speed";
    public static final String KEY_SAVE_PROFILE = "lotd_save_profile";
    public static final String KEY_FAST_BOOT = "lotd_fast_boot";
    public static final String KEY_DEBUG_LOGS = "lotd_debug_logs";
    public static final String KEY_HITMARKER = "lotd_hitmarker";
    public static final String KEY_BRIGHTNESS = "lotd_brightness";
    public static final String KEY_AUTO_SPRINT = "lotd_auto_sprint";
    public static final String DEFAULT_SERVER_BOOKMARKS = "Phone Hotspot Host|192.168.43.1:7777;Community Horde Hub|lotd.servegame.com:7777;Survival Arena|lotd.hopto.org:7777;Local Wi-Fi Host|192.168.1.1:7777;Local Listen Server|127.0.0.1:7777";

    private SharedPreferences mPrefs;
    private int mTargetFps = 0; // 0: VSync/120, 60, 30
    private int mHudOpacity = 80; // %
    private float mHudScale = 1.0f;
    private boolean mHapticEnabled = true;
    private boolean mWidescreen = true;
    private int mResW = 1280;
    private int mResH = 720;
    private int mTargetFov = 0; // 0: Auto Hor+, 75, 95, 105, 115
    private float mBrightness = 1.25f;
    private boolean mAutoSprint = true;
    private String mSelectedMap = "";
    private boolean mSkipLauncher = false;
    private boolean mMutSprint = false;
    private boolean mMutVamp = false;
    private boolean mMutLowGrav = false;
    private boolean mMutSpeed = false;
    private int mSaveProfile = 0;

    public static String getLocalIpAddress() {
        try {
            for (java.util.Enumeration<java.net.NetworkInterface> en = java.net.NetworkInterface.getNetworkInterfaces(); en.hasMoreElements();) {
                java.net.NetworkInterface intf = en.nextElement();
                for (java.util.Enumeration<java.net.InetAddress> enumIpAddr = intf.getInetAddresses(); enumIpAddr.hasMoreElements();) {
                    java.net.InetAddress inetAddress = enumIpAddr.nextElement();
                    if (!inetAddress.isLoopbackAddress() && inetAddress instanceof java.net.Inet4Address) {
                        return inetAddress.getHostAddress();
                    }
                }
            }
        } catch (Throwable ignored) {}
        return "127.0.0.1";
    }

    public static String getCleanServerBookmarks(SharedPreferences p) {
        String raw = p.getString("lotd_server_bookmarks", "");
        if (raw == null || raw.trim().isEmpty() || !raw.contains("lotd.servegame.com") || raw.contains("lotd.us.to") || raw.contains("openspy") || raw.contains("utmaster")) {
            raw = DEFAULT_SERVER_BOOKMARKS;
            p.edit().putString("lotd_server_bookmarks", raw).apply();
        }
        return raw;
    }

    private void connectWithValidation(final String target, final AlertDialog dlg) {
        new Thread(new Runnable() {
            @Override public void run() {
                boolean ok = false;
                try {
                    String host = target;
                    int port = 7777;
                    if (target.contains(":")) {
                        String[] hp = target.split(":");
                        host = hp[0];
                        port = Integer.parseInt(hp[1]);
                    }
                    Socket s = new Socket();
                    s.connect(new InetSocketAddress(host, port), 600);
                    s.close();
                    ok = true;
                } catch (Throwable ignored) {}
                final boolean reachable = ok;
                runOnUiThread(new Runnable() {
                    @Override public void run() {
                        if (reachable) {
                            mSelectedMap = target;
                            if (dlg != null) dlg.dismiss();
                            launchGame();
                        } else {
                            new AlertDialog.Builder(LauncherActivity.this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
                                .setTitle("Host Server Standby / Offline")
                                .setMessage("No active match response from " + target + ".\n\nQuick Checklist:\n1. Make sure the Host phone has already started the match ('START HOST & PLAY').\n2. Both devices must be on the same Wi-Fi or Phone Hotspot.\n3. If joining a phone hotspot, use 192.168.43.1:7777.\n\nAttempt connection anyway?")
                                .setPositiveButton("CONNECT ANYWAY", new DialogInterface.OnClickListener() {
                                    @Override public void onClick(DialogInterface d, int which) {
                                        mSelectedMap = target;
                                        if (dlg != null) dlg.dismiss();
                                        launchGame();
                                    }
                                })
                                .setNegativeButton("CANCEL", null)
                                .show();
                        }
                    }
                });
            }
        }).start();
    }

    private float mDensity;

    private int dp(float v) {
        return (int) (v * mDensity + 0.5f);
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_SENSOR_LANDSCAPE);

        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN, WindowManager.LayoutParams.FLAG_FULLSCREEN);
        if (android.os.Build.VERSION.SDK_INT >= 28) {
            getWindow().getAttributes().layoutInDisplayCutoutMode =
                WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
        }

        mDensity = getResources().getDisplayMetrics().density;
        SDLActivity.hideSystemBars(getWindow());
        mPrefs = getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE);
        ensureServersFileExists();

        mSkipLauncher = mPrefs.getBoolean(KEY_SKIP_LAUNCHER, false);
        mTargetFps = mPrefs.getInt(KEY_TARGET_FPS, 0);
        mHudOpacity = mPrefs.getInt(KEY_HUD_OPACITY, 80);
        mHudScale = mPrefs.getFloat(KEY_HUD_SCALE, 1.0f);
        mHapticEnabled = mPrefs.getBoolean(KEY_HAPTIC, true);
        mWidescreen = mPrefs.getBoolean(KEY_WIDESCREEN, true);
        mResW = mPrefs.getInt(KEY_RES_W, 1280);
        mResH = mPrefs.getInt(KEY_RES_H, 720);
        mTargetFov = mPrefs.getInt(KEY_TARGET_FOV, 0);
        mSelectedMap = mPrefs.getString(KEY_SELECTED_MAP, "");
        mMutSprint = mPrefs.getBoolean(KEY_MUT_SPRINT, false);
        mMutVamp = mPrefs.getBoolean(KEY_MUT_VAMP, false);
        mMutLowGrav = mPrefs.getBoolean(KEY_MUT_LOWGRAV, false);
        mMutSpeed = mPrefs.getBoolean(KEY_MUT_SPEED, false);
        mSaveProfile = mPrefs.getInt(KEY_SAVE_PROFILE, 0);
        mBrightness = mPrefs.getFloat(KEY_BRIGHTNESS, 1.25f);
        mAutoSprint = mPrefs.getBoolean(KEY_AUTO_SPRINT, true);

        buildUi();
        checkStoragePermissionAndAssets();
    }

    private GradientDrawable createCardBg() {
        GradientDrawable gd = new GradientDrawable();
        gd.setColor(0xEE1E2328);
        gd.setCornerRadius(dp(10));
        gd.setStroke(dp(1), 0xFF374151);
        return gd;
    }

    private GradientDrawable createButtonBg(int normalColor, int strokeColor) {
        GradientDrawable gd = new GradientDrawable();
        gd.setColor(normalColor);
        gd.setCornerRadius(dp(8));
        if (strokeColor != 0) {
            gd.setStroke(dp(1.5f), strokeColor);
        }
        return gd;
    }

    public static void ensureServersFileExists() {
        String[] paths = {
            "/storage/emulated/0/LandOfTheDead/servers.txt",
            "/sdcard/LandOfTheDead/servers.txt"
        };
        for (String p : paths) {
            try {
                File f = new File(p);
                File dir = f.getParentFile();
                if (dir != null && !dir.exists()) dir.mkdirs();
                if (!f.exists()) {
                    StringBuilder sb = new StringBuilder();
                    sb.append("# Land of the Dead Community Servers List\n");
                    sb.append("# Format: Server Name|IP|GamePort|QueryPort|Map|GameType\n");
                    sb.append("LOTD Official Community Server [US/EU]|lotd.openspy.net|7777|7778|INFarm|DOTZGame.DOTZInvasion\n");
                    sb.append("Romero Outpost Invasion Co-op|127.0.0.1|7777|7778|INStation|DOTZGame.DOTZInvasion\n");
                    sb.append("Fiddler's Green Skirmish PVP|127.0.0.1|7777|7778|DMDowntown|DOTZGame.DOTZDeathMatch\n");
                    sb.append("Local LAN / Hotspot Co-op|192.168.43.1|7777|7778|INCemeteryPC|DOTZGame.DOTZInvasion\n");
                    java.io.FileWriter fw = new java.io.FileWriter(f);
                    fw.write(sb.toString());
                    fw.close();
                }
            } catch (Throwable ignored) {}
        }
    }

    private void buildUi() {
        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setBackgroundColor(0xFF14171A);
        root.setPadding(dp(16), dp(12), dp(16), dp(12));

        // Header Bar
        LinearLayout header = new LinearLayout(this);
        header.setOrientation(LinearLayout.HORIZONTAL);
        header.setGravity(Gravity.CENTER_VERTICAL);
        header.setPadding(dp(4), dp(0), dp(4), dp(8));

        LinearLayout titleBox = new LinearLayout(this);
        titleBox.setOrientation(LinearLayout.VERTICAL);
        titleBox.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));

        TextView title = new TextView(this);
        title.setText("LAND OF THE DEAD");
        title.setTextColor(0xFFD32F2F);
        title.setTextSize(TypedValue.COMPLEX_UNIT_SP, 22);
        title.setTypeface(Typeface.DEFAULT_BOLD);
        titleBox.addView(title);

        TextView subTitle = new TextView(this);
        subTitle.setText("ROAD TO FIDDLER'S GREEN // MOBILE SURVIVAL PORT");
        subTitle.setTextColor(0xFF90A4AE);
        subTitle.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        titleBox.addView(subTitle);

        TextView badge = new TextView(this);
        badge.setText("OPERATOR: XHYN_PH  |  STATUS: COMBAT READY");
        badge.setTextColor(0xFFFFB300);
        badge.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10);
        badge.setTypeface(Typeface.MONOSPACE);
        titleBox.addView(badge);

        header.addView(titleBox);

        // Trophies Button in Header (Stage 22)
        final Button achBtn = new Button(this);
        achBtn.setText("TROPHIES");
        achBtn.setTextColor(0xFFFFD54F);
        achBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 13);
        achBtn.setTypeface(Typeface.DEFAULT_BOLD);
        achBtn.setBackground(createButtonBg(0xFF1E2328, 0xFF374151));
        achBtn.setPadding(dp(16), dp(10), dp(16), dp(10));
        achBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) { showAchievementsDialog(); }
        });
        header.addView(achBtn);

        // Quick Resume Button in Header (Stage 22)
        File qrSave = findQuickResumeSave();
        if (qrSave != null) {
            final Button quickResumeBtn = new Button(this);
            quickResumeBtn.setText("RESUME MISSION");
            quickResumeBtn.setTextColor(0xFF000000);
            quickResumeBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 14);
            quickResumeBtn.setTypeface(Typeface.DEFAULT_BOLD);
            quickResumeBtn.setBackground(createButtonBg(0xFFFFB300, 0xFFFFE082));
            quickResumeBtn.setPadding(dp(18), dp(10), dp(18), dp(10));
            LinearLayout.LayoutParams qp = new LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
            qp.setMargins(dp(8), 0, dp(8), 0);
            quickResumeBtn.setLayoutParams(qp);
            quickResumeBtn.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    mSelectedMap = "Autosave_QuickResume";
                    launchGame();
                }
            });
            header.addView(quickResumeBtn);
        }

        // Multiplayer & Server Hub Button in Header (Stage 23)
        final Button mpBtn = new Button(this);
        mpBtn.setText("MULTIPLAYER");
        mpBtn.setTextColor(0xFF81D4FA);
        mpBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 13);
        mpBtn.setTypeface(Typeface.DEFAULT_BOLD);
        mpBtn.setBackground(createButtonBg(0xFF1E2836, 0xFF0288D1));
        mpBtn.setPadding(dp(18), dp(10), dp(18), dp(10));
        LinearLayout.LayoutParams mpLp = new LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        mpLp.setMargins(dp(8), 0, 0, 0);
        mpBtn.setLayoutParams(mpLp);
        mpBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) { showMultiplayerHubDialog(); }
        });
        header.addView(mpBtn);

        // Crash Report Alert Button in Header (Tier 3 Crash Recovery)
        File crashLog = findCrashLog();
        if (crashLog != null && crashLog.length() > 0) {
            final Button crashBtn = new Button(this);
            crashBtn.setText("CRASH REPORT");
            crashBtn.setTextColor(0xFFFF5252);
            crashBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
            crashBtn.setTypeface(Typeface.DEFAULT_BOLD);
            crashBtn.setBackground(createButtonBg(0xFF2C1B1B, 0xFFE53935));
            crashBtn.setPadding(dp(14), dp(10), dp(14), dp(10));
            LinearLayout.LayoutParams clp = new LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
            clp.setMargins(dp(8), 0, 0, 0);
            crashBtn.setLayoutParams(clp);
            final File finalCrashLog = crashLog;
            crashBtn.setOnClickListener(new View.OnClickListener() {
                @Override public void onClick(View v) { showCrashReportDialog(finalCrashLog); }
            });
            header.addView(crashBtn);
        }

        // Big Launch Game Button in Header
        final Button launchBtn = new Button(this);
        launchBtn.setText("DEPLOY / PLAY GAME");
        launchBtn.setTextColor(0xFFFFFFFF);
        launchBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 16);
        launchBtn.setTypeface(Typeface.DEFAULT_BOLD);
        launchBtn.setBackground(createButtonBg(0xFF8B1515, 0xFFFF5252));
        launchBtn.setPadding(dp(28), dp(10), dp(28), dp(10));
        LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        lp.setMargins(dp(8), 0, 0, 0);
        launchBtn.setLayoutParams(lp);
        launchBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                launchGame();
            }
        });
        header.addView(launchBtn);

        root.addView(header);

        // Scrollable Settings Cards
        ScrollView scrollView = new ScrollView(this);
        scrollView.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, 0, 1.0f));

        LinearLayout content = new LinearLayout(this);
        content.setOrientation(LinearLayout.HORIZONTAL);
        content.setWeightSum(2.0f);

        // Left Column: Game & Controls
        LinearLayout leftCol = new LinearLayout(this);
        leftCol.setOrientation(LinearLayout.VERTICAL);
        leftCol.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
        leftCol.setPadding(dp(4), dp(4), dp(8), dp(4));

        // Right Column: Graphics & Audio
        LinearLayout rightCol = new LinearLayout(this);
        rightCol.setOrientation(LinearLayout.VERTICAL);
        rightCol.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
        rightCol.setPadding(dp(8), dp(4), dp(4), dp(4));

        content.addView(leftCol);
        content.addView(rightCol);
        scrollView.addView(content);
        root.addView(scrollView);

        // --- Card 1: Mission / Level Select ---
        LinearLayout mapCard = createCard("MISSION & LEVEL SELECT");
        TextView mapLabel = createLabel("Starting Mission / Level:");
        mapCard.addView(mapLabel);

        final List<String> mapNamesList = new ArrayList<String>();
        final List<String> mapCodesList = new ArrayList<String>();

        mapNamesList.add("Default (Main Menu / Resume Save)"); mapCodesList.add("");
        mapNamesList.add("Chapter 1: The Farmhouse (CH01.dz)"); mapCodesList.add("CH01.dz");
        mapNamesList.add("Chapter 2: The Cornfield (CH02.dz)"); mapCodesList.add("CH02.dz");
        mapNamesList.add("Chapter 3: The Town (CH03.dz)"); mapCodesList.add("CH03.dz");
        mapNamesList.add("Chapter 4: The Church (CH04.dz)"); mapCodesList.add("CH04.dz");
        mapNamesList.add("Chapter 5: The Hospital (CH05.dz)"); mapCodesList.add("CH05.dz");
        mapNamesList.add("Chapter 6: The Sewers (CH06.dz)"); mapCodesList.add("CH06.dz");
        mapNamesList.add("Chapter 7: The Docks (CH07.dz)"); mapCodesList.add("CH07.dz");
        mapNamesList.add("Chapter 8: The Skyscraper (CH08.dz)"); mapCodesList.add("CH08.dz");

        // Dynamic Mod & Custom Map Scanning (Stage 15)
        String[] mapSearchPaths = {
            "/storage/emulated/0/LandOfTheDead/Maps",
            "/storage/emulated/0/LandOfTheDead/save/Maps",
            "/sdcard/LandOfTheDead/Maps"
        };
        for (String searchPath : mapSearchPaths) {
            File dir = new File(searchPath);
            if (dir.exists() && dir.isDirectory()) {
                File[] files = dir.listFiles();
                if (files != null) {
                    for (File f : files) {
                        String fname = f.getName();
                        if (fname.toLowerCase().endsWith(".dz") || fname.toLowerCase().endsWith(".unr")) {
                            if (!fname.equalsIgnoreCase("CH01.dz") && !fname.equalsIgnoreCase("CH02.dz") &&
                                !fname.equalsIgnoreCase("CH03.dz") && !fname.equalsIgnoreCase("CH04.dz") &&
                                !fname.equalsIgnoreCase("CH05.dz") && !fname.equalsIgnoreCase("CH06.dz") &&
                                !fname.equalsIgnoreCase("CH07.dz") && !fname.equalsIgnoreCase("CH08.dz") &&
                                !mapCodesList.contains(fname)) {
                                mapNamesList.add("Custom Map: " + fname);
                                mapCodesList.add(fname);
                            }
                        }
                    }
                }
            }
        }

        final String[] mapNames = mapNamesList.toArray(new String[0]);
        final String[] mapCodes = mapCodesList.toArray(new String[0]);

        Spinner mapSpinner = createSpinner(mapNames);
        int curMapIdx = 0;
        for (int i = 0; i < mapCodes.length; i++) {
            if (mapCodes[i].equalsIgnoreCase(mSelectedMap)) {
                curMapIdx = i;
                break;
            }
        }
        mapSpinner.setSelection(curMapIdx);
        mapSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> parent, View view, int position, long id) {
                mSelectedMap = mapCodes[position];
            }
            @Override public void onNothingSelected(AdapterView<?> parent) {}
        });
        mapCard.addView(mapSpinner);
        leftCol.addView(mapCard);

        // --- Card 5: Priority Mod VFS Layer & Mutators (Stage 19) ---
        LinearLayout modCard = createCard("MODS & MUTATORS (STAGE 19)");
        
        // Scan Mods directory (check both Mods and mods)
        File[] modDirCands = {
            new File("/storage/emulated/0/LandOfTheDead/Mods"),
            new File("/sdcard/LandOfTheDead/Mods"),
            new File("/storage/emulated/0/LandOfTheDead/mods"),
            new File("/sdcard/LandOfTheDead/mods")
        };
        File modDir = modDirCands[1]; // default /sdcard/LandOfTheDead/Mods
        for (File md : modDirCands) {
            if (md.exists() && md.isDirectory()) {
                modDir = md;
                break;
            }
        }
        if (!modDir.exists()) {
            modDir.mkdirs();
            try {
                File readme = new File(modDir, "README_MODS.txt");
                if (!readme.exists()) {
                    FileOutputStream fos = new FileOutputStream(readme);
                    fos.write(("Land of the Dead Priority Mod VFS Layer:\n" +
                               "Files placed in this folder (.utx, .uax, .usx, .dz, .ini) automatically override\n" +
                               "retail game files at load time without modifying original retail packages.\n").getBytes());
                    fos.close();
                }
            } catch (Throwable ignored) {}
        }
        int modCount = 0;
        File[] modFiles = modDir.listFiles();
        if (modFiles != null) {
            for (File f : modFiles) {
                if (f.isFile() && !f.getName().startsWith(".")) modCount++;
            }
        }
        TextView modInfo = new TextView(this);
        modInfo.setText(String.format(Locale.US, "- Mod VFS Folder: %s\n- Active Overrides: %d package(s) detected", modDir.getAbsolutePath(), modCount));
        modInfo.setTextColor(0xFF81C784);
        modInfo.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        modInfo.setPadding(0, dp(2), 0, dp(6));
        modCard.addView(modInfo);

        Button installModBtn = new Button(this);
        installModBtn.setText("INSTALL MOD / MAP (.ZIP FROM DOWNLOADS)");
        installModBtn.setTextColor(0xFFFFFFFF);
        installModBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        installModBtn.setBackground(createButtonBg(0xFF6A1B9A, 0xFF8E24AA));
        installModBtn.setPadding(dp(10), dp(6), dp(10), dp(6));
        installModBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                showModInstallerDialog();
            }
        });
        modCard.addView(installModBtn);

        leftCol.addView(modCard);

        // --- Card 6: Save Profiles & ZIP Backup / Restore (Stage 20) ---
        LinearLayout saveCard = createCard("SAVE PROFILES & BACKUP (STAGE 20)");

        TextView profHeader = new TextView(this);
        profHeader.setText("Active Operator: XHYN_PH");
        profHeader.setTextColor(0xFFFFD54F);
        profHeader.setTextSize(TypedValue.COMPLEX_UNIT_SP, 14);
        profHeader.setTypeface(Typeface.DEFAULT_BOLD);
        saveCard.addView(profHeader);

        TextView profSub = new TextView(this);
        profSub.setText("- Enforced Mobile Profile: XHYN_PH\n- In-Game Config: Graphics, Audio, Touch Rig & Cheats are located inside the in-game Settings Dialog (tap [ MENU ]).");
        profSub.setTextColor(0xFFB0BEC5);
        profSub.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        profSub.setPadding(0, dp(2), 0, dp(6));
        saveCard.addView(profSub);

        LinearLayout zipBtnRow = new LinearLayout(this);
        zipBtnRow.setOrientation(LinearLayout.HORIZONTAL);
        zipBtnRow.setPadding(0, dp(8), 0, dp(4));

        Button exportBtn = new Button(this);
        exportBtn.setText("EXPORT ZIP");
        exportBtn.setTextColor(0xFFFFFFFF);
        exportBtn.setBackground(createButtonBg(0xFF1565C0, 0xFF42A5F5));
        exportBtn.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
        exportBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                exportSavesToZip();
            }
        });
        zipBtnRow.addView(exportBtn);

        View zipSpacer = new View(this);
        zipSpacer.setLayoutParams(new LinearLayout.LayoutParams(dp(8), 1));
        zipBtnRow.addView(zipSpacer);

        Button importBtn = new Button(this);
        importBtn.setText("IMPORT ZIP");
        importBtn.setTextColor(0xFFFFFFFF);
        importBtn.setBackground(createButtonBg(0xFF2E7D32, 0xFF66BB6A));
        importBtn.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
        importBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                importSavesFromZip();
            }
        });
        zipBtnRow.addView(importBtn);

        saveCard.addView(zipBtnRow);
        rightCol.addView(saveCard);

        // Bottom Bar
        LinearLayout bottomBar = new LinearLayout(this);
        bottomBar.setOrientation(LinearLayout.HORIZONTAL);
        bottomBar.setGravity(Gravity.CENTER_VERTICAL);
        bottomBar.setPadding(dp(8), dp(8), dp(8), dp(4));

        final CheckBox skipCheck = new CheckBox(this);
        skipCheck.setText("Don't show this launcher on startup");
        skipCheck.setTextColor(0xFFB0BEC5);
        skipCheck.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        skipCheck.setChecked(mSkipLauncher);
        skipCheck.setOnCheckedChangeListener(new android.widget.CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(android.widget.CompoundButton buttonView, boolean isChecked) {
                mSkipLauncher = isChecked;
            }
        });
        bottomBar.addView(skipCheck);

        View spacer = new View(this);
        spacer.setLayoutParams(new LinearLayout.LayoutParams(0, 1, 1.0f));
        bottomBar.addView(spacer);

        Button exitBtn = new Button(this);
        exitBtn.setText("ABORT / EXIT");
        exitBtn.setTextColor(0xFFCFD8DC);
        exitBtn.setBackground(createButtonBg(0xFF1E2328, 0xFF374151));
        exitBtn.setPadding(dp(16), dp(6), dp(16), dp(6));
        exitBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                finish();
            }
        });
        bottomBar.addView(exitBtn);

        root.addView(bottomBar);

        setContentView(root);
    }

    private LinearLayout createCard(String headerTitle) {
        LinearLayout card = new LinearLayout(this);
        card.setOrientation(LinearLayout.VERTICAL);
        card.setBackground(createCardBg());
        card.setPadding(dp(12), dp(10), dp(12), dp(12));
        LinearLayout.LayoutParams params = new LinearLayout.LayoutParams(
            ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        params.setMargins(0, 0, 0, dp(10));
        card.setLayoutParams(params);

        TextView header = new TextView(this);
        header.setText(headerTitle);
        header.setTextColor(0xFFFFB300);
        header.setTextSize(TypedValue.COMPLEX_UNIT_SP, 13);
        header.setTypeface(Typeface.DEFAULT_BOLD);
        header.setPadding(0, 0, 0, dp(6));
        card.addView(header);

        return card;
    }

    private TextView createLabel(String text) {
        TextView tv = new TextView(this);
        tv.setText(text);
        tv.setTextColor(0xFFEEEEEE);
        tv.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        tv.setPadding(0, dp(6), 0, dp(2));
        return tv;
    }

    private Spinner createSpinner(String[] items) {
        Spinner sp = new Spinner(this);
        ArrayAdapter<String> adapter = new ArrayAdapter<String>(this, android.R.layout.simple_spinner_item, items) {
            @Override
            public View getView(int position, View convertView, ViewGroup parent) {
                View v = super.getView(position, convertView, parent);
                if (v instanceof TextView) {
                    ((TextView) v).setTextColor(0xFFFFFFFF);
                    ((TextView) v).setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
                }
                return v;
            }
            @Override
            public View getDropDownView(int position, View convertView, ViewGroup parent) {
                View v = super.getDropDownView(position, convertView, parent);
                if (v instanceof TextView) {
                    ((TextView) v).setTextColor(0xFFFFFFFF);
                    ((TextView) v).setBackgroundColor(0xFF1E222D);
                    ((TextView) v).setPadding(dp(12), dp(10), dp(12), dp(10));
                }
                return v;
            }
        };
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        sp.setAdapter(adapter);
        sp.setBackground(createButtonBg(0x552A3040, 0x44556688));
        return sp;
    }

    private File findQuickResumeSave() {
        File[] searchDirs = {
            new File("/storage/emulated/0/LandOfTheDead/Save"),
            new File("/storage/emulated/0/LandOfTheDead/save"),
            new File("/storage/emulated/0/LandOfTheDead/Saves"),
            new File("/sdcard/LandOfTheDead/Save"),
            new File("/sdcard/LandOfTheDead/save"),
            new File("/sdcard/LandOfTheDead/Saves"),
            new File(getExternalFilesDir(null), "Save"),
            new File(getExternalFilesDir(null), "save"),
            new File(getFilesDir(), "Save")
        };
        for (File d : searchDirs) {
            if (d != null && d.exists()) {
                File f = new File(d, "Autosave_QuickResume.usa");
                if (f.exists() && f.length() > 0) return f;
                File f2 = new File(new File(d, "XHYN_PH"), "Autosave_QuickResume.usa");
                if (f2.exists() && f2.length() > 0) return f2;
            }
        }
        return null;
    }

    private File findCrashLog() {
        String[] cands = {
            "/storage/emulated/0/LandOfTheDead/crash.log",
            "/sdcard/LandOfTheDead/crash.log",
            new File(getExternalFilesDir(null), "crash.log").getAbsolutePath(),
            new File(getFilesDir(), "crash.log").getAbsolutePath()
        };
        for (String c : cands) {
            File f = new File(c);
            if (f.exists() && f.length() > 0) return f;
        }
        return null;
    }

    private void showCrashReportDialog(final File crashLog) {
        StringBuilder sb = new StringBuilder();
        try {
            java.io.BufferedReader br = new java.io.BufferedReader(new java.io.FileReader(crashLog));
            String line;
            int lines = 0;
            while ((line = br.readLine()) != null && lines < 60) {
                sb.append(line).append("\n");
                lines++;
            }
            br.close();
        } catch (Throwable e) {
            sb.append("Failed to read crash log: ").append(e.getMessage());
        }

        ScrollView sv = new ScrollView(this);
        TextView tv = new TextView(this);
        tv.setText(sb.toString());
        tv.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        tv.setTextColor(0xFFCFD8DC);
        tv.setTypeface(Typeface.MONOSPACE);
        tv.setPadding(dp(16), dp(12), dp(16), dp(12));
        sv.addView(tv);

        new AlertDialog.Builder(this)
            .setTitle("NATIVE CRASH RECOVERY LOG")
            .setView(sv)
            .setPositiveButton("Dismiss", null)
            .setNeutralButton("Export Report", new DialogInterface.OnClickListener() {
                @Override public void onClick(DialogInterface d, int w) {
                    exportCrashReport();
                }
            })
            .setNegativeButton("Delete Log", new DialogInterface.OnClickListener() {
                @Override public void onClick(DialogInterface d, int w) {
                    try { crashLog.delete(); } catch (Throwable ignored) {}
                }
            })
            .show();
    }

    public static File findGameDirectory(Context ctx) {
        File[] candidates = {
            new File("/storage/emulated/0/LandOfTheDead"),
            new File("/storage/emulated/0/Land Of The Dead"),
            new File("/sdcard/LandOfTheDead"),
            new File("/sdcard/Land Of The Dead"),
            new File("/storage/emulated/0/Download/LandOfTheDead"),
            new File("/storage/emulated/0/Download/Land Of The Dead"),
            new File("/sdcard/Download/LandOfTheDead"),
            new File("/sdcard/Download/Land Of The Dead"),
            new File(ctx.getExternalFilesDir(null), "LandOfTheDead"),
            new File(ctx.getExternalFilesDir(null), "game"),
            ctx.getExternalFilesDir(null),
            new File(ctx.getFilesDir(), "LandOfTheDead"),
            ctx.getFilesDir()
        };

        String[] subexes = {
            "System/LOTD.exe", "system/lotd.exe", "System/lotd.exe", "system/LOTD.exe",
            "System/LotD.exe", "System/DOTD.exe", "system/dotd.exe"
        };

        for (File dir : candidates) {
            if (dir != null && dir.exists() && dir.isDirectory()) {
                for (String sub : subexes) {
                    File exe = new File(dir, sub);
                    if (exe.exists() && exe.isFile()) {
                        return dir;
                    }
                }
            }
        }
        return null;
    }

    private void checkStoragePermissionAndAssets() {
        if (android.os.Build.VERSION.SDK_INT >= 30 /* Android 11+ */) {
            if (!Environment.isExternalStorageManager()) {
                new AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
                    .setTitle("Storage Access Required")
                    .setMessage("Land of the Dead requires 'All files access' to load game maps, textures, and sounds from your device storage.\n\nPlease toggle 'Allow access to manage all files' on the next screen.")
                    .setCancelable(false)
                    .setPositiveButton("GRANT ACCESS", new DialogInterface.OnClickListener() {
                        @Override public void onClick(DialogInterface d, int which) {
                            try {
                                Intent intent = new Intent(android.provider.Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION);
                                intent.setData(android.net.Uri.parse("package:" + getPackageName()));
                                startActivity(intent);
                            } catch (Throwable t) {
                                Intent fallback = new Intent(android.provider.Settings.ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION);
                                startActivity(fallback);
                            }
                        }
                    })
                    .setNegativeButton("LATER", null)
                    .show();
                return;
            }
        } else if (android.os.Build.VERSION.SDK_INT >= 23) {
            if (checkSelfPermission(android.Manifest.permission.READ_EXTERNAL_STORAGE) != android.content.pm.PackageManager.PERMISSION_GRANTED) {
                requestPermissions(new String[]{android.Manifest.permission.READ_EXTERNAL_STORAGE, android.Manifest.permission.WRITE_EXTERNAL_STORAGE}, 101);
                return;
            }
        }

        File gameDir = findGameDirectory(this);
        if (gameDir == null) {
            showMissingAssetsDialog();
        } else {
            syncGameAssets(this, gameDir);
        }
    }

    private void showMissingAssetsDialog() {
        new AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
            .setTitle("Game Assets Not Found")
            .setMessage("Original PC retail game assets are required to play.\n\n"
                      + "Installation Steps:\n"
                      + "1. Copy your PC 'Land of the Dead' game folder into:\n"
                      + "/storage/emulated/0/LandOfTheDead/\n\n"
                      + "Required Subfolders:\n"
                      + "• System/ (containing LOTD.exe)\n"
                      + "• Maps/ (containing CH01.dz, etc.)\n"
                      + "• Textures/\n"
                      + "• Sounds/\n"
                      + "• StaticMeshes/\n"
                      + "• Animations/\n\n"
                      + "Or place the folder in Downloads or App Storage.")
            .setPositiveButton("CREATE FOLDER & GUIDE", new DialogInterface.OnClickListener() {
                @Override public void onClick(DialogInterface d, int which) {
                    File target = new File("/storage/emulated/0/LandOfTheDead");
                    if (!target.exists()) target.mkdirs();
                    File sys = new File(target, "System");
                    if (!sys.exists()) sys.mkdirs();
                    Toast.makeText(LauncherActivity.this, "Created target folder:\n" + target.getAbsolutePath(), Toast.LENGTH_LONG).show();
                }
            })
            .setNeutralButton("OPEN MOD/ZIP INSTALLER", new DialogInterface.OnClickListener() {
                @Override public void onClick(DialogInterface d, int which) {
                    showModInstallerDialog();
                }
            })
            .setNegativeButton("CLOSE", null)
            .show();
    }

    private void exportCrashReport() {
        new Thread(new Runnable() {
            @Override public void run() {
                try {
                    File outDir = Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS);
                    if (outDir == null || !outDir.exists()) outDir = new File("/storage/emulated/0/Download");
                    if (!outDir.exists()) outDir.mkdirs();
                    File zipFile = new File(outDir, "LOTD_Diagnostic_Report.zip");
                    FileOutputStream fos = new FileOutputStream(zipFile);
                    ZipOutputStream zos = new ZipOutputStream(fos);

                    String[] candidateLogs = {
                        "/storage/emulated/0/LandOfTheDead/port.log",
                        "/storage/emulated/0/LandOfTheDead/crash.log",
                        "/storage/emulated/0/LandOfTheDead/System/LOTD.log",
                        "/sdcard/LandOfTheDead/port.log",
                        "/sdcard/LandOfTheDead/crash.log",
                        "/sdcard/LandOfTheDead/System/LOTD.log"
                    };

                    int filesCount = 0;
                    byte[] buf = new byte[8192];
                    for (String lp : candidateLogs) {
                        File f = new File(lp);
                        if (f.exists() && f.isFile()) {
                            zos.putNextEntry(new ZipEntry(f.getName()));
                            FileInputStream fis = new FileInputStream(f);
                            int len;
                            while ((len = fis.read(buf)) > 0) zos.write(buf, 0, len);
                            fis.close();
                            zos.closeEntry();
                            filesCount++;
                        }
                    }

                    // Add system info
                    zos.putNextEntry(new ZipEntry("device_info.txt"));
                    String info = "Device: " + android.os.Build.MANUFACTURER + " " + android.os.Build.MODEL + "\n"
                                + "Android: " + android.os.Build.VERSION.RELEASE + " (API " + android.os.Build.VERSION.SDK_INT + ")\n"
                                + "SoC: " + android.os.Build.HARDWARE + " / " + android.os.Build.BOARD + "\n"
                                + "ABI: " + android.os.Build.SUPPORTED_ABIS[0] + "\n";
                    zos.write(info.getBytes(StandardCharsets.UTF_8));
                    zos.closeEntry();

                    zos.close();
                    fos.close();

                    final String outPath = zipFile.getAbsolutePath();
                    final int count = filesCount;
                    runOnUiThread(new Runnable() {
                        @Override public void run() {
                            Toast.makeText(LauncherActivity.this, "Exported diagnostic report (" + count + " logs) to:\n" + outPath, Toast.LENGTH_LONG).show();
                        }
                    });
                } catch (Throwable t) {
                    final String err = t.getMessage();
                    runOnUiThread(new Runnable() {
                        @Override public void run() {
                            Toast.makeText(LauncherActivity.this, "Diagnostic export failed: " + err, Toast.LENGTH_SHORT).show();
                        }
                    });
                }
            }
        }).start();
    }

    private void showAchievementsDialog() {
        final LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setPadding(dp(16), dp(12), dp(16), dp(12));
        root.setBackgroundColor(0xFF141822);

        TextView title = new TextView(this);
        title.setText("[TROPHIES] CAMPAIGN ACHIEVEMENTS");
        title.setTextColor(0xFFFFD54F);
        title.setTypeface(Typeface.DEFAULT_BOLD);
        title.setTextSize(TypedValue.COMPLEX_UNIT_SP, 16);
        title.setPadding(0, 0, 0, dp(6));
        root.addView(title);

        final String[][] achData = {
            {"first_blood", "First Blood", "Defeat your first walking corpse."},
            {"headshot_master", "Headshot Master", "Score 25 decapitations with precision headshots."},
            {"lumberjack", "Lumberjack", "Clear zombie hordes using Melee weapons (Axe/Bat/Hammer)."},
            {"escape_farm", "Escape the Farm", "Survive the initial farm assault in Chapter 1."},
            {"code_blue", "Code Blue", "Break out of Memorial Hospital in Chapter 2."},
            {"main_street", "Main Street Legend", "Survive the infested city streets in Chapter 3."},
            {"gunslinger", "Gunslinger", "Fire over 500 rounds of firearm ammunition."},
            {"pyro", "Pyromaniac", "Incinerate zombies with Molotov cocktails or Grenades."},
            {"romero_fan", "Romero's Vision", "Experience the nightmare in 1968 B&W Grain Mode."},
            {"lan_warrior", "Survivor Squad", "Host or join a LAN/Online multiplayer match."},
            {"speed_demon", "Speed Demon", "Activate 1.4x Fast Movement Speed Mutator."},
            {"console_hacker", "Console Hacker", "Execute custom engine commands via GExec."}
        };

        SharedPreferences prefs = getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE);
        int unlockedCount = 0;
        for (String[] a : achData) {
            if (prefs.getBoolean("lotd_ach_" + a[0], false)) unlockedCount++;
        }

        TextView summary = new TextView(this);
        summary.setText(String.format(Locale.US, "Trophy Progress: %d / %d Unlocked", unlockedCount, achData.length));
        summary.setTextColor(0xFF80CBC4);
        summary.setTextSize(TypedValue.COMPLEX_UNIT_SP, 13);
        summary.setPadding(0, 0, 0, dp(8));
        root.addView(summary);

        LinearLayout list = new LinearLayout(this);
        list.setOrientation(LinearLayout.VERTICAL);
        ScrollView sv = new ScrollView(this);
        sv.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, dp(220)));
        sv.addView(list);
        root.addView(sv);

        for (String[] a : achData) {
            boolean unlocked = prefs.getBoolean("lotd_ach_" + a[0], false);
            String dateStr = prefs.getString("lotd_ach_date_" + a[0], "");

            LinearLayout row = new LinearLayout(this);
            row.setOrientation(LinearLayout.VERTICAL);
            row.setPadding(dp(8), dp(6), dp(8), dp(6));
            row.setBackgroundColor(unlocked ? 0x332E7D32 : 0x221E2430);

            TextView nameView = new TextView(this);
            nameView.setText((unlocked ? "[UNLOCKED] " : "[LOCKED] ") + a[1]);
            nameView.setTextColor(unlocked ? 0xFFFFD54F : 0xFF888888);
            nameView.setTypeface(Typeface.DEFAULT_BOLD);
            nameView.setTextSize(TypedValue.COMPLEX_UNIT_SP, 13);
            row.addView(nameView);

            TextView descView = new TextView(this);
            descView.setText(a[2] + (unlocked && !dateStr.isEmpty() ? " (Unlocked: " + dateStr + ")" : ""));
            descView.setTextColor(unlocked ? 0xFFE0E0E0 : 0xFF666666);
            descView.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
            row.addView(descView);

            list.addView(row);
            View divider = new View(this);
            divider.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, 1));
            divider.setBackgroundColor(0x33FFFFFF);
            list.addView(divider);
        }

        new android.app.AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
            .setView(root)
            .setPositiveButton("CLOSE", null)
            .show();
    }

    private void showMultiplayerHubDialog() {
        final AlertDialog[] dialogHolder = new AlertDialog[1];
        final LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setPadding(dp(16), dp(12), dp(16), dp(12));
        root.setBackgroundColor(0xFF141822);

        TextView title = new TextView(this);
        title.setText("[SERVERS] MULTIPLAYER & ONLINE BROWSER");
        title.setTextColor(0xFF4FC3F7);
        title.setTypeface(Typeface.DEFAULT_BOLD);
        title.setTextSize(TypedValue.COMPLEX_UNIT_SP, 16);
        title.setPadding(0, 0, 0, dp(2));
        root.addView(title);

        final String myIp = getLocalIpAddress();
        TextView ipInfo = new TextView(this);
        ipInfo.setText("Device Local IP: " + myIp + ":7777");
        ipInfo.setTextColor(0xFF81C784);
        ipInfo.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        ipInfo.setPadding(0, 0, 0, dp(8));
        root.addView(ipInfo);

        ScrollView sv = new ScrollView(this);
        sv.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, dp(340)));
        final LinearLayout scrollContent = new LinearLayout(this);
        scrollContent.setOrientation(LinearLayout.VERTICAL);
        sv.addView(scrollContent);
        root.addView(sv);

        // Section 0: Quick Play & Instant Co-op Actions
        LinearLayout quickSection = createCard("QUICK PLAY & INSTANT MULTIPLAYER");
        quickSection.setPadding(dp(8), dp(6), dp(8), dp(6));

        Button hostInvasionBtn = new Button(this);
        hostInvasionBtn.setText("HOST INVASION (CO-OP / SOLO)");
        hostInvasionBtn.setTextColor(0xFFFFFFFF);
        hostInvasionBtn.setTypeface(Typeface.DEFAULT_BOLD);
        hostInvasionBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        hostInvasionBtn.setBackground(createButtonBg(0xFFC2185B, 0xFFE91E63));
        hostInvasionBtn.setPadding(dp(12), dp(8), dp(12), dp(8));
        hostInvasionBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                mSelectedMap = "INFarm.dz?Game=DOTZGame.DOTZInvasion?Listen";
                if (dialogHolder[0] != null) dialogHolder[0].dismiss();
                launchGame();
            }
        });
        quickSection.addView(hostInvasionBtn);

        TextView quickHelp = new TextView(this);
        quickHelp.setText("- Starts instant Zombie Horde Survival match on this device.\n- Friends on your Wi-Fi or Hotspot can join you anytime!");
        quickHelp.setTextColor(0xFF90A4AE);
        quickHelp.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10);
        quickHelp.setPadding(0, dp(4), 0, dp(6));
        quickSection.addView(quickHelp);

        Button joinHotspotBtn = new Button(this);
        joinHotspotBtn.setText("JOIN PHONE HOTSPOT HOST (192.168.43.1:7777)");
        joinHotspotBtn.setTextColor(0xFFFFFFFF);
        joinHotspotBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        joinHotspotBtn.setBackground(createButtonBg(0xFF00695C, 0xFF00897B));
        joinHotspotBtn.setPadding(dp(10), dp(6), dp(10), dp(6));
        joinHotspotBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                connectWithValidation("192.168.43.1:7777", dialogHolder[0]);
            }
        });
        quickSection.addView(joinHotspotBtn);
        scrollContent.addView(quickSection);

        // Section 1: Active LAN Servers
        LinearLayout lanSection = createCard("1. LOCAL WI-FI / HOTSPOT GAMES (LAN)");
        lanSection.setPadding(dp(8), dp(6), dp(8), dp(6));
        final TextView lanStatus = createLabel("Tap 'Scan' to discover games on your Wi-Fi/Hotspot:");
        lanSection.addView(lanStatus);

        final LinearLayout lanList = new LinearLayout(this);
        lanList.setOrientation(LinearLayout.VERTICAL);
        lanSection.addView(lanList);

        Button scanBtn = new Button(this);
        scanBtn.setText("SCAN LOCAL WI-FI");
        scanBtn.setTextColor(0xFFFFFFFF);
        scanBtn.setBackground(createButtonBg(0xFF1565C0, 0xFF1976D2));
        scanBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        scanBtn.setPadding(dp(10), dp(6), dp(10), dp(6));
        lanSection.addView(scanBtn);
        scrollContent.addView(lanSection);

        // Section 2: Online Servers & Community Bookmarks
        LinearLayout onlineSection = createCard("2. ONLINE COMMUNITY SERVERS & BOOKMARKS");
        onlineSection.setPadding(dp(8), dp(6), dp(8), dp(6));

        final TextView masterStatus = new TextView(this);
        masterStatus.setText("Syncing 333networks & community master directory...");
        masterStatus.setTextColor(0xFF81D4FA);
        masterStatus.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10);
        masterStatus.setPadding(0, dp(2), 0, dp(4));
        onlineSection.addView(masterStatus);

        final LinearLayout bmkList = new LinearLayout(this);
        bmkList.setOrientation(LinearLayout.VERTICAL);
        onlineSection.addView(bmkList);

        new Thread(new Runnable() {
            @Override public void run() {
                int count = 0;
                final List<String[]> masterServers = new ArrayList<String[]>();
                try {
                    URL u = new URL("https://master.333networks.com/json/lotd");
                    HttpURLConnection conn = (HttpURLConnection) u.openConnection();
                    conn.setConnectTimeout(3500);
                    conn.setReadTimeout(3500);
                    conn.setInstanceFollowRedirects(true);
                    if (conn.getResponseCode() == 200) {
                        BufferedReader br = new BufferedReader(new InputStreamReader(conn.getInputStream()));
                        StringBuilder sb = new StringBuilder();
                        String line;
                        while ((line = br.readLine()) != null) sb.append(line);
                        br.close();
                        JSONArray arr = new JSONArray(sb.toString());
                        if (arr.length() > 0 && arr.get(0) instanceof JSONArray) {
                            JSONArray svrs = arr.getJSONArray(0);
                            count = svrs.length();
                            for (int i = 0; i < svrs.length(); i++) {
                                JSONObject o = svrs.getJSONObject(i);
                                String sName = o.optString("hostname", "LOTD Server");
                                String sIp = o.optString("ip", "");
                                int sPort = o.optInt("port", 7777);
                                String sMap = o.optString("mapname", "");
                                if (!sIp.isEmpty()) {
                                    masterServers.add(new String[]{sName + (sMap.isEmpty() ? "" : " [" + sMap + "]"), sIp + ":" + sPort});
                                }
                            }
                        }
                    }
                } catch (Throwable ignored) {}
                final int finalCount = count;
                runOnUiThread(new Runnable() {
                    @Override public void run() {
                        if (finalCount == 0) {
                            masterStatus.setText("333networks Master Directory: Connected (0 active public games right now)");
                        } else {
                            masterStatus.setText("333networks Master Directory: " + finalCount + " active match(es) online!");
                            for (final String[] ms : masterServers) {
                                LinearLayout mRow = new LinearLayout(LauncherActivity.this);
                                mRow.setOrientation(LinearLayout.HORIZONTAL);
                                mRow.setGravity(Gravity.CENTER_VERTICAL);
                                mRow.setPadding(0, dp(4), 0, dp(4));

                                TextView mLabel = new TextView(LauncherActivity.this);
                                mLabel.setText("[ONLINE] " + ms[0] + " (" + ms[1] + ")");
                                mLabel.setTextColor(0xFF80D8FF);
                                mLabel.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
                                mLabel.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
                                mRow.addView(mLabel);

                                Button mJoin = new Button(LauncherActivity.this);
                                mJoin.setText("JOIN");
                                mJoin.setTextColor(0xFFFFFFFF);
                                mJoin.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10);
                                mJoin.setBackground(createButtonBg(0xFF0277BD, 0xFF0288D1));
                                mJoin.setPadding(dp(12), dp(4), dp(12), dp(4));
                                mJoin.setOnClickListener(new View.OnClickListener() {
                                    @Override public void onClick(View v) {
                                        connectWithValidation(ms[1], dialogHolder[0]);
                                    }
                                });
                                mRow.addView(mJoin);
                                bmkList.addView(mRow, 0);
                            }
                        }
                    }
                });
            }
        }).start();

        final Runnable[] refreshBookmarks = new Runnable[1];
        refreshBookmarks[0] = new Runnable() {
            @Override
            public void run() {
                bmkList.removeAllViews();
                String raw = getCleanServerBookmarks(mPrefs);
                String[] entries = raw.split(";");
                for (final String e : entries) {
                    if (e.trim().isEmpty()) continue;
                    final String[] parts = e.split("\\|");
                    final String name = parts.length > 0 ? parts[0] : "Server";
                    final String addr = parts.length > 1 ? parts[1] : e;

                    LinearLayout row = new LinearLayout(LauncherActivity.this);
                    row.setOrientation(LinearLayout.HORIZONTAL);
                    row.setGravity(Gravity.CENTER_VERTICAL);
                    row.setPadding(0, dp(4), 0, dp(4));

                    final TextView label = new TextView(LauncherActivity.this);
                    label.setText("[BMK] " + name + " (" + addr + ")");
                    label.setTextColor(0xFFCFD8DC);
                    label.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
                    label.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
                    row.addView(label);

                    final TextView pingView = new TextView(LauncherActivity.this);
                    pingView.setText("...");
                    pingView.setTextColor(0xFF888888);
                    pingView.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10);
                    pingView.setPadding(dp(4), 0, dp(6), 0);
                    row.addView(pingView);

                    // Background ping probe
                    new Thread(new Runnable() {
                        @Override public void run() {
                            long start = System.currentTimeMillis();
                            boolean ok = false;
                            try {
                                String host = addr;
                                int port = 7777;
                                if (addr.contains(":")) {
                                    String[] hp = addr.split(":");
                                    host = hp[0];
                                    port = Integer.parseInt(hp[1]);
                                }
                                Socket s = new Socket();
                                s.connect(new InetSocketAddress(host, port), 1000);
                                s.close();
                                ok = true;
                            } catch (Throwable ignored) {}
                            final long latency = System.currentTimeMillis() - start;
                            final boolean live = ok;
                            runOnUiThread(new Runnable() {
                                @Override public void run() {
                                    if (live) {
                                        pingView.setText("[OK] " + latency + "ms");
                                        pingView.setTextColor(0xFF69F0AE);
                                    } else {
                                        pingView.setText("[IDLE]");
                                        pingView.setTextColor(0xFF9E9E9E);
                                    }
                                }
                            });
                        }
                    }).start();

                    Button joinBtn = new Button(LauncherActivity.this);
                    joinBtn.setText("JOIN");
                    joinBtn.setTextColor(0xFFFFFFFF);
                    joinBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10);
                    joinBtn.setBackground(createButtonBg(0xFF2E7D32, 0xFF388E3C));
                    joinBtn.setPadding(dp(12), dp(4), dp(12), dp(4));
                    joinBtn.setOnClickListener(new View.OnClickListener() {
                        @Override public void onClick(View v) {
                            connectWithValidation(addr, dialogHolder[0]);
                        }
                    });
                    row.addView(joinBtn);

                    Button delBtn = new Button(LauncherActivity.this);
                    delBtn.setText("X");
                    delBtn.setTextColor(0xFFE57373);
                    delBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10);
                    delBtn.setBackground(createButtonBg(0xFF37474F, 0xFF455A64));
                    delBtn.setPadding(dp(8), dp(4), dp(8), dp(4));
                    LinearLayout.LayoutParams dlp = new LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
                    dlp.setMargins(dp(4), 0, 0, 0);
                    delBtn.setLayoutParams(dlp);
                    delBtn.setOnClickListener(new View.OnClickListener() {
                        @Override public void onClick(View v) {
                            String cur = mPrefs.getString("lotd_server_bookmarks", "");
                            String[] curEntries = cur.split(";");
                            StringBuilder sb = new StringBuilder();
                            for (String ce : curEntries) {
                                if (ce.trim().isEmpty() || ce.equals(e)) continue;
                                if (sb.length() > 0) sb.append(";");
                                sb.append(ce);
                            }
                            mPrefs.edit().putString("lotd_server_bookmarks", sb.toString()).apply();
                            if (refreshBookmarks[0] != null) refreshBookmarks[0].run();
                        }
                    });
                    row.addView(delBtn);

                    bmkList.addView(row);
                }
            }
        };
        refreshBookmarks[0].run();

        // Add Bookmark button
        Button addBmkBtn = new Button(this);
        addBmkBtn.setText("+ ADD CUSTOM SERVER");
        addBmkBtn.setTextColor(0xFF80CBC4);
        addBmkBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        addBmkBtn.setBackground(createButtonBg(0xFF004D40, 0xFF00695C));
        addBmkBtn.setPadding(dp(10), dp(6), dp(10), dp(6));
        addBmkBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                LinearLayout abRoot = new LinearLayout(LauncherActivity.this);
                abRoot.setOrientation(LinearLayout.VERTICAL);
                abRoot.setPadding(dp(16), dp(10), dp(16), dp(10));

                final EditText nameEt = new EditText(LauncherActivity.this);
                nameEt.setHint("Server Name (e.g. Squad Server)");
                nameEt.setTextColor(0xFFFFFFFF);
                abRoot.addView(nameEt);

                final EditText addrEt = new EditText(LauncherActivity.this);
                addrEt.setHint("IP:Port (e.g. 192.168.1.50:7777)");
                addrEt.setTextColor(0xFFFFFFFF);
                abRoot.addView(addrEt);

                new AlertDialog.Builder(LauncherActivity.this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
                    .setTitle("Add Custom Server Bookmark")
                    .setView(abRoot)
                    .setPositiveButton("ADD", new DialogInterface.OnClickListener() {
                        @Override public void onClick(DialogInterface d, int which) {
                            String n = nameEt.getText().toString().trim();
                            String a = addrEt.getText().toString().trim();
                            if (n.isEmpty()) n = "Server";
                            if (!a.isEmpty()) {
                                String cur = getCleanServerBookmarks(mPrefs);
                                cur += ";" + n + "|" + a;
                                mPrefs.edit().putString("lotd_server_bookmarks", cur).apply();
                                if (refreshBookmarks[0] != null) refreshBookmarks[0].run();
                            }
                        }
                    })
                    .setNegativeButton("CANCEL", null)
                    .show();
            }
        });
        onlineSection.addView(addBmkBtn);
        scrollContent.addView(onlineSection);

        // Section 3: Host Match Wizard
        LinearLayout hostSection = createCard("3. HOST CO-OP INVASION / MULTIPLAYER GAME");
        hostSection.setPadding(dp(8), dp(6), dp(8), dp(6));

        hostSection.addView(createLabel("Select Multiplayer Level / Map:"));
        final String[] mpMaps = {
            "INFarm.dz - Invasion: Farmhouse Horde (Co-op)",
            "INGarage.dz - Invasion: Garage (Co-op)",
            "INHouse.dz - Invasion: House (Co-op)",
            "INStation.dz - Invasion: Police Station (Co-op)",
            "INCemeteryPC.dz - Invasion: Cemetery (Co-op)",
            "INRingBigPC.dz - Invasion: Arena (Co-op)",
            "DMHospital.dz - Deathmatch: Hospital",
            "DMTheater.dz - Deathmatch: Theater",
            "DMDowntown.dz - Deathmatch: Downtown",
            "DMWarehouse.dz - Deathmatch: Warehouse",
            "CTFRooftops.dz - CTF: Rooftops",
            "CTFSewers.dz - CTF: Sewers",
            "CTFStation.dz - CTF: Police Station",
            "CH01.dz - Campaign Farmhouse (Co-op)"
        };
        final String[] mpMapFiles = {
            "INFarm.dz", "INGarage.dz", "INHouse.dz", "INStation.dz", "INCemeteryPC.dz", "INRingBigPC.dz",
            "DMHospital.dz", "DMTheater.dz", "DMDowntown.dz", "DMWarehouse.dz", "CTFRooftops.dz", "CTFSewers.dz", "CTFStation.dz", "CH01.dz"
        };
        final Spinner mpMapSpinner = createSpinner(mpMaps);
        hostSection.addView(mpMapSpinner);

        hostSection.addView(createLabel("Game Type / Mode:"));
        final String[] gameTypes = {
            "Invasion (Co-op Zombie Survival)",
            "Deathmatch (Free-for-All)",
            "Team Deathmatch",
            "Capture the Flag"
        };
        final String[] gameClasses = {
            "DOTZGame.DOTZInvasion",
            "DOTZGame.DOTZDeathMatch",
            "DOTZGame.DOTZDeathMatch",
            "DOTZGame.DOTZCaptureTheFlag"
        };
        final Spinner gameTypeSpinner = createSpinner(gameTypes);
        hostSection.addView(gameTypeSpinner);

        hostSection.addView(createLabel("AI Bots / Skirmish Count:"));
        final String[] botOpts = {
            "0 Bots (Solo / Real Players Only)",
            "2 Bots (Light Skirmish)",
            "4 Bots (Balanced Skirmish)",
            "8 Bots (Full Arena Chaos)"
        };
        final int[] botNums = { 0, 2, 4, 8 };
        final Spinner botSpinner = createSpinner(botOpts);
        hostSection.addView(botSpinner);

        TextView hostHelp = new TextView(this);
        hostHelp.setText("- Host match starts on this device.\n- Share your IP (" + myIp + ":7777) with friends on the same Wi-Fi/Hotspot/VPN to join!");
        hostHelp.setTextColor(0xFFB0BEC5);
        hostHelp.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        hostHelp.setPadding(0, dp(4), 0, dp(6));
        hostSection.addView(hostHelp);

        Button startHostBtn = new Button(this);
        startHostBtn.setText("START HOST & PLAY");
        startHostBtn.setTextColor(0xFFFFFFFF);
        startHostBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 13);
        startHostBtn.setTypeface(Typeface.DEFAULT_BOLD);
        startHostBtn.setBackground(createButtonBg(0xFFC2185B, 0xFFE91E63));
        startHostBtn.setPadding(dp(16), dp(8), dp(16), dp(8));
        startHostBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                int mapPos = mpMapSpinner.getSelectedItemPosition();
                int gamePos = gameTypeSpinner.getSelectedItemPosition();
                int botPos = botSpinner.getSelectedItemPosition();
                String selMap = (mapPos >= 0 && mapPos < mpMapFiles.length) ? mpMapFiles[mapPos] : "INFarm.dz";
                String selGame = (gamePos >= 0 && gamePos < gameClasses.length) ? gameClasses[gamePos] : "DOTZGame.DOTZInvasion";
                int bots = (botPos >= 0 && botPos < botNums.length) ? botNums[botPos] : 0;
                String cmd = selMap + "?Game=" + selGame;
                if (bots > 0) cmd += "?NumBots=" + bots;
                cmd += "?Listen";
                mSelectedMap = cmd;
                launchGame();
            }
        });
        hostSection.addView(startHostBtn);
        scrollContent.addView(hostSection);

        // Section 4: Direct Connect
        LinearLayout directSection = createCard("4. DIRECT IP / PORT CONNECT");
        directSection.setPadding(dp(8), dp(6), dp(8), dp(6));

        LinearLayout directBox = new LinearLayout(this);
        directBox.setOrientation(LinearLayout.HORIZONTAL);
        directBox.setGravity(Gravity.CENTER_VERTICAL);

        final EditText ipInput = new EditText(this);
        ipInput.setHint("192.168.1.100:7777");
        ipInput.setText(myIp.substring(0, Math.max(0, myIp.lastIndexOf('.') + 1)));
        ipInput.setTextColor(0xFFFFFFFF);
        ipInput.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        ipInput.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
        directBox.addView(ipInput);

        Button directBtn = new Button(this);
        directBtn.setText("CONNECT");
        directBtn.setTextColor(0xFFFFFFFF);
        directBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        directBtn.setBackground(createButtonBg(0xFF2E7D32, 0xFF388E3C));
        directBtn.setPadding(dp(14), dp(6), dp(14), dp(6));
        directBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                String target = ipInput.getText().toString().trim();
                if (!target.isEmpty()) {
                    connectWithValidation(target, dialogHolder[0]);
                }
            }
        });
        directBox.addView(directBtn);
        directSection.addView(directBox);
        scrollContent.addView(directSection);

        dialogHolder[0] = new AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
            .setView(root)
            .setNegativeButton("CLOSE", null)
            .create();

        scanBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                lanList.removeAllViews();
                lanStatus.setText("Scanning Wi-Fi & Hotspot network (ports 7777, 7778, 8777)...");
                new Thread(new Runnable() {
                    @Override public void run() {
                        final List<String> found = new ArrayList<String>();
                        try {
                            DatagramSocket sock = new DatagramSocket();
                            sock.setBroadcast(true);
                            sock.setSoTimeout(1000);
                            byte[] query = "\\basic\\\\info\\".getBytes(StandardCharsets.US_ASCII);
                            int[] ports = { 7777, 7778, 8777 };

                            // 1. Send broadcast beacons
                            List<String> broadcastTargets = new ArrayList<String>();
                            broadcastTargets.add("255.255.255.255");
                            broadcastTargets.add("192.168.43.255");
                            if (myIp != null && myIp.contains(".")) {
                                String subnet = myIp.substring(0, myIp.lastIndexOf('.') + 1);
                                broadcastTargets.add(subnet + "255");
                            }

                            for (String targetIp : broadcastTargets) {
                                for (int p : ports) {
                                    try {
                                        DatagramPacket pkt = new DatagramPacket(query, query.length, InetAddress.getByName(targetIp), p);
                                        sock.send(pkt);
                                    } catch (Throwable ignored) {}
                                }
                            }

                            // 2. Direct probe common gateways: 192.168.43.1 and local subnet .1
                            List<String> probeIps = new ArrayList<String>();
                            probeIps.add("192.168.43.1");
                            if (myIp != null && myIp.contains(".")) {
                                String subnet = myIp.substring(0, myIp.lastIndexOf('.') + 1);
                                probeIps.add(subnet + "1");
                            }

                            for (String pip : probeIps) {
                                if (pip.equals(myIp)) continue;
                                for (int p : ports) {
                                    try {
                                        DatagramPacket pkt = new DatagramPacket(query, query.length, InetAddress.getByName(pip), p);
                                        sock.send(pkt);
                                    } catch (Throwable ignored) {}
                                }
                            }

                            // 3. Receive responses
                            byte[] buf = new byte[2048];
                            long deadline = System.currentTimeMillis() + 1500;
                            while (System.currentTimeMillis() < deadline) {
                                try {
                                    DatagramPacket recv = new DatagramPacket(buf, buf.length);
                                    sock.receive(recv);
                                    String resp = new String(recv.getData(), 0, recv.getLength(), StandardCharsets.US_ASCII);
                                    String host = recv.getAddress().getHostAddress() + ":" + recv.getPort();
                                    found.add(host + " | " + resp);
                                } catch (Throwable ignored) {
                                    break;
                                }
                            }
                            sock.close();

                            // 4. Quick TCP check for 192.168.43.1:7777 (Hotspot host) if not already found
                            boolean hasHotspot = false;
                            for (String f : found) if (f.contains("192.168.43.1")) { hasHotspot = true; break; }
                            if (!hasHotspot && !myIp.equals("192.168.43.1")) {
                                try {
                                    Socket ts = new Socket();
                                    ts.connect(new InetSocketAddress("192.168.43.1", 7777), 400);
                                    ts.close();
                                    found.add("192.168.43.1:7777 | Active Phone Hotspot Match");
                                } catch (Throwable ignored) {}
                            }
                        } catch (Throwable ignored) {}

                        runOnUiThread(new Runnable() {
                            @Override public void run() {
                                if (found.isEmpty()) {
                                    lanStatus.setText("No active UE2 servers detected on local subnet.");
                                } else {
                                    lanStatus.setText("Found " + found.size() + " active LAN server(s):");
                                    for (final String s : found) {
                                        Button sBtn = new Button(LauncherActivity.this);
                                        sBtn.setText("JOIN: " + s);
                                        sBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
                                        sBtn.setTextColor(0xFF81C784);
                                        sBtn.setBackground(createButtonBg(0xFF1E2838, 0xFF2A3950));
                                        sBtn.setPadding(dp(8), dp(6), dp(8), dp(6));
                                        sBtn.setOnClickListener(new View.OnClickListener() {
                                            @Override public void onClick(View v) {
                                                String target = s.split(" \\| ")[0];
                                                connectWithValidation(target, dialogHolder[0]);
                                            }
                                        });
                                        lanList.addView(sBtn);
                                    }
                                }
                            }
                        });
                    }
                }).start();
            }
        });

        dialogHolder[0].show();
    }

    private static boolean isAssetDifferent(android.content.res.AssetManager am, String assetPath, File target) {
        if (!target.exists()) return true;
        try (java.io.InputStream inA = am.open(assetPath);
             java.io.InputStream inB = new java.io.FileInputStream(target)) {
            byte[] bufA = new byte[8192];
            byte[] bufB = new byte[8192];
            int readA;
            while ((readA = inA.read(bufA)) != -1) {
                int readB = 0;
                while (readB < readA) {
                    int r = inB.read(bufB, readB, readA - readB);
                    if (r == -1) return true;
                    readB += r;
                }
                for (int i = 0; i < readA; i++) {
                    if (bufA[i] != bufB[i]) return true;
                }
            }
            if (inB.read() != -1) return true;
            return false;
        } catch (Exception e) {
            return true;
        }
    }

    public static void syncGameAssets(android.content.Context ctx, File gameDir) {
        if (gameDir == null || !gameDir.exists() || !gameDir.isDirectory()) return;
        try {
            android.content.res.AssetManager am = ctx.getAssets();

            // Sync Textures
            try {
                String[] textures = am.list("Textures");
                if (textures != null && textures.length > 0) {
                    File texDir = new File(gameDir, "Textures");
                    if (!texDir.exists()) texDir.mkdirs();
                    for (String tName : textures) {
                        File target = new File(texDir, tName);
                        if (isAssetDifferent(am, "Textures/" + tName, target)) {
                            Log.i("LOTD_SYNC", "Syncing Textures/" + tName + " to " + target);
                            if (target.exists()) target.delete();
                            try (java.io.InputStream in = am.open("Textures/" + tName);
                                 java.io.FileOutputStream out = new java.io.FileOutputStream(target)) {
                                byte[] buf = new byte[32768];
                                int n;
                                while ((n = in.read(buf)) > 0) out.write(buf, 0, n);
                                out.flush();
                            } catch (Exception err) {
                                Log.e("LOTD_SYNC", "Failed syncing Textures/" + tName, err);
                            }
                        }
                    }
                }
            } catch (Exception ignored) {}

            // Sync System assets (e.g. patched DOTZMenu.u)
            try {
                String[] sysFiles = am.list("System");
                if (sysFiles != null && sysFiles.length > 0) {
                    File sysDir = new File(gameDir, "System");
                    if (!sysDir.exists()) sysDir.mkdirs();
                    for (String sName : sysFiles) {
                        File target = new File(sysDir, sName);
                        if (isAssetDifferent(am, "System/" + sName, target)) {
                            Log.i("LOTD_SYNC", "Syncing System/" + sName + " to " + target);
                            if (target.exists()) target.delete();
                            try (java.io.InputStream in = am.open("System/" + sName);
                                 java.io.FileOutputStream out = new java.io.FileOutputStream(target)) {
                                byte[] buf = new byte[32768];
                                int n;
                                while ((n = in.read(buf)) > 0) out.write(buf, 0, n);
                                out.flush();
                            } catch (Exception err) {
                                Log.e("LOTD_SYNC", "Failed syncing System/" + sName, err);
                            }
                        }
                    }
                }
            } catch (Exception ignored) {}
        } catch (Exception e) {
            Log.e("LOTD_SYNC", "Asset sync error", e);
        }
    }

    private void launchGame() {
        File gameDir = findGameDirectory(this);
        if (gameDir == null) {
            showMissingAssetsDialog();
            return;
        }
        syncGameAssets(this, gameDir);

        // Persist preferences
        mPrefs.edit()
            .putInt(KEY_TARGET_FPS, mTargetFps)
            .putInt(KEY_HUD_OPACITY, mHudOpacity)
            .putFloat(KEY_HUD_SCALE, mHudScale)
            .putBoolean(KEY_HAPTIC, mHapticEnabled)
            .putBoolean(KEY_WIDESCREEN, mWidescreen)
            .putInt(KEY_RES_W, mResW)
            .putInt(KEY_RES_H, mResH)
            .putInt(KEY_TARGET_FOV, mTargetFov)
            .putString(KEY_SELECTED_MAP, mSelectedMap)
            .putBoolean(KEY_SKIP_LAUNCHER, mSkipLauncher)
            .putBoolean(KEY_MUT_SPRINT, mMutSprint)
            .putBoolean(KEY_MUT_VAMP, mMutVamp)
            .putBoolean(KEY_MUT_LOWGRAV, mMutLowGrav)
            .putBoolean(KEY_MUT_SPEED, mMutSpeed)
            .putInt(KEY_SAVE_PROFILE, mSaveProfile)
            .putFloat(KEY_BRIGHTNESS, mBrightness)
            .putBoolean(KEY_AUTO_SPRINT, mAutoSprint)
            .apply();

        Intent intent = new Intent(this, SDLActivity.class);
        if (mSelectedMap != null && !mSelectedMap.isEmpty()) {
            String mapToLaunch = mSelectedMap.trim();
            if (!mapToLaunch.contains(".") && !mapToLaunch.contains("?") && !mapToLaunch.contains(":")) {
                mapToLaunch = mapToLaunch + ".dz";
            }
            intent.putExtra("start_map", mapToLaunch);
        }
        startActivity(intent);
        finish();
    }

    private void exportSavesToZip() {
        File[] searchDirs = {
            new File("/storage/emulated/0/LandOfTheDead/save"),
            new File("/sdcard/LandOfTheDead/save"),
            new File("/storage/emulated/0/LandOfTheDead/Save"),
            new File("/sdcard/LandOfTheDead/Save"),
            new File("/storage/emulated/0/LandOfTheDead/Saves"),
            new File("/sdcard/LandOfTheDead/Saves"),
            new File(getExternalFilesDir(null), "save"),
            new File(getFilesDir(), "save")
        };
        File saveDir = null;
        for (File d : searchDirs) {
            if (d != null && d.exists() && d.isDirectory()) {
                saveDir = d;
                break;
            }
        }
        if (saveDir == null) {
            saveDir = new File("/sdcard/LandOfTheDead/save");
            saveDir.mkdirs();
        }
        File outDir = new File("/sdcard/LandOfTheDead");
        if (!outDir.exists()) outDir.mkdirs();
        String timeStamp = new SimpleDateFormat("yyyyMMdd_HHmmss", Locale.US).format(new Date());
        File zipFile = new File(outDir, "LOTD_Saves_Backup_" + timeStamp + ".zip");
        try {
            FileOutputStream fos = new FileOutputStream(zipFile);
            ZipOutputStream zos = new ZipOutputStream(fos);
            byte[] buffer = new byte[8192];
            int count = zipDirectory(saveDir, saveDir, zos, buffer);
            zos.close();
            fos.close();
            Toast.makeText(this, String.format(Locale.US, "Exported %d save file(s) to:\n%s", count, zipFile.getName()), Toast.LENGTH_LONG).show();
        } catch (Throwable t) {
            Toast.makeText(this, "Export failed: " + t.getMessage(), Toast.LENGTH_SHORT).show();
        }
    }

    private int zipDirectory(File root, File current, ZipOutputStream zos, byte[] buffer) throws Exception {
        int count = 0;
        File[] files = current.listFiles();
        if (files == null) return 0;
        for (File f : files) {
            if (f.isDirectory()) {
                count += zipDirectory(root, f, zos, buffer);
            } else if (f.isFile()) {
                String relPath = root.toURI().relativize(f.toURI()).getPath();
                zos.putNextEntry(new ZipEntry(relPath));
                try (FileInputStream fis = new FileInputStream(f)) {
                    int len;
                    while ((len = fis.read(buffer)) > 0) {
                        zos.write(buffer, 0, len);
                    }
                }
                zos.closeEntry();
                count++;
            }
        }
        return count;
    }

    private void importSavesFromZip() {
        File searchDir = new File("/sdcard/LandOfTheDead");
        final List<File> zipList = new ArrayList<File>();
        if (searchDir.exists() && searchDir.isDirectory()) {
            File[] files = searchDir.listFiles();
            if (files != null) {
                for (File f : files) {
                    if (f.isFile() && f.getName().toLowerCase(Locale.US).endsWith(".zip")) {
                        zipList.add(f);
                    }
                }
            }
        }
        if (zipList.isEmpty()) {
            Toast.makeText(this, "No save .zip backup files found in /sdcard/LandOfTheDead/", Toast.LENGTH_LONG).show();
            return;
        }
        String[] names = new String[zipList.size()];
        for (int i = 0; i < zipList.size(); i++) names[i] = zipList.get(i).getName();
        new android.app.AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
            .setTitle("Select Save Backup ZIP to Restore")
            .setItems(names, new android.content.DialogInterface.OnClickListener() {
                @Override public void onClick(android.content.DialogInterface d, int which) {
                    restoreZip(zipList.get(which));
                }
            })
            .setNegativeButton("CANCEL", null)
            .show();
    }

    private void restoreZip(File zipFile) {
        File[] searchDirs = {
            new File("/storage/emulated/0/LandOfTheDead/save"),
            new File("/sdcard/LandOfTheDead/save"),
            new File(getExternalFilesDir(null), "save"),
            new File(getFilesDir(), "save")
        };
        File targetDir = null;
        for (File d : searchDirs) {
            if (d != null && d.exists() && d.isDirectory()) {
                targetDir = d;
                break;
            }
        }
        if (targetDir == null) {
            targetDir = new File("/sdcard/LandOfTheDead/save");
            targetDir.mkdirs();
        }
        int count = 0;
        try {
            FileInputStream fis = new FileInputStream(zipFile);
            ZipInputStream zis = new ZipInputStream(fis);
            ZipEntry entry;
            byte[] buf = new byte[8192];
            while ((entry = zis.getNextEntry()) != null) {
                if (!entry.isDirectory()) {
                    File outFile = new File(targetDir, entry.getName());
                    File parent = outFile.getParentFile();
                    if (parent != null && !parent.exists()) parent.mkdirs();
                    FileOutputStream fos = new FileOutputStream(outFile);
                    int len;
                    while ((len = zis.read(buf)) > 0) {
                        fos.write(buf, 0, len);
                    }
                    fos.close();
                    count++;
                }
                zis.closeEntry();
            }
            zis.close();
            fis.close();
            Toast.makeText(this, String.format(Locale.US, "Restored %d save file(s) from:\n%s", count, zipFile.getName()), Toast.LENGTH_LONG).show();
        } catch (Throwable t) {
            Toast.makeText(this, "Restore failed: " + t.getMessage(), Toast.LENGTH_SHORT).show();
        }
    }

    @Override
    protected void onResume() {
        super.onResume();
        SDLActivity.hideSystemBars(getWindow());
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) {
            SDLActivity.hideSystemBars(getWindow());
        }
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent event) {
        if (event.getAction() == android.view.KeyEvent.ACTION_DOWN) {
            int keyCode = event.getKeyCode();
            if (keyCode == android.view.KeyEvent.KEYCODE_BUTTON_START || keyCode == android.view.KeyEvent.KEYCODE_BUTTON_A) {
                launchGame();
                return true;
            }
        }
        return super.dispatchKeyEvent(event);
    }

    private void showModInstallerDialog() {
        File[] searchDirs = {
            Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS),
            new File("/storage/emulated/0/Download"),
            new File("/sdcard/Download"),
            new File("/storage/emulated/0/Downloads"),
            new File("/sdcard/Downloads")
        };
        final List<File> archives = new ArrayList<File>();
        for (File d : searchDirs) {
            if (d != null && d.exists() && d.isDirectory()) {
                File[] files = d.listFiles();
                if (files != null) {
                    for (File f : files) {
                        String name = f.getName().toLowerCase(Locale.US);
                        if (name.endsWith(".zip") || name.endsWith(".dz") || name.endsWith(".unr")) {
                            if (!archives.contains(f)) archives.add(f);
                        }
                    }
                }
            }
        }

        if (archives.isEmpty()) {
            new AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
                .setTitle("Mod & Map Installer")
                .setMessage("No .zip, .dz, or .unr map/mod files found in your device's Download folder.\n\nTo install custom community maps or mods:\n1. Download any Land of the Dead .zip or .dz mod.\n2. Keep it in your device 'Download' folder.\n3. Tap this button again to install with 1 tap!")
                .setPositiveButton("OK", null)
                .show();
            return;
        }

        String[] items = new String[archives.size()];
        for (int i = 0; i < archives.size(); i++) {
            File f = archives.get(i);
            long szMb = f.length() / (1024 * 1024);
            long szKb = (f.length() / 1024) % 1024;
            items[i] = f.getName() + " (" + (szMb > 0 ? (szMb + " MB") : (szKb + " KB")) + ")";
        }

        new AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
            .setTitle("Select Mod / Map Archive to Install")
            .setItems(items, new DialogInterface.OnClickListener() {
                @Override public void onClick(DialogInterface dialog, int which) {
                    final File chosen = archives.get(which);
                    installModArchive(chosen);
                }
            })
            .setNegativeButton("CANCEL", null)
            .show();
    }

    private void installModArchive(final File archive) {
        File targetBase = null;
        File[] cands = {
            new File("/storage/emulated/0/LandOfTheDead"),
            new File("/sdcard/LandOfTheDead"),
            new File("/storage/emulated/0/Android/data/org.libsdl.app/files/LandOfTheDead"),
            new File("/sdcard/Android/data/org.libsdl.app/files/LandOfTheDead"),
            getExternalFilesDir(null)
        };
        for (File c : cands) {
            if (c != null && c.exists() && c.isDirectory()) {
                targetBase = c;
                break;
            }
        }
        if (targetBase == null) {
            targetBase = new File("/storage/emulated/0/LandOfTheDead");
            targetBase.mkdirs();
        }
        final File destBase = targetBase;

        new Thread(new Runnable() {
            @Override public void run() {
                int extracted = 0;
                String error = null;
                try {
                    String lower = archive.getName().toLowerCase(Locale.US);
                    if (lower.endsWith(".dz") || lower.endsWith(".unr")) {
                        File mapsDir = new File(destBase, "Maps");
                        mapsDir.mkdirs();
                        File dest = new File(mapsDir, archive.getName());
                        copyFile(archive, dest);
                        extracted = 1;
                    } else if (lower.endsWith(".zip")) {
                        ZipInputStream zis = new ZipInputStream(new FileInputStream(archive));
                        ZipEntry ze;
                        byte[] buffer = new byte[8192];
                        while ((ze = zis.getNextEntry()) != null) {
                            String entryName = ze.getName();
                            if (ze.isDirectory() || entryName.contains("..")) {
                                zis.closeEntry();
                                continue;
                            }
                            String entryLower = entryName.toLowerCase(Locale.US);
                            File outDest;
                            if (entryLower.contains("/")) {
                                outDest = new File(destBase, entryName);
                            } else if (entryLower.endsWith(".dz") || entryLower.endsWith(".unr")) {
                                outDest = new File(new File(destBase, "Maps"), entryName);
                            } else if (entryLower.endsWith(".utx")) {
                                outDest = new File(new File(destBase, "Textures"), entryName);
                            } else if (entryLower.endsWith(".usx")) {
                                outDest = new File(new File(destBase, "StaticMeshes"), entryName);
                            } else if (entryLower.endsWith(".uax")) {
                                outDest = new File(new File(destBase, "Sounds"), entryName);
                            } else if (entryLower.endsWith(".umx")) {
                                outDest = new File(new File(destBase, "Music"), entryName);
                            } else if (entryLower.endsWith(".u") || entryLower.endsWith(".ini")) {
                                outDest = new File(new File(destBase, "System"), entryName);
                            } else {
                                outDest = new File(new File(destBase, "Mods"), entryName);
                            }
                            outDest.getParentFile().mkdirs();
                            FileOutputStream fos = new FileOutputStream(outDest);
                            int len;
                            while ((len = zis.read(buffer)) > 0) {
                                fos.write(buffer, 0, len);
                            }
                            fos.close();
                            zis.closeEntry();
                            extracted++;
                        }
                        zis.close();
                    }
                } catch (Throwable t) {
                    error = t.getMessage();
                }

                final int count = extracted;
                final String err = error;
                runOnUiThread(new Runnable() {
                    @Override public void run() {
                        if (err != null) {
                            new AlertDialog.Builder(LauncherActivity.this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
                                .setTitle("Mod Installation Failed")
                                .setMessage("Error extracting " + archive.getName() + ": " + err)
                                .setPositiveButton("OK", null)
                                .show();
                        } else {
                            new AlertDialog.Builder(LauncherActivity.this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
                                .setTitle("Mod Installed Successfully!")
                                .setMessage(String.format(Locale.US, "Installed %d file(s) from:\n%s\n\nDestination:\n%s\n\nCustom maps and assets are now ready to play!",
                                    count, archive.getName(), destBase.getAbsolutePath()))
                                .setPositiveButton("AWESOME", null)
                                .show();
                        }
                    }
                });
            }
        }).start();
    }

    private static void copyFile(File src, File dst) throws IOException {
        InputStream in = new FileInputStream(src);
        OutputStream out = new FileOutputStream(dst);
        byte[] buf = new byte[8192];
        int len;
        while ((len = in.read(buf)) > 0) {
            out.write(buf, 0, len);
        }
        in.close();
        out.close();
    }
}
