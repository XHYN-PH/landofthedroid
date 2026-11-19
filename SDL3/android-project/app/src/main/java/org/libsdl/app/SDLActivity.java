package org.libsdl.app;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.UiModeManager;
import android.content.ActivityNotFoundException;
import android.content.ClipboardManager;
import android.content.ClipData;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.BroadcastReceiver;
import android.media.AudioManager;
import android.content.SharedPreferences;
import android.content.pm.ActivityInfo;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PorterDuff;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.view.DisplayCutout;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.LocaleList;
import android.os.Looper;
import android.os.Message;
import android.os.ParcelFileDescriptor;
import android.os.PowerManager;
import android.provider.DocumentsContract;
import android.util.DisplayMetrics;
import android.util.Log;
import android.util.SparseArray;
import android.view.Display;
import android.view.Gravity;
import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.PointerIcon;
import android.view.Surface;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowInsets;
import android.view.WindowInsetsController;
import android.view.WindowManager;
import java.net.Socket;
import java.net.InetSocketAddress;
import android.view.inputmethod.InputConnection;
import android.view.inputmethod.InputMethodManager;
import android.webkit.MimeTypeMap;
import android.widget.SeekBar;
import android.widget.CheckBox;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import android.widget.Toast;
import android.widget.Spinner;
import android.widget.ArrayAdapter;
import android.window.OnBackInvokedCallback;
import android.window.OnBackInvokedDispatcher;

import java.io.FileNotFoundException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.nio.charset.StandardCharsets;
import org.json.JSONObject;
import org.json.JSONArray;
import android.widget.ScrollView;
import android.widget.HorizontalScrollView;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import java.util.Locale;
import android.content.BroadcastReceiver;
import android.content.IntentFilter;
import android.os.BatteryManager;
import android.os.Environment;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;


/**
    SDL Activity
*/
public class SDLActivity extends Activity implements View.OnSystemUiVisibilityChangeListener {
    private static final String TAG = "SDL";
    private static final int SDL_MAJOR_VERSION = 3;
    private static final int SDL_MINOR_VERSION = 5;
    private static final int SDL_MICRO_VERSION = 0;
/*
    // Display InputType.SOURCE/CLASS of events and devices
    //
    // SDLActivity.debugSource(device.getSources(), "device[" + device.getName() + "]");
    // SDLActivity.debugSource(event.getSource(), "event");
    public static void debugSource(int sources, String prefix) {
        int s = sources;
        int s_copy = sources;
        String cls = "";
        String src = "";
        int tst = 0;
        int FLAG_TAINTED = 0x80000000;

        if ((s & InputDevice.SOURCE_CLASS_BUTTON) != 0)     cls += " BUTTON";
        if ((s & InputDevice.SOURCE_CLASS_JOYSTICK) != 0)   cls += " JOYSTICK";
        if ((s & InputDevice.SOURCE_CLASS_POINTER) != 0)    cls += " POINTER";
        if ((s & InputDevice.SOURCE_CLASS_POSITION) != 0)   cls += " POSITION";
        if ((s & InputDevice.SOURCE_CLASS_TRACKBALL) != 0)  cls += " TRACKBALL";


        int s2 = s_copy & ~InputDevice.SOURCE_ANY; // keep class bits
        s2 &= ~(  InputDevice.SOURCE_CLASS_BUTTON
                | InputDevice.SOURCE_CLASS_JOYSTICK
                | InputDevice.SOURCE_CLASS_POINTER
                | InputDevice.SOURCE_CLASS_POSITION
                | InputDevice.SOURCE_CLASS_TRACKBALL);

        if (s2 != 0) cls += "Some_Unknown";

        s2 = s_copy & InputDevice.SOURCE_ANY; // keep source only, no class;

        if (Build.VERSION.SDK_INT >= 23) {
            tst = InputDevice.SOURCE_BLUETOOTH_STYLUS;
            if ((s & tst) == tst) src += " BLUETOOTH_STYLUS";
            s2 &= ~tst;
        }

        tst = InputDevice.SOURCE_DPAD;
        if ((s & tst) == tst) src += " DPAD";
        s2 &= ~tst;

        tst = InputDevice.SOURCE_GAMEPAD;
        if ((s & tst) == tst) src += " GAMEPAD";
        s2 &= ~tst;

        tst = InputDevice.SOURCE_HDMI;
        if ((s & tst) == tst) src += " HDMI";
        s2 &= ~tst;

        tst = InputDevice.SOURCE_JOYSTICK;
        if ((s & tst) == tst) src += " JOYSTICK";
        s2 &= ~tst;

        tst = InputDevice.SOURCE_KEYBOARD;
        if ((s & tst) == tst) src += " KEYBOARD";
        s2 &= ~tst;

        tst = InputDevice.SOURCE_MOUSE;
        if ((s & tst) == tst) src += " MOUSE";
        s2 &= ~tst;

        if (Build.VERSION.SDK_INT >= 26) {
            tst = InputDevice.SOURCE_MOUSE_RELATIVE;
            if ((s & tst) == tst) src += " MOUSE_RELATIVE";
            s2 &= ~tst;

            tst = InputDevice.SOURCE_ROTARY_ENCODER;
            if ((s & tst) == tst) src += " ROTARY_ENCODER";
            s2 &= ~tst;
        }
        tst = InputDevice.SOURCE_STYLUS;
        if ((s & tst) == tst) src += " STYLUS";
        s2 &= ~tst;

        tst = InputDevice.SOURCE_TOUCHPAD;
        if ((s & tst) == tst) src += " TOUCHPAD";
        s2 &= ~tst;

        tst = InputDevice.SOURCE_TOUCHSCREEN;
        if ((s & tst) == tst) src += " TOUCHSCREEN";
        s2 &= ~tst;

        tst = InputDevice.SOURCE_TOUCH_NAVIGATION;
        if ((s & tst) == tst) src += " TOUCH_NAVIGATION";
        s2 &= ~tst;

        tst = InputDevice.SOURCE_TRACKBALL;
        if ((s & tst) == tst) src += " TRACKBALL";
        s2 &= ~tst;

        tst = InputDevice.SOURCE_ANY;
        if ((s & tst) == tst) src += " ANY";
        s2 &= ~tst;

        if (s == FLAG_TAINTED) src += " FLAG_TAINTED";
        s2 &= ~FLAG_TAINTED;

        if (s2 != 0) src += " Some_Unknown";

        Log.v(TAG, prefix + "int=" + s_copy + " CLASS={" + cls + " } source(s):" + src);
    }
*/

    public static boolean mIsResumedCalled, mHasFocus;
    public static final boolean mHasMultiWindow = (Build.VERSION.SDK_INT >= 24  /* Android 7.0 (N) */);

    // Cursor types
    // private static final int SDL_SYSTEM_CURSOR_NONE = -1;
    private static final int SDL_SYSTEM_CURSOR_DEFAULT = 0;
    private static final int SDL_SYSTEM_CURSOR_TEXT = 1;
    private static final int SDL_SYSTEM_CURSOR_WAIT = 2;
    private static final int SDL_SYSTEM_CURSOR_CROSSHAIR = 3;
    private static final int SDL_SYSTEM_CURSOR_PROGRESS = 4;
    private static final int SDL_SYSTEM_CURSOR_NWSE_RESIZE = 5;
    private static final int SDL_SYSTEM_CURSOR_NESW_RESIZE = 6;
    private static final int SDL_SYSTEM_CURSOR_EW_RESIZE = 7;
    private static final int SDL_SYSTEM_CURSOR_NS_RESIZE = 8;
    private static final int SDL_SYSTEM_CURSOR_MOVE = 9;
    private static final int SDL_SYSTEM_CURSOR_NOT_ALLOWED = 10;
    private static final int SDL_SYSTEM_CURSOR_POINTER = 11;
    private static final int SDL_SYSTEM_CURSOR_NW_RESIZE = 12;
    private static final int SDL_SYSTEM_CURSOR_N_RESIZE = 13;
    private static final int SDL_SYSTEM_CURSOR_NE_RESIZE = 14;
    private static final int SDL_SYSTEM_CURSOR_E_RESIZE = 15;
    private static final int SDL_SYSTEM_CURSOR_SE_RESIZE = 16;
    private static final int SDL_SYSTEM_CURSOR_S_RESIZE = 17;
    private static final int SDL_SYSTEM_CURSOR_SW_RESIZE = 18;
    private static final int SDL_SYSTEM_CURSOR_W_RESIZE = 19;
    private static final int SDL_SYSTEM_CURSOR_CONTEXT_MENU = 20;
    private static final int SDL_SYSTEM_CURSOR_HELP = 21;
    private static final int SDL_SYSTEM_CURSOR_CELL = 22;
    private static final int SDL_SYSTEM_CURSOR_VERTICAL_TEXT = 23;
    private static final int SDL_SYSTEM_CURSOR_ALIAS = 24;
    private static final int SDL_SYSTEM_CURSOR_COPY = 25;
    private static final int SDL_SYSTEM_CURSOR_NO_DROP = 26;
    private static final int SDL_SYSTEM_CURSOR_GRAB = 27;
    private static final int SDL_SYSTEM_CURSOR_GRABBING = 28;
    private static final int SDL_SYSTEM_CURSOR_COL_RESIZE = 29;
    private static final int SDL_SYSTEM_CURSOR_ROW_RESIZE = 30;
    private static final int SDL_SYSTEM_CURSOR_ALL_SCROLL = 31;
    private static final int SDL_SYSTEM_CURSOR_ZOOM_IN = 32;
    private static final int SDL_SYSTEM_CURSOR_ZOOM_OUT = 33;

    protected static final int SDL_ORIENTATION_UNKNOWN = 0;
    protected static final int SDL_ORIENTATION_LANDSCAPE = 1;
    protected static final int SDL_ORIENTATION_LANDSCAPE_FLIPPED = 2;
    protected static final int SDL_ORIENTATION_PORTRAIT = 3;
    protected static final int SDL_ORIENTATION_PORTRAIT_FLIPPED = 4;

    protected static int mCurrentRotation;
    protected static Locale mCurrentLocale;

    // Handle the state of the native layer
    public enum NativeState {
           INIT, RESUMED, PAUSED
    }

    public static NativeState mNextNativeState;
    public static NativeState mCurrentNativeState;

    /** If shared libraries (e.g. SDL or the native application) could not be loaded. */
    public static boolean mBrokenLibraries = true;

    // Main components
    protected static SDLActivity mSingleton;
    protected static SDLSurface mSurface;
    protected static SDLDummyEdit mTextEdit;
    protected static ViewGroup mLayout;
    protected static SDLClipboardHandler mClipboardHandler;
    protected static Hashtable<Integer, PointerIcon> mCursors;
    protected static int mLastCursorID;
    protected static SDLGenericMotionListener_API14 mMotionListener;
    protected static HIDDeviceManager mHIDDeviceManager;

    // This is what SDL runs in. It invokes SDL_main(), eventually
    protected static Thread mSDLThread;
    protected static boolean mSDLMainFinished = false;
    protected static boolean mActivityCreated = false;
    private static SDLFileDialogState mFileDialogState = null;
    protected static boolean mDispatchingKeyEvent = false;

    public static SDLGenericMotionListener_API14 getMotionListener() {
        if (mMotionListener == null) {
            if (Build.VERSION.SDK_INT >= 29 /* Android 10 (Q) */) {
                mMotionListener = new SDLGenericMotionListener_API29();
            } else if (Build.VERSION.SDK_INT >= 26 /* Android 8.0 (O) */) {
                mMotionListener = new SDLGenericMotionListener_API26();
            } else if (Build.VERSION.SDK_INT >= 24 /* Android 7.0 (N) */) {
                mMotionListener = new SDLGenericMotionListener_API24();
            } else {
                mMotionListener = new SDLGenericMotionListener_API14();
            }
        }

        return mMotionListener;
    }

    /**
     * The application entry point, called on a dedicated thread (SDLThread).
     * The default implementation uses the getMainSharedObject() and getMainFunction() methods
     * to invoke native code from the specified shared library.
     * It can be overridden by derived classes.
     */
    protected void main() {
        String library = SDLActivity.mSingleton.getMainSharedObject();
        String function = SDLActivity.mSingleton.getMainFunction();
        String[] arguments = SDLActivity.mSingleton.getArguments();

        Log.v("SDL", "Running main function " + function + " from library " + library);
        SDLActivity.nativeRunMain(library, function, arguments);
        Log.v("SDL", "Finished main function");
    }

    /**
     * This method returns the name of the shared object with the application entry point
     * It can be overridden by derived classes.
     */
    protected String getMainSharedObject() {
        String library;
        String[] libraries = SDLActivity.mSingleton.getLibraries();
        if (libraries.length > 0) {
            library = "lib" + libraries[libraries.length - 1] + ".so";
        } else {
            library = "libmain.so";
        }
        return getContext().getApplicationInfo().nativeLibraryDir + "/" + library;
    }

    /**
     * This method returns the name of the application entry point
     * It can be overridden by derived classes.
     */
    protected String getMainFunction() {
        return "SDL_main";
    }

    /**
     * This method is called by SDL before loading the native shared libraries.
     * It can be overridden to provide names of shared libraries to be loaded.
     * The default implementation returns the defaults. It never returns null.
     * An array returned by a new implementation must at least contain "SDL3".
     * Also keep in mind that the order the libraries are loaded may matter.
     * @return names of shared libraries to be loaded (e.g. "SDL3", "main").
     */
    protected String[] getLibraries() {
        return new String[] {
            "SDL3",
            // "SDL3_image",
            // "SDL3_mixer",
            // "SDL3_net",
            // "SDL3_ttf",
            "main"
        };
    }

    // Load the .so
    public void loadLibraries() {
       for (String lib : getLibraries()) {
          SDL.loadLibrary(lib, this);
       }
    }

    /**
     * This method is called by SDL before starting the native application thread.
     * It can be overridden to provide the arguments after the application name.
     * The default implementation returns an empty array. It never returns null.
     * @return arguments for the native application.
     */
    protected String[] getArguments() {
        List<String> args = new ArrayList<String>();
        try {
            Intent intent = getIntent();
            String startMap = null;
            if (intent != null && intent.hasExtra("start_map")) {
                startMap = intent.getStringExtra("start_map");
            }
            if (startMap == null || startMap.trim().isEmpty()) {
                SharedPreferences prefs = getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE);
                if (prefs != null) {
                    startMap = prefs.getString(LauncherActivity.KEY_SELECTED_MAP, "");
                }
            }
            if (startMap != null && !startMap.trim().isEmpty() && !startMap.equalsIgnoreCase("Default (Intro / Menu)")) {
                String sm = startMap.trim();
                if (!sm.contains(".") && !sm.contains("?") && !sm.contains(":")) {
                    sm = sm + ".dz";
                }
                args.add("--");
                args.add(sm);
                Log.i(TAG, "Passing start_map to engine command line: " + sm);
            } else {
                SharedPreferences prefs = getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE);
                boolean fastBoot = (prefs != null) && prefs.getBoolean(LauncherActivity.KEY_FAST_BOOT, false);
                if (fastBoot) {
                    args.add("--");
                    args.add("MainMenu.dz");
                    Log.i(TAG, "Fast Boot active: Launching directly into MainMenu.dz");
                }
            }
        } catch (Throwable t) {
            Log.w(TAG, "Error getting startup arguments", t);
        }
        return args.toArray(new String[0]);
    }

    /**
     * This method returns the SDL_INIT_* subsystems this activity should set up on the Java side.
     * It can be overridden to skip the surface/layout creation, device listener and input event
     * routing for unused subsystems. Manager JNI setup always follows the subsystems compiled
     * into the native library, regardless of this mask. The native app must not SDL_Init() a
     * subsystem excluded here: it would initialize without Java-side events (no window surface,
     * no controller hotplug or input). Called from onCreate(); overrides must not depend on
     * state the subclass assigns after super.onCreate().
     * @return mask of SDL.SDL_INIT_* values.
     */
    protected int getInitSubsystems() {
        return SDL.SDL_INIT_EVERYTHING;
    }

    public static void initialize() {
        // The static nature of the singleton and Android quirkyness force us to initialize everything here
        // Otherwise, when exiting the app and returning to it, these variables *keep* their pre exit values
        mSingleton = null;
        mSurface = null;
        mTextEdit = null;
        mLayout = null;
        mClipboardHandler = null;
        mCursors = new Hashtable<Integer, PointerIcon>();
        mLastCursorID = 0;
        mSDLThread = null;
        mIsResumedCalled = false;
        mHasFocus = true;
        mNextNativeState = NativeState.INIT;
        mCurrentNativeState = NativeState.INIT;
    }

    protected SDLSurface createSDLSurface(Context context) {
        return new SDLSurface(context);
    }

    // Setup
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        Log.v(TAG, "Manufacturer: " + Build.MANUFACTURER);
        Log.v(TAG, "Device: " + Build.DEVICE);
        Log.v(TAG, "Model: " + Build.MODEL);
        Log.v(TAG, "onCreate()");
        super.onCreate(savedInstanceState);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        // Sustained Performance Mode (API 24+)
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.N) {
            try {
                PowerManager pm = (PowerManager) getSystemService(Context.POWER_SERVICE);
                if (pm != null && pm.isSustainedPerformanceModeSupported()) {
                    getWindow().setSustainedPerformanceMode(true);
                    Log.i(TAG, "Sustained performance mode enabled");
                }
            } catch (Throwable ignored) {}
        }
        // Thermal Throttling Listener (API 29+)
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
            try {
                PowerManager pm = (PowerManager) getSystemService(Context.POWER_SERVICE);
                if (pm != null) {
                    pm.addThermalStatusListener(new PowerManager.OnThermalStatusChangedListener() {
                        @Override
                        public void onThermalStatusChanged(int status) {
                            Log.w(TAG, "Device thermal status: " + status);
                            try { nativeBlackboxLog("Thermal status changed: " + status); } catch (Throwable ignored) {}
                        }
                    });
                }
            } catch (Throwable ignored) {}
        }
        try { registerReceiver(mBatteryReceiver, new IntentFilter(Intent.ACTION_BATTERY_CHANGED)); } catch (Throwable ignored) {}
        try {
            mAudioManager = (AudioManager) getSystemService(Context.AUDIO_SERVICE);
            mAudioFocusListener = new AudioManager.OnAudioFocusChangeListener() {
                @Override
                public void onAudioFocusChange(int focusChange) {
                    if (focusChange == AudioManager.AUDIOFOCUS_LOSS ||
                        focusChange == AudioManager.AUDIOFOCUS_LOSS_TRANSIENT) {
                        try { nativePauseAudio(true); } catch (Throwable ignored) {}
                    } else if (focusChange == AudioManager.AUDIOFOCUS_GAIN) {
                        try { nativePauseAudio(false); } catch (Throwable ignored) {}
                    }
                }
            };
            registerReceiver(mAudioBecomingNoisyReceiver, new IntentFilter(AudioManager.ACTION_AUDIO_BECOMING_NOISY));
        } catch (Throwable ignored) {}

        // Request storage permissions on startup
        if (Build.VERSION.SDK_INT >= 30 /* Android 11+ (R) */) {
            try {
                if (!android.os.Environment.isExternalStorageManager()) {
                    android.content.Intent intent = new android.content.Intent(android.provider.Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION);
                    intent.setData(android.net.Uri.parse("package:" + getPackageName()));
                    startActivity(intent);
                }
            } catch (Exception e) {
                try {
                    android.content.Intent intent = new android.content.Intent(android.provider.Settings.ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION);
                    startActivity(intent);
                } catch (Exception ignored) {}
            }
        } else if (Build.VERSION.SDK_INT >= 23) {
            requestPermissions(new String[]{
                android.Manifest.permission.READ_EXTERNAL_STORAGE,
                android.Manifest.permission.WRITE_EXTERNAL_STORAGE
            }, 100);
        }

        extractAssetsIfNeeded();

        if (Build.VERSION.SDK_INT >= 30 /* Android 11 (R) */) {
            getWindow().setDecorFitsSystemWindows(false);
        }

        /* Control activity re-creation */
        if (mSDLMainFinished || mActivityCreated) {
              boolean allow_recreate = SDLActivity.nativeAllowRecreateActivity();
              if (mSDLMainFinished) {
                  Log.v(TAG, "SDL main() finished");
              }
              if (allow_recreate) {
                  Log.v(TAG, "activity re-created");
              } else {
                  Log.v(TAG, "activity finished");
                  System.exit(0);
                  return;
              }
        }

        mActivityCreated = true;

        try {
            Thread.currentThread().setName("SDLActivity");
        } catch (Exception e) {
            Log.v(TAG, "modify thread properties failed " + e.toString());
        }

        // Load shared libraries
        String errorMsgBrokenLib = "";
        try {
            loadLibraries();
            mBrokenLibraries = false; /* success */
        } catch(UnsatisfiedLinkError e) {
            System.err.println(e.getMessage());
            mBrokenLibraries = true;
            errorMsgBrokenLib = e.getMessage();
        } catch(Exception e) {
            System.err.println(e.getMessage());
            mBrokenLibraries = true;
            errorMsgBrokenLib = e.getMessage();
        }

        if (!mBrokenLibraries) {
            String expected_version = String.valueOf(SDL_MAJOR_VERSION) + "." +
                                      String.valueOf(SDL_MINOR_VERSION) + "." +
                                      String.valueOf(SDL_MICRO_VERSION);
            String version = nativeGetVersion();
            if (!version.equals(expected_version)) {
                mBrokenLibraries = true;
                errorMsgBrokenLib = "SDL C/Java version mismatch (expected " + expected_version + ", got " + version + ")";
            }
        }

        if (mBrokenLibraries) {
            mSingleton = this;
            AlertDialog.Builder dlgAlert  = new AlertDialog.Builder(this);
            dlgAlert.setMessage("An error occurred while trying to start the application. Please try again and/or reinstall."
                  + System.getProperty("line.separator")
                  + System.getProperty("line.separator")
                  + "Error: " + errorMsgBrokenLib);
            dlgAlert.setTitle("SDL Error");
            dlgAlert.setPositiveButton("Exit",
                new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog,int id) {
                        // if this button is clicked, close current activity
                        SDLActivity.mSingleton.finish();
                    }
                });
           dlgAlert.setCancelable(false);
           dlgAlert.create().show();

           return;
        }


        /* Control activity re-creation */
        /* Robustness: check that the native code is run for the first time.
         * (Maybe Activity was reset, but not the native code.) */
        {
            int run_count = SDLActivity.nativeCheckSDLThreadCounter(); /* get and increment a native counter */
            if (run_count != 0) {
                boolean allow_recreate = SDLActivity.nativeAllowRecreateActivity();
                if (allow_recreate) {
                    Log.v(TAG, "activity re-created // run_count: " + run_count);
                } else {
                    Log.v(TAG, "activity finished // run_count: " + run_count);
                    System.exit(0);
                    return;
                }
            }
        }

        // Set up JNI
        SDL.setupJNI(getInitSubsystems());

        // Initialize state
        SDL.initialize();

        // So we can call stuff from static callbacks
        mSingleton = this;
        SDL.setContext(this);

        // Set the manifest environment variables now, on the UI thread, before the first frame.
        // Adding a new environment variable reallocates the environment, which can crash other
        // threads reading it at the same time, e.g. graphics drivers initializing EGL on the
        // render thread.
        getManifestEnvironmentVariables();

        if (SDL.isControllerManagerReady()) {
            SDLControllerManager.initializeDeviceListener();
        }

        if (SDL.isSubsystemCompiled(SDL.SDL_INIT_VIDEO)) {
            mClipboardHandler = new SDLClipboardHandler();
        }

        if (nativeIsHIDAPIEnabled()) {
            mHIDDeviceManager = HIDDeviceManager.acquire(this);
        }

        // Set up the surface
        if (SDL.isSubsystemInitialized(SDL.SDL_INIT_VIDEO)) {
            mSurface = createSDLSurface(this);

            mLayout = new RelativeLayout(this);
            mLayout.addView(mSurface);

            hideSystemBars(getWindow());
            loadUserSettings();
            setupTouchHud();

            // Get our current screen orientation and pass it down.
            SDLActivity.nativeSetNaturalOrientation(SDLActivity.getNaturalOrientation());
            mCurrentRotation = SDLActivity.getCurrentRotation();
            SDLActivity.onNativeRotationChanged(mCurrentRotation);
        }

        try {
            if (Build.VERSION.SDK_INT < 24 /* Android 7.0 (N) */) {
                mCurrentLocale = getContext().getResources().getConfiguration().locale;
            } else {
                mCurrentLocale = getContext().getResources().getConfiguration().getLocales().get(0);
            }
        } catch(Exception ignored) {
        }

        switch (getContext().getResources().getConfiguration().uiMode & Configuration.UI_MODE_NIGHT_MASK) {
        case Configuration.UI_MODE_NIGHT_NO:
            SDLActivity.onNativeDarkModeChanged(false);
            break;
        case Configuration.UI_MODE_NIGHT_YES:
            SDLActivity.onNativeDarkModeChanged(true);
            break;
        }

        if (mLayout != null) {
            setContentView(mLayout);
            setWindowStyle(false);
        }

        getWindow().getDecorView().setOnSystemUiVisibilityChangeListener(this);

        // Get filename from "Open with" of another application
        if (SDL.isSubsystemInitialized(SDL.SDL_INIT_VIDEO)) {
            Intent intent = getIntent();
            if (intent != null && intent.getData() != null) {
                String filename = intent.getData().getPath();
                if (filename != null) {
                    Log.v(TAG, "Got filename: " + filename);
                    SDLActivity.onNativeDropFile(filename);
                }
            }
        }
    }

    protected void pauseNativeThread() {
        mNextNativeState = NativeState.PAUSED;
        mIsResumedCalled = false;

        if (SDLActivity.mBrokenLibraries) {
            return;
        }

        SDLActivity.handleNativeState();
    }

    protected void resumeNativeThread() {
        mNextNativeState = NativeState.RESUMED;
        mIsResumedCalled = true;

        if (SDLActivity.mBrokenLibraries) {
           return;
        }

        SDLActivity.handleNativeState();
    }

    // Events
    @Override
    protected void onPause() {
        Log.v(TAG, "onPause()");
        super.onPause();

        // Background Auto-Save / Quick-Resume Snapshot & Auto-Pause
        try {
            boolean inGame = false;
            try { inGame = nativeIsCaptured(); } catch (Throwable ignored) {}
            if (inGame) {
                nativeExecConsole("pause");
                nativeExecConsole("savegame Autosave_QuickResume");
                getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE)
                    .edit().putLong("lotd_quickresume_time", System.currentTimeMillis()).apply();
            }
            nativeSetAudioMasterGain(0.0f);
        } catch (Throwable ignored) {}

        if (mHIDDeviceManager != null) {
            mHIDDeviceManager.setFrozen(true);
        }

        try {
            if (mAudioManager != null && mAudioFocusListener != null) {
                mAudioManager.abandonAudioFocus(mAudioFocusListener);
            }
            nativePauseAudio(true);
        } catch (Throwable ignored) {}

        if (!mHasMultiWindow) {
            pauseNativeThread();
        }
    }

    @Override
    protected void onResume() {
        Log.v(TAG, "onResume()");
        super.onResume();
        try {
            if (Build.VERSION.SDK_INT >= 33) {
                setBackButtonTrapEnabled(true);
            }
        } catch (Throwable ignored) {}
        try { nativeSetAudioMasterGain(1.0f); } catch (Throwable ignored) {}
        hideSystemBars(getWindow());

        try {
            if (mAudioManager != null && mAudioFocusListener != null) {
                mAudioManager.requestAudioFocus(mAudioFocusListener, AudioManager.STREAM_MUSIC, AudioManager.AUDIOFOCUS_GAIN);
            }
            nativePauseAudio(false);
        } catch (Throwable ignored) {}

        extractAssetsIfNeeded();

        if (mHIDDeviceManager != null) {
            mHIDDeviceManager.setFrozen(false);
        }

        if (!mHasMultiWindow) {
            resumeNativeThread();
        }
    }

    public static native boolean nativeIsCaptured();
    public static native void nativeSetLoggingEnabled(boolean enabled);
    public static native boolean nativeIsAiming();
    public static native void nativeSetTargetFPS(int fps);
    public static native void nativeSetWidescreen(int enabled);
    public static native int nativeGetWidescreen();
    public static native void nativeSetTargetResolution(int w, int h);
    public static native void nativeSetTargetFov(int fov);
    public static native void nativeSetGamepadAxes(float lx, float ly, float rx, float ry);
    public static native void nativeTouchKey(int vk, boolean down);
    public static native void nativeTouchMouseButton(int button, boolean down);
    public static native void nativeTouchMouseButtonPulse(int button);
    public static native void nativeTouchLook(float dx, float dy);
    public static native void nativeTouchWheel(int delta);
    public static native void nativeTouchMenuClick(int x, int y);
    public static native void nativeTouchMenuAction(int action, int x, int y);
    public static native void nativeExecConsole(String cmd);
    public static native void nativeSetFxaa(int enabled);
    public static native int nativeGetFxaa();
    public static native void nativeSetFilmic(int enabled);
    public static native int nativeGetFilmic();
    public static native void nativeSetRomero(int enabled);
    public static native int nativeGetRomero();
    public static native void nativeSetBrightness(float b);
    public static native float nativeGetBrightness();
    public static native void nativeSetStickCurve(int curve);
    public static native int nativeGetStickCurve();
    public static native boolean nativeRumbleController(int low, int high, int duration_ms);
    public static native int[] nativeGetTelemetry();
    public static native void nativeSetVignette(float v);
    public static native float nativeGetVignette();
    public static native void nativeTriggerScreenShake(float intensity);
    public static native float nativeGetScreenShake();
    public static native void nativeTriggerQuickTurn180();
    public static native void nativePauseAudio(boolean pause);
    public static native boolean nativeIsMoviePlaying();
    public static native void nativeSkipMovie();
    public static native int nativeGetPossessedWeapons();
    public static native void nativeSetCas(int enabled);
    public static native int nativeGetCas();
    public static native void nativeSetAudioMuffle(float muffle);
    public static native float nativeGetAudioMuffle();
    public static native void nativeSetAudioMasterGain(float gain);
    public static native void nativeTrimMemory(int level);
    public static native void nativeBlackboxLog(String msg);

    private static SensorManager mSensorManager;
    public static int mHudOpacity = 80;
    public static float mHudScale = 1.0f;
    public static boolean mHapticEnabled = true;
    public static boolean mWidescreen = true;
    public static int mTargetFov = 0;
    public static boolean mFxaaEnabled = true;
    public static boolean mFilmicEnabled = false;
    public static boolean mRomeroEnabled = false;
    public static boolean mCasEnabled = false;
    public static boolean mAimAssistEnabled = true;
    public static boolean mFloatingJoyEnabled = false;
    public static boolean mHeartbeatHapticsEnabled = true;
    public static boolean mAutoReload = true;
    public static boolean mAutoPickup = true;
    public static boolean mRapidFireEnabled = true;
    public static int mHudVisibilityMode = 0; // 0=Always Show, 1=Auto-Hide on Gamepad, 2=Hidden
    public static int mStickCurve = 1;
    public static boolean mTelemetryEnabled = false;
    public static float mLookSensX = 1.0f;
    public static float mLookSensY = 1.0f;
    public static boolean mInvertLookY = false;
    public static boolean mBatterySaver = false;
    public static boolean mVignetteEnabled = true;
    public static boolean mShakeEnabled = true;
    public static boolean mSubtitlesEnabled = true;
    public static int mBatteryPct = -1;
    public static float mBatteryTempC = 0.0f;
    public static boolean mBatteryCharging = false;
    private static String mActiveSubtitle = null;
    private static long mSubtitleEndTime = 0;

    private final BroadcastReceiver mBatteryReceiver = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            if (intent == null) return;
            int level = intent.getIntExtra(BatteryManager.EXTRA_LEVEL, -1);
            int scale = intent.getIntExtra(BatteryManager.EXTRA_SCALE, -1);
            int status = intent.getIntExtra(BatteryManager.EXTRA_STATUS, -1);
            int temp = intent.getIntExtra(BatteryManager.EXTRA_TEMPERATURE, -1);
            if (level >= 0 && scale > 0) {
                mBatteryPct = (int) ((level / (float) scale) * 100);
            }
            if (temp > 0) {
                mBatteryTempC = temp / 10.0f;
            }
            mBatteryCharging = (status == BatteryManager.BATTERY_STATUS_CHARGING ||
                                status == BatteryManager.BATTERY_STATUS_FULL);
        }
    };

    private AudioManager mAudioManager;
    private AudioManager.OnAudioFocusChangeListener mAudioFocusListener;
    private final BroadcastReceiver mAudioBecomingNoisyReceiver = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            if (intent == null) return;
            if (AudioManager.ACTION_AUDIO_BECOMING_NOISY.equals(intent.getAction())) {
                try {
                    nativePauseAudio(true);
                    nativeTouchKey(0x1B, true);
                    new Handler(Looper.getMainLooper()).postDelayed(new Runnable() {
                        @Override public void run() {
                            try { nativeTouchKey(0x1B, false); } catch (Throwable ignored) {}
                        }
                    }, 50);
                } catch (Throwable ignored) {}
            }
        }
    };

    public static void showSubtitle(String text, int durationMs) {
        mActiveSubtitle = text;
        mSubtitleEndTime = System.currentTimeMillis() + durationMs;
        if (mSingleton != null && mSingleton.mHudView != null) {
            mSingleton.mHudView.postInvalidate();
        }
    }

    public static String getActiveSubtitle() {
        return mActiveSubtitle;
    }

    public static long getSubtitleEndTime() {
        return mSubtitleEndTime;
    }

    public static void clearSubtitle() {
        mActiveSubtitle = null;
    }

    public static String mPendingStartMap = null;
    public TouchHudView mHudView = null;

    private void loadUserSettings() {
        try {
            SharedPreferences prefs = getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE);
            int fps = prefs.getInt(LauncherActivity.KEY_TARGET_FPS, 0);
            mHudOpacity = prefs.getInt(LauncherActivity.KEY_HUD_OPACITY, 80);
            mHudScale = prefs.getFloat(LauncherActivity.KEY_HUD_SCALE, 1.0f);
            mHapticEnabled = prefs.getBoolean(LauncherActivity.KEY_HAPTIC, true);
            mWidescreen = prefs.getBoolean(LauncherActivity.KEY_WIDESCREEN, true);
            int resW = prefs.getInt("lotd_res_w", 1280);
            int resH = prefs.getInt("lotd_res_h", 720);
            mTargetFov = prefs.getInt(LauncherActivity.KEY_TARGET_FOV, 0);
            mFxaaEnabled = prefs.getBoolean("lotd_fxaa", true);
            mFilmicEnabled = prefs.getBoolean("lotd_filmic", false);
            mRomeroEnabled = prefs.getBoolean("lotd_romero", false);
            mAutoReload = prefs.getBoolean("lotd_autoreload", true);
            mAutoPickup = prefs.getBoolean("lotd_autopickup", true);
            mStickCurve = prefs.getInt("lotd_stick_curve", 1);
            mTelemetryEnabled = prefs.getBoolean("lotd_telemetry", false);
            mLookSensX = prefs.getFloat("lotd_look_sens_x", 1.0f);
            mLookSensY = prefs.getFloat("lotd_look_sens_y", 1.0f);
            mInvertLookY = prefs.getBoolean("lotd_invert_y", false);
            mBatterySaver = prefs.getBoolean("lotd_battery_saver", false);
            mVignetteEnabled = prefs.getBoolean("lotd_vignette", true);
            mShakeEnabled = prefs.getBoolean("lotd_screenshake", true);
            mSubtitlesEnabled = prefs.getBoolean("lotd_subtitles", true);
            mCasEnabled = prefs.getBoolean("lotd_cas", false);
            mAimAssistEnabled = prefs.getBoolean("lotd_aim_assist", true);
            mFloatingJoyEnabled = prefs.getBoolean("lotd_floating_joystick", false);
            mHeartbeatHapticsEnabled = prefs.getBoolean("lotd_heartbeat_haptics", true);
            try { nativeSetTargetResolution(resW, resH); } catch (Throwable ignored) {}
            try { nativeSetTargetFov(mTargetFov); } catch (Throwable ignored) {}
            int wideMode = prefs.getInt("lotd_widescreen_mode", mWidescreen ? 1 : 0);
            try {
                nativeSetWidescreen(wideMode);
            } catch (Throwable ignored) {}
            try { nativeSetFxaa(mFxaaEnabled ? 1 : 0); } catch (Throwable ignored) {}
            try { nativeSetFilmic(mFilmicEnabled ? 1 : 0); } catch (Throwable ignored) {}
            try { nativeSetRomero(mRomeroEnabled ? 1 : 0); } catch (Throwable ignored) {}
            try { nativeSetCas(mCasEnabled ? 1 : 0); } catch (Throwable ignored) {}
            float brightness = prefs.getFloat(LauncherActivity.KEY_BRIGHTNESS, 1.25f);
            try { nativeSetBrightness(brightness); } catch (Throwable ignored) {}
            boolean debugLogs = prefs.getBoolean(LauncherActivity.KEY_DEBUG_LOGS, false);
            try { nativeSetLoggingEnabled(debugLogs); } catch (Throwable ignored) {}
            try { nativeSetStickCurve(mStickCurve); } catch (Throwable ignored) {}
            try { nativeSetVignette(mVignetteEnabled ? 0.28f : 0.0f); } catch (Throwable ignored) {}
            if (mBatterySaver) {
                try { nativeSetTargetFPS(45); } catch (Throwable ignored) {}
            } else if (fps > 0) {
                try { nativeSetTargetFPS(fps); } catch (Throwable ignored) {}
            }
            Intent intent = getIntent();
            if (intent != null && intent.hasExtra("start_map")) {
                mPendingStartMap = intent.getStringExtra("start_map");
            }
        } catch (Throwable ignored) {}
    }

    private void setupTouchHud() {
        try {
            mHudView = new TouchHudView(this);
            RelativeLayout.LayoutParams params = new RelativeLayout.LayoutParams(
                RelativeLayout.LayoutParams.MATCH_PARENT,
                RelativeLayout.LayoutParams.MATCH_PARENT
            );
            mLayout.addView(mHudView, params);
            Log.i(TAG, "TouchHudView initialized successfully");
        } catch (Exception e) {
            Log.e(TAG, "Failed to create TouchHudView", e);
        }
    }

    public static void vibrateHaptic(int ms, int amplitude) {
        if (!mHapticEnabled || mSingleton == null) return;
        try {
            android.os.Vibrator v = (android.os.Vibrator) mSingleton.getSystemService(Context.VIBRATOR_SERVICE);
            if (v != null && v.hasVibrator()) {
                if (Build.VERSION.SDK_INT >= 26) {
                    v.vibrate(android.os.VibrationEffect.createOneShot(ms, amplitude > 0 ? Math.min(255, amplitude) : android.os.VibrationEffect.DEFAULT_AMPLITUDE));
                } else {
                    v.vibrate(ms);
                }
            }
        } catch (Throwable ignored) {}
        try {
            int rumble = amplitude > 0 ? Math.min(65535, amplitude * 257) : 32000;
            nativeRumbleController(rumble, rumble, ms);
        } catch (Throwable ignored) {}
    }

    public static void unlockAchievement(String id, String title, String desc) {
        if (mSingleton == null) return;
        try {
            SharedPreferences prefs = mSingleton.getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE);
            if (!prefs.getBoolean("lotd_ach_" + id, false)) {
                String dateStr = new SimpleDateFormat("yyyy-MM-dd HH:mm", Locale.US).format(new Date());
                prefs.edit().putBoolean("lotd_ach_" + id, true)
                            .putString("lotd_ach_date_" + id, dateStr)
                            .apply();
                vibrateHaptic(50, 240);
                if (mSingleton.mHudView != null) {
                    mSingleton.mHudView.showAchievementBanner(title, desc);
                }
            }
        } catch (Throwable ignored) {}
    }

    public interface SeekCb { void onVal(int val); }
    public interface SeekFmt { String fmt(int val); }
    public interface SpinCb { void onSelect(int idx); }

    public class TouchHudView extends View {
        private final float mDensity;
        private boolean mHudVisible = true;
        private boolean mLastCapturedState = false;

        private float mJoyCenterX, mJoyCenterY;
        private float mJoyNubX, mJoyNubY;
        private float mJoyRadius;
        private float mJoyNubRadius;
        private int mJoyPointerId = -1;

        private boolean mHeldW = false, mHeldS = false, mHeldA = false, mHeldD = false;

        private int mLookPointerId = -1;
        private float mLastLookX, mLastLookY;
        private long mLookJitterSuppressionUntil = 0;

        // Clean Top Bar Elements
        private final RectF mPrevWpnRect = new RectF();    // [< WPN]
        private final RectF mNextWpnRect = new RectF();    // [WPN >]
        private final RectF mHudRestoreRect = new RectF();
        private final Path mIconPath1 = new Path();
        private final Path mIconPath2 = new Path();
        private final RectF mIconRectF = new RectF(); // [ HUD] when HUD is hidden

        private boolean mAutoSprint = true;
        private boolean mHeldShift = false;

        // Stage 16: Interactive Drag-and-Drop HUD Layout Editor & Claw Presets
        public boolean mHudEditMode = false;
        private int mDraggingBtnId = -1; // -1 = none, 0 = joy, 1..7 = mButtons
        private final RectF mEditDoneRect = new RectF();
        private final RectF mEditPreset2ThumbRect = new RectF();
        private final RectF mEditPreset3ClawRect = new RectF();
        private final RectF mEditPreset4TabletRect = new RectF();
        private final RectF mEditPresetLeftyRect = new RectF();
        private final RectF mEditResetRect = new RectF();
        private final RectF mEditScaleMinusRect = new RectF();
        private final RectF mEditScalePlusRect = new RectF();
        private final RectF mEditOpacMinusRect = new RectF();
        private final RectF mEditOpacPlusRect = new RectF();

        private final Runnable mAutoPickupRunnable = new Runnable() {
            @Override
            public void run() {
                if (mAutoPickup && mJoyPointerId != -1) {
                    try {
                        nativeTouchKey('E', true);
                        postDelayed(new Runnable() {
                            @Override public void run() {
                                try { nativeTouchKey('E', false); } catch (Throwable ignored) {}
                            }
                        }, 120);
                    } catch (Throwable ignored) {}
                    postDelayed(this, 280);
                }
            }
        };

        private int mEdgeSwipePointerId = -1;
        private float mEdgeSwipeStartY = 0.0f;

        // 4. Achievement Unlock Banner
        private String mActiveAchievementBanner = null;
        private long mAchievementBannerEndTime = 0;
        private final RectF mAchievementBannerRect = new RectF();

        // 5. Smart Timers
        private long mLastAutoPickupTime = 0;
        private float mFixedJoyCenterX, mFixedJoyCenterY;
        private long mLastHeartbeatHapticTime = 0;

        private static final int BTN_FIRE = 1;
        private static final int BTN_AIM = 2;
        private static final int BTN_JUMP = 3;
        private static final int BTN_CROUCH = 4;
        private static final int BTN_RELOAD = 5;
        private static final int BTN_USE = 6;
        private static final int BTN_FLASH = 7;
        private static final int BTN_RUN = 8;

        private class HudButton {
            int id;
            String label;
            float cx, cy, radius;
            int colorNormal, colorPressed;
            boolean isPressed = false;
            int pointerId = -1;

            HudButton(int id, String label, int normal, int pressed, float r) {
                this.id = id;
                this.label = label;
                this.colorNormal = normal;
                this.colorPressed = pressed;
                this.radius = r;
            }
        }

        private final List<HudButton> mButtons = new ArrayList<HudButton>();

        private final Paint mPaintFill = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint mPaintStroke = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint mPaintText = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint mPaintTextSmall = new Paint(Paint.ANTI_ALIAS_FLAG);

        public TouchHudView(Context context) {
            super(context);
            setFocusable(false);
            setFocusableInTouchMode(false);
            mDensity = getResources().getDisplayMetrics().density;
            float s = Math.max(0.7f, Math.min(1.5f, mHudScale));
            mJoyRadius = dp(65) * s;
            mJoyNubRadius = dp(28) * s;

            try {
                SharedPreferences hp = context.getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE);
                mAutoSprint = hp.getBoolean(LauncherActivity.KEY_AUTO_SPRINT, true);
                mRapidFireEnabled = hp.getBoolean("lotd_rapid_fire", true);
            } catch (Throwable ignored) {}

            mPaintStroke.setStyle(Paint.Style.STROKE);
            mPaintStroke.setStrokeWidth(dp(2));

            mPaintText.setColor(0xFFFFFFFF);
            mPaintText.setTextAlign(Paint.Align.CENTER);
            mPaintText.setTextSize(dp(13) * Math.max(0.85f, s));
            mPaintText.setFakeBoldText(true);

            mPaintTextSmall.setColor(0xFFFFFFFF);
            mPaintTextSmall.setTextAlign(Paint.Align.CENTER);
            mPaintTextSmall.setTextSize(dp(11) * Math.max(0.85f, s));
            mPaintTextSmall.setFakeBoldText(true);

            try {
                android.graphics.Typeface gameTf = null;
                try {
                    gameTf = android.graphics.Typeface.createFromAsset(getContext().getAssets(), "game_font.ttf");
                } catch (Throwable t) {
                    try {
                        gameTf = android.graphics.Typeface.createFromAsset(getContext().getAssets(), "tahoma.ttf");
                    } catch (Throwable ignored) {}
                }
                if (gameTf != null) {
                    mPaintText.setTypeface(gameTf);
                    mPaintTextSmall.setTypeface(gameTf);
                }
            } catch (Throwable ignored) {}

            // Ergonomic Combat Cluster:
            // Outer column: FIRE (bottom), JUMP (mid), RELOAD (top)
            // Inner column: AIM (bottom), CROUCH (mid), USE (top)
            // Flank: RUN, LIGHT
            mButtons.add(new HudButton(BTN_FIRE, "FIRE", 0x99CC2222, 0xEEFF3333, dp(38) * s));
            mButtons.add(new HudButton(BTN_AIM, "AIM", 0x991E6A88, 0xEE2A94C2, dp(32) * s));
            mButtons.add(new HudButton(BTN_JUMP, "JUMP", 0x99228833, 0xEE33DD44, dp(30) * s));
            mButtons.add(new HudButton(BTN_CROUCH, "CROUCH", 0x9944444F, 0xEE666677, dp(28) * s));
            mButtons.add(new HudButton(BTN_RUN, "RUN", 0x9900897B, 0xEE00BFA5, dp(26) * s));
            mButtons.add(new HudButton(BTN_RELOAD, "RELOAD", 0x99445566, 0xEE6688AA, dp(26) * s));
            mButtons.add(new HudButton(BTN_USE, "USE", 0x99887711, 0xEECCAA22, dp(26) * s));
            mButtons.add(new HudButton(BTN_FLASH, "LIGHT", 0x99555544, 0xEEAAAA55, dp(24) * s));
        }

        private float dp(float v) {
            return v * mDensity;
        }

        private int dpi(float v) {
            return (int)(v * mDensity + 0.5f);
        }

        private int applyAlpha(int color) {
            int a = (color >>> 24);
            int newA = Math.max(15, Math.min(255, (int)(a * (mHudOpacity / 100.0f))));
            return (newA << 24) | (color & 0x00FFFFFF);
        }

        private void resetJoyCenter() {
            if (mFixedJoyCenterX > 0 && mFixedJoyCenterY > 0) {
                mJoyCenterX = mFixedJoyCenterX;
                mJoyCenterY = mFixedJoyCenterY;
            } else {
                float s = Math.max(0.7f, Math.min(1.5f, mHudScale));
                mJoyRadius = dp(65) * s;
                mJoyNubRadius = dp(28) * s;
                mJoyCenterX = dp(110) * s;
                mJoyCenterY = getHeight() > 0 ? (getHeight() - dp(100) * s) : dp(250);
            }
            mJoyNubX = mJoyCenterX;
            mJoyNubY = mJoyCenterY;
        }

        public int getControllerType() {
            int[] deviceIds = InputDevice.getDeviceIds();
            for (int id : deviceIds) {
                InputDevice dev = InputDevice.getDevice(id);
                if (dev == null || dev.isVirtual()) continue;
                int sources = dev.getSources();
                if ((sources & InputDevice.SOURCE_GAMEPAD) == InputDevice.SOURCE_GAMEPAD ||
                    (sources & InputDevice.SOURCE_JOYSTICK) == InputDevice.SOURCE_JOYSTICK) {
                    String name = dev.getName().toLowerCase(Locale.US);
                    int vendorId = 0;
                    if (Build.VERSION.SDK_INT >= 19) {
                        vendorId = dev.getVendorId();
                    }
                    if (vendorId == 0x054c || name.contains("playstation") || name.contains("dualshock") ||
                        name.contains("dualsense") || name.contains("ps4") || name.contains("ps5")) {
                        return 2; // PlayStation
                    } else if (vendorId == 0x057e || name.contains("switch") || name.contains("joy-con") ||
                               name.contains("pro controller")) {
                        return 3; // Switch
                    } else {
                        return 1; // Xbox / Generic
                    }
                }
            }
            return 0;
        }

        private void saveHudLayout() {
            try {
                JSONObject obj = new JSONObject();
                obj.put("joyX", (double)mJoyCenterX);
                obj.put("joyY", (double)mJoyCenterY);
                JSONArray btnArr = new JSONArray();
                for (HudButton btn : mButtons) {
                    JSONObject bObj = new JSONObject();
                    bObj.put("id", btn.id);
                    bObj.put("cx", (double)btn.cx);
                    bObj.put("cy", (double)btn.cy);
                    btnArr.put(bObj);
                }
                obj.put("buttons", btnArr);
                getContext().getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE)
                    .edit().putString("lotd_hud_layout_json", obj.toString()).apply();
            } catch (Throwable ignored) {}
        }

        private boolean loadHudLayout() {
            try {
                String json = getContext().getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE)
                    .getString("lotd_hud_layout_json", null);
                if (json == null || json.isEmpty()) return false;
                JSONObject obj = new JSONObject(json);
                if (obj.has("joyX") && obj.has("joyY")) {
                    mJoyCenterX = (float) obj.getDouble("joyX");
                    mJoyCenterY = (float) obj.getDouble("joyY");
                    mJoyNubX = mJoyCenterX;
                    mJoyNubY = mJoyCenterY;
                }
                if (obj.has("buttons")) {
                    JSONArray btnArr = obj.getJSONArray("buttons");
                    for (int i = 0; i < btnArr.length(); i++) {
                        JSONObject bObj = btnArr.getJSONObject(i);
                        int id = bObj.getInt("id");
                        float cx = (float) bObj.getDouble("cx");
                        float cy = (float) bObj.getDouble("cy");
                        for (HudButton btn : mButtons) {
                            if (btn.id == id) {
                                if (id == BTN_RUN && Math.abs(cy - mJoyCenterY) < mJoyRadius + dp(30)) {
                                    break; // Ignore outdated run position too close to movement stick
                                }
                                btn.cx = cx;
                                btn.cy = cy;
                                break;
                            }
                        }
                    }
                }
                return true;
            } catch (Throwable ignored) {
                return false;
            }
        }

        private void applyPreset(int preset) {
            int w = getWidth();
            int h = getHeight();
            if (w <= 0 || h <= 0) return;
            float padL = dp(16);
            float padR = dp(16);
            float s = Math.max(0.7f, Math.min(1.5f, mHudScale));
            float topY = dp(10);

            if (preset == 0) {
                // Preset 0: 2-Thumb (Ergonomic arc)
                mJoyCenterX = padL + dp(85) * s;
                mJoyCenterY = h - dp(95) * s;
                for (HudButton btn : mButtons) {
                    switch (btn.id) {
                        case BTN_FIRE: btn.cx = w - padR - dp(64) * s; btn.cy = h - dp(75) * s; break;
                        case BTN_AIM: btn.cx = w - padR - dp(144) * s; btn.cy = h - dp(75) * s; break;
                        case BTN_JUMP: btn.cx = w - padR - dp(56) * s; btn.cy = h - dp(155) * s; break;
                        case BTN_CROUCH: btn.cx = w - padR - dp(132) * s; btn.cy = h - dp(150) * s; break;
                        case BTN_RUN: btn.cx = padL + dp(65) * s; btn.cy = h - dp(245) * s; break;
                        case BTN_RELOAD: btn.cx = w - padR - dp(50) * s; btn.cy = h - dp(225) * s; break;
                        case BTN_USE: btn.cx = w - padR - dp(120) * s; btn.cy = h - dp(218) * s; break;
                        case BTN_FLASH: btn.cx = w - padR - dp(186) * s; btn.cy = h - dp(180) * s; break;
                    }
                }
            } else if (preset == 1) {
                // Preset 1: 3-Finger Claw (Jump & Aim top-right, Fire thumb-right)
                mJoyCenterX = padL + dp(85) * s;
                mJoyCenterY = h - dp(95) * s;
                for (HudButton btn : mButtons) {
                    switch (btn.id) {
                        case BTN_AIM: btn.cx = w - padR - dp(55) * s; btn.cy = topY + dp(55) * s; break;
                        case BTN_JUMP: btn.cx = w - padR - dp(135) * s; btn.cy = topY + dp(55) * s; break;
                        case BTN_FIRE: btn.cx = w - padR - dp(70) * s; btn.cy = h - dp(75) * s; break;
                        case BTN_CROUCH: btn.cx = w - padR - dp(145) * s; btn.cy = h - dp(75) * s; break;
                        case BTN_RUN: btn.cx = padL + dp(65) * s; btn.cy = h - dp(245) * s; break;
                        case BTN_RELOAD: btn.cx = w - padR - dp(60) * s; btn.cy = h - dp(155) * s; break;
                        case BTN_USE: btn.cx = w - padR - dp(135) * s; btn.cy = h - dp(155) * s; break;
                        case BTN_FLASH: btn.cx = w - padR - dp(195) * s; btn.cy = h - dp(120) * s; break;
                    }
                }
            } else if (preset == 2) {
                // Preset 2: 4-Finger Tablet Claw (Top bumpers for index fingers, thumbs on bottom)
                mJoyCenterX = padL + dp(90) * s;
                mJoyCenterY = h - dp(95) * s;
                for (HudButton btn : mButtons) {
                    switch (btn.id) {
                        case BTN_FIRE: btn.cx = padL + dp(70) * s; btn.cy = topY + dp(60) * s; break;
                        case BTN_AIM: btn.cx = w - padR - dp(70) * s; btn.cy = topY + dp(60) * s; break;
                        case BTN_JUMP: btn.cx = w - padR - dp(60) * s; btn.cy = h - dp(85) * s; break;
                        case BTN_CROUCH: btn.cx = w - padR - dp(140) * s; btn.cy = h - dp(85) * s; break;
                        case BTN_RUN: btn.cx = padL + dp(65) * s; btn.cy = h - dp(245) * s; break;
                        case BTN_RELOAD: btn.cx = w - padR - dp(60) * s; btn.cy = h - dp(165) * s; break;
                        case BTN_USE: btn.cx = w - padR - dp(140) * s; btn.cy = h - dp(165) * s; break;
                        case BTN_FLASH: btn.cx = padL + dp(155) * s; btn.cy = topY + dp(60) * s; break;
                    }
                }
            } else if (preset == 3) {
                // Preset 3: Lefty (Mirrored: Joystick on right, buttons on left)
                mJoyCenterX = w - padR - dp(85) * s;
                mJoyCenterY = h - dp(95) * s;
                for (HudButton btn : mButtons) {
                    switch (btn.id) {
                        case BTN_FIRE: btn.cx = padL + dp(64) * s; btn.cy = h - dp(75) * s; break;
                        case BTN_AIM: btn.cx = padL + dp(144) * s; btn.cy = h - dp(75) * s; break;
                        case BTN_JUMP: btn.cx = padL + dp(56) * s; btn.cy = h - dp(155) * s; break;
                        case BTN_CROUCH: btn.cx = padL + dp(132) * s; btn.cy = h - dp(150) * s; break;
                        case BTN_RUN: btn.cx = w - padR - dp(65) * s; btn.cy = h - dp(245) * s; break;
                        case BTN_RELOAD: btn.cx = padL + dp(50) * s; btn.cy = h - dp(225) * s; break;
                        case BTN_USE: btn.cx = padL + dp(120) * s; btn.cy = h - dp(218) * s; break;
                        case BTN_FLASH: btn.cx = padL + dp(186) * s; btn.cy = h - dp(180) * s; break;
                    }
                }
            }
            mFixedJoyCenterX = mJoyCenterX;
            mFixedJoyCenterY = mJoyCenterY;
            mJoyNubX = mJoyCenterX;
            mJoyNubY = mJoyCenterY;
            saveHudLayout();
            invalidate();
        }


        @Override
        protected void onSizeChanged(int w, int h, int oldw, int oldh) {
            super.onSizeChanged(w, h, oldw, oldh);

            // Safe area insets from display cutouts / notches
            int safeL = 0;
            int safeR = 0;
            if (Build.VERSION.SDK_INT >= 28) {
                try {
                    WindowInsets insets = getRootWindowInsets();
                    if (insets != null) {
                        DisplayCutout cutout = insets.getDisplayCutout();
                        if (cutout != null) {
                            safeL = cutout.getSafeInsetLeft();
                            safeR = cutout.getSafeInsetRight();
                        }
                    }
                } catch (Throwable ignored) {}
            }
            float padL = Math.max(dp(12), safeL + dp(6));
            float padR = Math.max(dp(12), safeR + dp(6));
            float s = Math.max(0.7f, Math.min(1.5f, mHudScale));

            // Clean Top Bar layout:
            float topY = dp(10);
            float btnH = dp(34) * s;

            // 1. Left: Restore HUD button (when HUD is hidden)
            mHudRestoreRect.set(padL, topY, padL + dp(76) * s, topY + btnH);

            // Right: [< PREV] [NEXT >] (Positioned left of the top-right health paperdoll)
            float wpnW = dp(52) * s;
            float wpnRight = Math.min(w - padR - dp(85) * s, w * 0.81f);
            mNextWpnRect.set(wpnRight - wpnW, topY, wpnRight, topY + btnH);
            mPrevWpnRect.set(wpnRight - wpnW * 2f - dp(6) * s, topY, wpnRight - wpnW - dp(6) * s, topY + btnH);

            // Achievement Banner at Top Center
            float bannerW = Math.min(dp(440), w * 0.85f);
            float bannerH = dp(40);
            float bX = (w - bannerW) / 2f;
            mAchievementBannerRect.set(bX, dp(8), bX + bannerW, dp(8) + bannerH);

            // 4. Position virtual joystick with safe margin
            mJoyRadius = dp(65) * s;
            mJoyNubRadius = dp(28) * s;
            mJoyCenterX = padL + dp(85) * s;
            mJoyCenterY = h > 0 ? (h - dp(95) * s) : dp(250);
            mFixedJoyCenterX = mJoyCenterX;
            mFixedJoyCenterY = mJoyCenterY;
            mJoyNubX = mJoyCenterX;
            mJoyNubY = mJoyCenterY;

            // 5. Position circular action buttons in ergonomic 2-column arc
            for (HudButton btn : mButtons) {
                btn.radius = (btn.id == BTN_FIRE ? dp(38) :
                             btn.id == BTN_AIM ? dp(32) :
                             btn.id == BTN_JUMP ? dp(30) :
                             btn.id == BTN_CROUCH ? dp(28) :
                             btn.id == BTN_RUN ? dp(26) :
                             btn.id == BTN_RELOAD ? dp(26) :
                             btn.id == BTN_USE ? dp(26) : dp(24)) * s;

                switch (btn.id) {
                    case BTN_FIRE:
                        // Outer Col: Bottom
                        btn.cx = w - padR - dp(64) * s;
                        btn.cy = h - dp(75) * s;
                        break;
                    case BTN_AIM:
                        // Inner Col: Bottom
                        btn.cx = w - padR - dp(144) * s;
                        btn.cy = h - dp(75) * s;
                        break;
                    case BTN_JUMP:
                        // Outer Col: Mid
                        btn.cx = w - padR - dp(56) * s;
                        btn.cy = h - dp(155) * s;
                        break;
                    case BTN_CROUCH:
                        // Inner Col: Mid
                        btn.cx = w - padR - dp(132) * s;
                        btn.cy = h - dp(150) * s;
                        break;
                    case BTN_RUN:
                        // Positioned comfortably higher away from thumbstick so no accidental triggers
                        btn.cx = padL + dp(65) * s;
                        btn.cy = h - dp(245) * s;
                        break;
                    case BTN_RELOAD:
                        // Outer Col: Top
                        btn.cx = w - padR - dp(50) * s;
                        btn.cy = h - dp(225) * s;
                        break;
                    case BTN_USE:
                        // Inner Col: Top
                        btn.cx = w - padR - dp(120) * s;
                        btn.cy = h - dp(218) * s;
                        break;
                    case BTN_FLASH:
                        // Inner Flank
                        btn.cx = w - padR - dp(186) * s;
                        btn.cy = h - dp(180) * s;
                        break;
                }
            }

            // Load user's saved layout if present
            loadHudLayout();

            // 6. HUD Edit Mode Toolbar (Top Bar)
            float editW = (w - padL - padR - dp(45)) / 10f;
            float editH = dp(30);
            float editY = dp(10);
            float ex = padL;
            mEditDoneRect.set(ex, editY, ex + editW, editY + editH); ex += editW + dp(5);
            mEditPreset2ThumbRect.set(ex, editY, ex + editW, editY + editH); ex += editW + dp(5);
            mEditPreset3ClawRect.set(ex, editY, ex + editW, editY + editH); ex += editW + dp(5);
            mEditPreset4TabletRect.set(ex, editY, ex + editW, editY + editH); ex += editW + dp(5);
            mEditPresetLeftyRect.set(ex, editY, ex + editW, editY + editH); ex += editW + dp(5);
            mEditResetRect.set(ex, editY, ex + editW, editY + editH); ex += editW + dp(5);
            mEditScaleMinusRect.set(ex, editY, ex + editW, editY + editH); ex += editW + dp(5);
            mEditScalePlusRect.set(ex, editY, ex + editW, editY + editH); ex += editW + dp(5);
            mEditOpacMinusRect.set(ex, editY, ex + editW, editY + editH); ex += editW + dp(5);
            mEditOpacPlusRect.set(ex, editY, ex + editW, editY + editH);
        }

        @Override
        public WindowInsets onApplyWindowInsets(WindowInsets insets) {
            if (Build.VERSION.SDK_INT >= 28 && insets != null) {
                try {
                    DisplayCutout cutout = insets.getDisplayCutout();
                    if (cutout != null && getWidth() > 0 && getHeight() > 0) {
                        onSizeChanged(getWidth(), getHeight(), getWidth(), getHeight());
                        invalidate();
                    }
                } catch (Throwable ignored) {}
            }
            return super.onApplyWindowInsets(insets);
        }

        private final Runnable mCaptureCheckRunnable = new Runnable() {
            @Override
            public void run() {
                boolean captured = false;
                try {
                    captured = nativeIsCaptured();
                } catch (Throwable ignored) {}
                if (captured != mLastCapturedState) {
                    mLastCapturedState = captured;
                    if (!captured) {
                        resetControls();
                        if (Build.VERSION.SDK_INT >= 26) {
                            try {
                                if (hasPointerCapture()) {
                                    releasePointerCapture();
                                }
                            } catch (Throwable ignored) {}
                        }
                    } else {
                        if (Build.VERSION.SDK_INT >= 26) {
                            try {
                                boolean hasMouse = false;
                                int[] devIds = InputDevice.getDeviceIds();
                                for (int id : devIds) {
                                    InputDevice d = InputDevice.getDevice(id);
                                    if (d != null && (d.getSources() & InputDevice.SOURCE_MOUSE) != 0) {
                                        hasMouse = true;
                                        break;
                                    }
                                }
                                if (hasMouse && !hasPointerCapture()) {
                                    requestPointerCapture();
                                }
                            } catch (Throwable ignored) {}
                        }
                        if (mPendingStartMap != null && !mPendingStartMap.isEmpty()) {
                            final String mapCmd = "open " + mPendingStartMap;
                            mPendingStartMap = null;
                            postDelayed(new Runnable() {
                                @Override
                                public void run() {
                                    try {
                                        nativeExecConsole(mapCmd);
                                    } catch (Throwable ignored) {}
                                }
                            }, 500);
                        }
                    }
                    invalidate();
                }
                postDelayed(this, 250);
            }
        };

        @Override
        protected void onAttachedToWindow() {
            super.onAttachedToWindow();
            post(mCaptureCheckRunnable);
        }

        @Override
        protected void onDetachedFromWindow() {
            removeCallbacks(mCaptureCheckRunnable);
            resetControls();
            super.onDetachedFromWindow();
        }

        public void resetControls() {
            if (mJoyPointerId != -1 || mHeldW || mHeldS || mHeldA || mHeldD) {
                if (mHeldW) { mHeldW = false; try { nativeTouchKey('W', false); } catch (Throwable ignored) {} }
                if (mHeldS) { mHeldS = false; try { nativeTouchKey('S', false); } catch (Throwable ignored) {} }
                if (mHeldA) { mHeldA = false; try { nativeTouchKey('A', false); } catch (Throwable ignored) {} }
                if (mHeldD) { mHeldD = false; try { nativeTouchKey('D', false); } catch (Throwable ignored) {} }
                if (mHeldShift) { mHeldShift = false; try { nativeTouchKey(0x10, false); } catch (Throwable ignored) {} }
                mJoyPointerId = -1;
                resetJoyCenter();
            }
            mLookPointerId = -1;
            for (HudButton btn : mButtons) {
                if (btn.isPressed) {
                    btn.isPressed = false;
                    btn.pointerId = -1;
                    triggerButton(btn, false);
                }
            }
            invalidate();
        }

        private void triggerButton(final HudButton btn, boolean down) {
            try {
                if (down) {
                    if (btn.id == BTN_FIRE) {
                        vibrateHaptic(35, 220);
                    }
                    else if (btn.id == BTN_JUMP) vibrateHaptic(20, 140);
                    else vibrateHaptic(12, 90);
                } else {
                    if (btn.id == BTN_FIRE && mAutoReload) {
                        postDelayed(new Runnable() {
                            @Override public void run() {
                                if (!btn.isPressed) {
                                    try {
                                        nativeTouchKey('R', true);
                                        postDelayed(new Runnable() {
                                            @Override public void run() { try { nativeTouchKey('R', false); } catch (Throwable ignored) {} }
                                        }, 60);
                                    } catch (Throwable ignored) {}
                                }
                            }
                        }, 800);
                    }
                }
                switch (btn.id) {
                    case BTN_FIRE:
                        nativeTouchMouseButton(0, down);
                        if (down && mRapidFireEnabled) {
                            startRapidFireLoop(btn);
                        }
                        break;
                    case BTN_AIM:
                        if (down) {
                            nativeTouchMouseButtonPulse(1);
                        }
                        break;
                    case BTN_JUMP:
                        nativeTouchKey(0x20, down); // Space
                        break;
                    case BTN_CROUCH:
                        nativeTouchKey(0x11, down); // Ctrl
                        break;
                    case BTN_RUN:
                        nativeTouchKey(0x10, down); // VK_SHIFT (Sprint / Walk)
                        break;
                    case BTN_RELOAD:
                        nativeTouchKey('R', down);
                        break;
                    case BTN_USE:
                        nativeTouchKey('E', down);
                        break;
                    case BTN_FLASH:
                        nativeTouchKey('F', down);
                        break;
                }
            } catch (Throwable ignored) {}
        }

        private void startRapidFireLoop(final HudButton btn) {
            postDelayed(new Runnable() {
                @Override
                public void run() {
                    if (btn.isPressed && mRapidFireEnabled) {
                        try {
                            nativeTouchMouseButton(0, false);
                            postDelayed(new Runnable() {
                                @Override
                                public void run() {
                                    if (btn.isPressed && mRapidFireEnabled) {
                                        try {
                                            nativeTouchMouseButton(0, true);
                                            vibrateHaptic(20, 160);
                                        } catch (Throwable ignored) {}
                                        startRapidFireLoop(btn);
                                    }
                                }
                            }, 35);
                        } catch (Throwable ignored) {}
                    }
                }
            }, 130);
        }

        @Override
        public boolean onGenericMotionEvent(MotionEvent event) {
            int toolType = event.getToolType(0);
            boolean isMouse = (toolType == MotionEvent.TOOL_TYPE_MOUSE) ||
                              (event.isFromSource(InputDevice.SOURCE_MOUSE) && toolType != MotionEvent.TOOL_TYPE_FINGER && toolType != MotionEvent.TOOL_TYPE_STYLUS);
            if (isMouse && mSurface != null) {
                return SDLActivity.getMotionListener().onGenericMotion(mSurface, event);
            }
            return super.onGenericMotionEvent(event);
        }

        @Override
        public boolean onCapturedPointerEvent(MotionEvent event) {
            if (mSurface != null) {
                return mSurface.onCapturedPointerEvent(event);
            }
            return super.onCapturedPointerEvent(event);
        }

        @Override
        public void onPointerCaptureChange(boolean hasCapture) {
            super.onPointerCaptureChange(hasCapture);
            if (mSurface != null && Build.VERSION.SDK_INT >= 26) {
                mSurface.onPointerCaptureChange(hasCapture);
            }
        }

        @Override
        public boolean onTouchEvent(MotionEvent event) {
            int action = event.getActionMasked();
            int actionIndex = event.getActionIndex();
            int pointerId = event.getPointerId(actionIndex);
            float x = event.getX(actionIndex);
            float y = event.getY(actionIndex);

            // If HUD Edit Mode is active (Stage 16):
            if (mHudEditMode) {
                if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) {
                    if (mEditDoneRect.contains(x, y)) {
                        mHudEditMode = false;
                        mDraggingBtnId = -1;
                        saveHudLayout();
                        vibrateHaptic(25, 180);
                        Toast.makeText(getContext(), "HUD Layout Saved!", Toast.LENGTH_SHORT).show();
                        try {
                            nativeTouchKey(0x1B, true);
                            postDelayed(new Runnable() {
                                @Override public void run() { try { nativeTouchKey(0x1B, false); } catch (Throwable ignored) {} }
                            }, 50);
                        } catch (Throwable ignored) {}
                        invalidate();
                        return true;
                    }
                    if (mEditPreset2ThumbRect.contains(x, y)) {
                        applyPreset(0);
                        vibrateHaptic(20, 150);
                        Toast.makeText(getContext(), "Applied 2-Thumb Preset", Toast.LENGTH_SHORT).show();
                        return true;
                    }
                    if (mEditPreset3ClawRect.contains(x, y)) {
                        applyPreset(1);
                        vibrateHaptic(20, 150);
                        Toast.makeText(getContext(), "Applied 3-Finger Claw Preset", Toast.LENGTH_SHORT).show();
                        return true;
                    }
                    if (mEditPreset4TabletRect.contains(x, y)) {
                        applyPreset(2);
                        vibrateHaptic(20, 150);
                        Toast.makeText(getContext(), "Applied 4-Finger Tablet Preset", Toast.LENGTH_SHORT).show();
                        return true;
                    }
                    if (mEditPresetLeftyRect.contains(x, y)) {
                        applyPreset(3);
                        vibrateHaptic(20, 150);
                        Toast.makeText(getContext(), "Applied Lefty Preset", Toast.LENGTH_SHORT).show();
                        return true;
                    }
                    if (mEditResetRect.contains(x, y)) {
                        applyPreset(0);
                        vibrateHaptic(20, 150);
                        Toast.makeText(getContext(), "Layout Reset to Default", Toast.LENGTH_SHORT).show();
                        return true;
                    }
                    if (mEditScaleMinusRect.contains(x, y)) {
                        mHudScale = Math.max(0.70f, mHudScale - 0.10f);
                        vibrateHaptic(15, 100);
                        onSizeChanged(getWidth(), getHeight(), getWidth(), getHeight());
                        saveHudLayout();
                        invalidate();
                        return true;
                    }
                    if (mEditScalePlusRect.contains(x, y)) {
                        mHudScale = Math.min(1.40f, mHudScale + 0.10f);
                        vibrateHaptic(15, 100);
                        onSizeChanged(getWidth(), getHeight(), getWidth(), getHeight());
                        saveHudLayout();
                        invalidate();
                        return true;
                    }
                    if (mEditOpacMinusRect.contains(x, y)) {
                        mHudOpacity = Math.max(30, mHudOpacity - 15);
                        getContext().getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE)
                            .edit().putInt(LauncherActivity.KEY_HUD_OPACITY, mHudOpacity).apply();
                        vibrateHaptic(15, 100);
                        invalidate();
                        return true;
                    }
                    if (mEditOpacPlusRect.contains(x, y)) {
                        mHudOpacity = Math.min(100, mHudOpacity + 15);
                        getContext().getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE)
                            .edit().putInt(LauncherActivity.KEY_HUD_OPACITY, mHudOpacity).apply();
                        vibrateHaptic(15, 100);
                        invalidate();
                        return true;
                    }

                    // Check if joystick center is grabbed
                    float joyDx = x - mJoyCenterX;
                    float joyDy = y - mJoyCenterY;
                    if (joyDx * joyDx + joyDy * joyDy <= mJoyRadius * mJoyRadius * 1.4f) {
                        mDraggingBtnId = 0; // Joystick
                        vibrateHaptic(15, 100);
                        invalidate();
                        return true;
                    }

                    // Check if circular button is grabbed
                    for (HudButton btn : mButtons) {
                        float bdx = x - btn.cx;
                        float bdy = y - btn.cy;
                        if (bdx * bdx + bdy * bdy <= btn.radius * btn.radius * 1.5f) {
                            mDraggingBtnId = btn.id;
                            vibrateHaptic(15, 100);
                            invalidate();
                            return true;
                        }
                    }
                    return true;
                } else if (action == MotionEvent.ACTION_MOVE) {
                    if (mDraggingBtnId == 0) {
                        mJoyCenterX = Math.max(mJoyRadius, Math.min(x, getWidth() - mJoyRadius));
                        mJoyCenterY = Math.max(mJoyRadius, Math.min(y, getHeight() - mJoyRadius));
                        mJoyNubX = mJoyCenterX;
                        mJoyNubY = mJoyCenterY;
                        invalidate();
                        return true;
                    } else if (mDraggingBtnId > 0) {
                        for (HudButton btn : mButtons) {
                            if (btn.id == mDraggingBtnId) {
                                btn.cx = Math.max(btn.radius, Math.min(x, getWidth() - btn.radius));
                                btn.cy = Math.max(btn.radius, Math.min(y, getHeight() - btn.radius));
                                invalidate();
                                return true;
                            }
                        }
                    }
                    return true;
                } else if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP || action == MotionEvent.ACTION_CANCEL) {
                    if (mDraggingBtnId != -1) {
                        mDraggingBtnId = -1;
                        saveHudLayout();
                        invalidate();
                    }
                    return true;
                }
                return true;
            }

            // 0. Instantly skip cutscenes, intros, or Bink movies on touch
            if (nativeIsMoviePlaying()) {
                if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) {
                    vibrateHaptic(20, 150);
                    nativeSkipMovie();
                    return true;
                }
            }

            // External Mouse Input Handling
            int toolType = event.getToolType(actionIndex);
            boolean isMouse = (toolType == MotionEvent.TOOL_TYPE_MOUSE) ||
                              (event.isFromSource(InputDevice.SOURCE_MOUSE) && toolType != MotionEvent.TOOL_TYPE_FINGER && toolType != MotionEvent.TOOL_TYPE_STYLUS);
            if (isMouse) {
                if (Build.VERSION.SDK_INT >= 26) {
                    boolean inGame = false;
                    try { inGame = nativeIsCaptured(); } catch (Throwable ignored) {}
                    if (inGame && (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN)) {
                        if (!hasPointerCapture()) {
                            requestPointerCapture();
                        }
                    }
                }
                if (mSurface != null) {
                    return mSurface.onTouch(mSurface, event);
                }
                return false;
            }

            boolean inGame = false;
            try { inGame = nativeIsCaptured(); } catch (Throwable ignored) {}

            // Direct Touch-to-Mouse menu navigation (when in menus, pause screen, or profile select)
            if (!inGame && !mHudEditMode) {
                if (action == MotionEvent.ACTION_DOWN) {
                    nativeTouchMenuAction(0, (int)x, (int)y);
                    vibrateHaptic(12, 90);
                    return true;
                } else if (action == MotionEvent.ACTION_MOVE) {
                    nativeTouchMenuAction(1, (int)x, (int)y);
                    return true;
                } else if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL) {
                    nativeTouchMenuAction(2, (int)x, (int)y);
                    return true;
                }
            }

            // If HUD is hidden, check restore pill tap:
            if (!mHudVisible) {
                if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) {
                    if (mHudRestoreRect.contains(x, y)) {
                        mHudVisible = true;
                        vibrateHaptic(20, 150);
                        invalidate();
                        return true;
                    }
                }
            }

            try {
                inGame = nativeIsCaptured();
            } catch (Throwable ignored) {}

            // When HUD is turned off, or when game is in menus:
            // Allow touch to fall through to mSurface for mouse clicks!
            if (!mHudVisible || !inGame) {
                if (mJoyPointerId != -1 || mLookPointerId != -1) {
                    resetControls();
                }
                return false;
            }

            switch (action) {
                case MotionEvent.ACTION_DOWN:
                case MotionEvent.ACTION_POINTER_DOWN: {
                    handlePointerDown(event, pointerId, x, y);
                    break;
                }
                case MotionEvent.ACTION_MOVE: {
                    handleMove(event);
                    break;
                }
                case MotionEvent.ACTION_POINTER_UP:
                case MotionEvent.ACTION_UP:
                case MotionEvent.ACTION_CANCEL: {
                    handlePointerUp(event, pointerId);
                    break;
                }
            }
            invalidate();
            return true;
        }

        private void handlePointerDown(MotionEvent event, int pid, float x, float y) {
            if (mLookPointerId != -1 && mLookPointerId != pid) {
                int lidx = event.findPointerIndex(mLookPointerId);
                if (lidx >= 0) {
                    mLastLookX = event.getX(lidx);
                    mLastLookY = event.getY(lidx);
                }
            }

            // Weapon Switch: [< PREV], [NEXT >]
            if (mPrevWpnRect.contains(x, y)) {
                vibrateHaptic(15, 100);
                try { nativeTouchWheel(-120); } catch (Throwable ignored) {}
                return;
            }
            if (mNextWpnRect.contains(x, y)) {
                vibrateHaptic(15, 100);
                try { nativeTouchWheel(120); } catch (Throwable ignored) {}
                return;
            }

            // Check circular action buttons:
            for (HudButton btn : mButtons) {
                float dx = x - btn.cx;
                float dy = y - btn.cy;
                float hitMultiplier = 1.05f;
                if (dx * dx + dy * dy <= (btn.radius * hitMultiplier) * (btn.radius * hitMultiplier)) {
                    if (mLookPointerId == pid) {
                        mLookPointerId = -1;
                    }
                    btn.pointerId = pid;
                    btn.isPressed = true;
                    triggerButton(btn, true);
                    return;
                }
            }

            // Check if left area -> Virtual Joystick
            if (x < getWidth() * 0.45f && y > getHeight() * 0.25f) {
                if (mJoyPointerId == -1) {
                    mJoyPointerId = pid;
                    if (mFloatingJoyEnabled) {
                        mJoyCenterX = Math.max(mJoyRadius, Math.min(x, getWidth() * 0.45f - mJoyRadius));
                        mJoyCenterY = Math.max(mJoyRadius, Math.min(y, getHeight() - mJoyRadius));
                    } else {
                        mJoyCenterX = mFixedJoyCenterX;
                        mJoyCenterY = mFixedJoyCenterY;
                    }
                    mJoyNubX = mJoyCenterX;
                    mJoyNubY = mJoyCenterY;
                    removeCallbacks(mAutoPickupRunnable);
                    post(mAutoPickupRunnable);
                }
                return;
            }

            // Edge Swipe Weapon Cycle (rightmost 2% edge of screen)
            if (x >= getWidth() * 0.98f && y >= getHeight() * 0.20f && y <= getHeight() * 0.80f) {
                if (mEdgeSwipePointerId == -1) {
                    mEdgeSwipePointerId = pid;
                    mEdgeSwipeStartY = y;
                    return;
                }
            }

            // Otherwise -> 3D Camera Look
            if (mLookPointerId == -1) {
                mLookPointerId = pid;
                mLastLookX = x;
                mLastLookY = y;
            }
        }

        private void handleMove(MotionEvent event) {
            if (mEdgeSwipePointerId != -1) {
                int idx = event.findPointerIndex(mEdgeSwipePointerId);
                if (idx >= 0) {
                    float curY = event.getY(idx);
                    float diffY = curY - mEdgeSwipeStartY;
                    if (diffY < -dp(38)) {
                        mEdgeSwipeStartY = curY;
                        vibrateHaptic(15, 100);
                        try { nativeTouchWheel(120); } catch (Throwable ignored) {} // Next Weapon
                    } else if (diffY > dp(38)) {
                        mEdgeSwipeStartY = curY;
                        vibrateHaptic(15, 100);
                        try { nativeTouchWheel(-120); } catch (Throwable ignored) {} // Prev Weapon
                    }
                }
            }

            if (mJoyPointerId != -1) {
                int idx = event.findPointerIndex(mJoyPointerId);
                if (idx >= 0) {
                    float curX = event.getX(idx);
                    float curY = event.getY(idx);
                    float dx = curX - mJoyCenterX;
                    float dy = curY - mJoyCenterY;
                    float dist = (float) Math.hypot(dx, dy);
                    float maxR = mJoyRadius * 0.9f;
                    if (dist > maxR && dist > 0.001f) {
                        dx = dx * maxR / dist;
                        dy = dy * maxR / dist;
                    }
                    mJoyNubX = mJoyCenterX + dx;
                    mJoyNubY = mJoyCenterY + dy;

                    float normX = dx / maxR;
                    float normY = dy / maxR;
                    float deadzone = 0.22f;

                    boolean wantW = (normY < -deadzone);
                    boolean wantS = (normY > deadzone);
                    boolean wantA = (normX < -deadzone);
                    boolean wantD = (normX > deadzone);

                    try {
                        if (wantW != mHeldW) { mHeldW = wantW; nativeTouchKey('W', wantW); }
                        if (wantS != mHeldS) { mHeldS = wantS; nativeTouchKey('S', wantS); }
                        if (wantA != mHeldA) { mHeldA = wantA; nativeTouchKey('A', wantA); }
                        if (wantD != mHeldD) { mHeldD = wantD; nativeTouchKey('D', wantD); }
                        if (mAutoSprint && normY < -0.96f) {
                            if (!mHeldShift) { mHeldShift = true; nativeTouchKey(0x10, true); }
                        } else if (mHeldShift && normY >= -0.85f) {
                            mHeldShift = false; nativeTouchKey(0x10, false);
                        }
                    } catch (Throwable ignored) {}
                }
            }

            if (mLookPointerId != -1) {
                // Ensure mLookPointerId does not belong to any non-fire pressed button
                for (HudButton btn : mButtons) {
                    if (btn.isPressed && btn.pointerId == mLookPointerId && btn.id != BTN_FIRE) {
                        mLookPointerId = -1;
                        break;
                    }
                }
            }

            if (mLookPointerId != -1) {
                int idx = event.findPointerIndex(mLookPointerId);
                if (idx >= 0) {
                    float curX = event.getX(idx);
                    float curY = event.getY(idx);
                    float dx = curX - mLastLookX;
                    float dy = curY - mLastLookY;
                    mLastLookX = curX;
                    mLastLookY = curY;

                    if (Math.abs(dx) >= 0.0001f || Math.abs(dy) >= 0.0001f) {
                        try {
                            float sendDy = mInvertLookY ? -dy : dy;
                            boolean isAiming = false;
                            try { isAiming = nativeIsAiming(); } catch (Throwable ignored) {}
                            float aimSens = isAiming ? 0.65f : 1.0f;
                            nativeTouchLook(dx * 1.55f * aimSens * mLookSensX, sendDy * 1.55f * aimSens * mLookSensY);
                        } catch (Throwable ignored) {}
                    }
                }
            }
        }

        private void handlePointerUp(MotionEvent event, int pid) {
            if (mLookPointerId != -1 && mLookPointerId != pid) {
                int lidx = event.findPointerIndex(mLookPointerId);
                if (lidx >= 0) {
                    mLastLookX = event.getX(lidx);
                    mLastLookY = event.getY(lidx);
                }
            }
            if (mJoyPointerId == pid) {
                mJoyPointerId = -1;
                removeCallbacks(mAutoPickupRunnable);
                try {
                    if (mHeldW) { mHeldW = false; nativeTouchKey('W', false); }
                    if (mHeldS) { mHeldS = false; nativeTouchKey('S', false); }
                    if (mHeldA) { mHeldA = false; nativeTouchKey('A', false); }
                    if (mHeldD) { mHeldD = false; nativeTouchKey('D', false); }
                    if (mHeldShift) { mHeldShift = false; nativeTouchKey(0x10, false); }
                } catch (Throwable ignored) {}
                resetJoyCenter();
            }

            if (mLookPointerId == pid) {
                mLookPointerId = -1;
            }

            if (mEdgeSwipePointerId == pid) {
                mEdgeSwipePointerId = -1;
            }

            for (HudButton btn : mButtons) {
                if (btn.pointerId == pid) {
                    btn.pointerId = -1;
                    btn.isPressed = false;
                    triggerButton(btn, false);
                }
            }
        }

        
        private void drawHudButton(Canvas canvas, HudButton btn, int ctrlType) {
            float cx = btn.cx;
            float cy = btn.cy;
            float r = btn.radius;
            boolean isPressed = btn.isPressed;

            int plateCol = isPressed ? 0xEE2A333C : 0xDD15191E;
            int borderCol = isPressed ? 0xFFFFB300 : 0xFF3D4650;
            if (btn.id == BTN_FIRE) {
                plateCol = isPressed ? 0xFFC62828 : 0xDD8B1515;
                borderCol = isPressed ? 0xFFFF5252 : 0xFFD32F2F;
            } else if (btn.id == BTN_AIM) {
                plateCol = isPressed ? 0xEE243444 : 0xDD172029;
                borderCol = isPressed ? 0xFF00E5FF : 0xFF436079;
            } else if (btn.id == BTN_RUN) {
                plateCol = isPressed ? 0xEE22382C : 0xDD14231B;
                borderCol = isPressed ? 0xFF00E676 : 0xFF38634B;
            }

            mPaintFill.setColor(applyAlpha(plateCol));
            canvas.drawCircle(cx, cy, r, mPaintFill);

            mPaintStroke.setColor(applyAlpha(borderCol));
            mPaintStroke.setStrokeWidth(dp(isPressed ? 2.5f : 1.8f));
            canvas.drawCircle(cx, cy, r, mPaintStroke);

            if (isPressed) {
                mPaintStroke.setColor(applyAlpha(0x88FFB300));
                mPaintStroke.setStrokeWidth(dp(4.0f));
                canvas.drawCircle(cx, cy, r + dp(3), mPaintStroke);
                mPaintStroke.setStrokeWidth(dp(2.0f));
            }

            int accentCol = isPressed ? 0xFFFFD54F : 0xFFECEFF1;
            if (btn.id == BTN_FIRE) {
                accentCol = 0xFFFFFFFF;
            }

            String label = btn.label;

            // Draw button label cleanly centered in the circular button (clean mobile controls without icons)
            mPaintText.setColor(applyAlpha(accentCol));
            float textSize = dp(btn.id == BTN_FIRE ? 15 : (label.length() > 5 ? 10 : (label.length() > 3 ? 11 : 13)));
            mPaintText.setTextSize(textSize);
            Paint.FontMetrics fm = mPaintText.getFontMetrics();
            float textY = cy - (fm.ascent + fm.descent) / 2f;
            canvas.drawText(label, cx, textY, mPaintText);
        }

        @Override
        protected void onDraw(Canvas canvas) {
            super.onDraw(canvas);

            // Tapping screen skips cutscenes, no skip button needed
            if (nativeIsMoviePlaying()) {
                return;
            }

            boolean inGame = false;
            try {
                inGame = nativeIsCaptured();
            } catch (Throwable ignored) {}

            int ctrlType = getControllerType();
            boolean hideHud = (mHudVisibilityMode == 2) || (mHudVisibilityMode == 1 && ctrlType > 0) || !mHudVisible;
            if (hideHud) {
                mPaintFill.setColor(0xAA111111);
                canvas.drawRoundRect(mHudRestoreRect, dp(8), dp(8), mPaintFill);
                mPaintStroke.setColor(0x88FFFFFF);
                canvas.drawRoundRect(mHudRestoreRect, dp(8), dp(8), mPaintStroke);
                canvas.drawText("[HUD]", mHudRestoreRect.centerX(), mHudRestoreRect.centerY() + dp(4), mPaintTextSmall);
                return;
            }

            if (!inGame && !mHudEditMode) {
                return;
            }

            // 1. Draw Virtual Joystick
            mPaintFill.setColor(applyAlpha(0x33FFFFFF));
            canvas.drawCircle(mJoyCenterX, mJoyCenterY, mJoyRadius, mPaintFill);
            mPaintStroke.setColor(applyAlpha(0x66FFFFFF));
            canvas.drawCircle(mJoyCenterX, mJoyCenterY, mJoyRadius, mPaintStroke);

            mPaintFill.setColor(applyAlpha(mJoyPointerId != -1 ? 0xDDFFFFFF : 0x77FFFFFF));
            canvas.drawCircle(mJoyNubX, mJoyNubY, mJoyNubRadius, mPaintFill);

            if (mHeldShift) {
                mPaintStroke.setColor(applyAlpha(0xCC00E5FF));
                mPaintStroke.setStrokeWidth(dp(3.0f));
                canvas.drawCircle(mJoyCenterX, mJoyCenterY, mJoyRadius + dp(6), mPaintStroke);
                canvas.drawText("SPRINT", mJoyCenterX, mJoyCenterY - mJoyRadius - dp(12), mPaintTextSmall);
                mPaintStroke.setStrokeWidth(dp(2.0f));
            } else if (mAutoSprint && mJoyPointerId != -1) {
                mPaintStroke.setColor(applyAlpha(0x6600E5FF));
                canvas.drawCircle(mJoyCenterX, mJoyCenterY - mJoyRadius * 1.05f, dp(5), mPaintStroke);
                canvas.drawText("RUN", mJoyCenterX, mJoyCenterY - mJoyRadius - dp(6), mPaintTextSmall);
            }

            // 2. Weapon Switcher (< PREV and NEXT >)
            mPaintFill.setColor(applyAlpha(0xEE14181D));
            canvas.drawRoundRect(mPrevWpnRect, dp(6), dp(6), mPaintFill);
            mPaintStroke.setColor(applyAlpha(0xFF3D4650));
            mPaintStroke.setStrokeWidth(dp(1.8f));
            canvas.drawRoundRect(mPrevWpnRect, dp(6), dp(6), mPaintStroke);
            mPaintTextSmall.setColor(applyAlpha(0xFFECEFF1));
            canvas.drawText("< PREV", mPrevWpnRect.centerX(), mPrevWpnRect.centerY() + dp(4), mPaintTextSmall);

            canvas.drawRoundRect(mNextWpnRect, dp(6), dp(6), mPaintFill);
            canvas.drawRoundRect(mNextWpnRect, dp(6), dp(6), mPaintStroke);
            canvas.drawText("NEXT >", mNextWpnRect.centerX(), mNextWpnRect.centerY() + dp(4), mPaintTextSmall);

            // 3. Draw Thematic Vector Icon Combat Action Buttons (Clean LOTD Style)
            for (HudButton btn : mButtons) {
                drawHudButton(canvas, btn, ctrlType);
            }

            // 5. Interactive HUD Edit Mode Overlay (Stage 16)
            if (mHudEditMode) {
                // Dim screen
                canvas.drawColor(0x88000000);

                // Alignment Guidelines
                mPaintStroke.setColor(0x44FFFFFF);
                canvas.drawLine(getWidth() / 2f, 0, getWidth() / 2f, getHeight(), mPaintStroke);
                canvas.drawLine(0, getHeight() / 2f, getWidth(), getHeight() / 2f, mPaintStroke);

                // Edit Mode Toolbar Buttons
                mPaintFill.setColor(0xFF2E7D32); // Green
                canvas.drawRoundRect(mEditDoneRect, dp(6), dp(6), mPaintFill);
                mPaintTextSmall.setColor(0xFFFFFFFF);
                canvas.drawText("SAVE", mEditDoneRect.centerX(), mEditDoneRect.centerY() + dp(4), mPaintTextSmall);

                mPaintFill.setColor(0xFF1565C0); // Blue Presets
                canvas.drawRoundRect(mEditPreset2ThumbRect, dp(6), dp(6), mPaintFill);
                canvas.drawText("2-THUMB", mEditPreset2ThumbRect.centerX(), mEditPreset2ThumbRect.centerY() + dp(4), mPaintTextSmall);

                canvas.drawRoundRect(mEditPreset3ClawRect, dp(6), dp(6), mPaintFill);
                canvas.drawText("3-CLAW", mEditPreset3ClawRect.centerX(), mEditPreset3ClawRect.centerY() + dp(4), mPaintTextSmall);

                canvas.drawRoundRect(mEditPreset4TabletRect, dp(6), dp(6), mPaintFill);
                canvas.drawText("4-TABLET", mEditPreset4TabletRect.centerX(), mEditPreset4TabletRect.centerY() + dp(4), mPaintTextSmall);

                canvas.drawRoundRect(mEditPresetLeftyRect, dp(6), dp(6), mPaintFill);
                canvas.drawText("LEFTY", mEditPresetLeftyRect.centerX(), mEditPresetLeftyRect.centerY() + dp(4), mPaintTextSmall);

                mPaintFill.setColor(0xFFE65100); // Orange Reset
                canvas.drawRoundRect(mEditResetRect, dp(6), dp(6), mPaintFill);
                canvas.drawText("RESET", mEditResetRect.centerX(), mEditResetRect.centerY() + dp(4), mPaintTextSmall);

                mPaintFill.setColor(0xFF424242); // Gray Scale
                canvas.drawRoundRect(mEditScaleMinusRect, dp(6), dp(6), mPaintFill);
                canvas.drawText("SIZE -", mEditScaleMinusRect.centerX(), mEditScaleMinusRect.centerY() + dp(4), mPaintTextSmall);

                canvas.drawRoundRect(mEditScalePlusRect, dp(6), dp(6), mPaintFill);
                canvas.drawText("SIZE +", mEditScalePlusRect.centerX(), mEditScalePlusRect.centerY() + dp(4), mPaintTextSmall);

                mPaintFill.setColor(0xFF37474F); // Slate Gray Opacity
                canvas.drawRoundRect(mEditOpacMinusRect, dp(6), dp(6), mPaintFill);
                canvas.drawText("OPAC -", mEditOpacMinusRect.centerX(), mEditOpacMinusRect.centerY() + dp(4), mPaintTextSmall);

                canvas.drawRoundRect(mEditOpacPlusRect, dp(6), dp(6), mPaintFill);
                canvas.drawText("OPAC +", mEditOpacPlusRect.centerX(), mEditOpacPlusRect.centerY() + dp(4), mPaintTextSmall);

                // Highlight Dragged Element
                if (mDraggingBtnId == 0) {
                    mPaintStroke.setColor(0xFFFFEE58);
                    mPaintStroke.setStrokeWidth(dp(3));
                    canvas.drawCircle(mJoyCenterX, mJoyCenterY, mJoyRadius + dp(6), mPaintStroke);
                    mPaintStroke.setStrokeWidth(dp(2));
                    mPaintText.setColor(0xFFFFEE58);
                    canvas.drawText(String.format(Locale.US, "JOYSTICK (%d, %d)", (int)mJoyCenterX, (int)mJoyCenterY),
                        mJoyCenterX, mJoyCenterY - mJoyRadius - dp(10), mPaintText);
                } else if (mDraggingBtnId > 0) {
                    for (HudButton btn : mButtons) {
                        if (btn.id == mDraggingBtnId) {
                            mPaintStroke.setColor(0xFFFFEE58);
                            mPaintStroke.setStrokeWidth(dp(3));
                            canvas.drawCircle(btn.cx, btn.cy, btn.radius + dp(6), mPaintStroke);
                            mPaintStroke.setStrokeWidth(dp(2));
                            mPaintText.setColor(0xFFFFEE58);
                            canvas.drawText(String.format(Locale.US, "%s (%d, %d)", btn.label, (int)btn.cx, (int)btn.cy),
                                btn.cx, btn.cy - btn.radius - dp(10), mPaintText);
                            break;
                        }
                    }
                }
            }

            // 8. Draw Achievement Banner (Stage 22)
            if (mActiveAchievementBanner != null) {
                long now = System.currentTimeMillis();
                if (now < mAchievementBannerEndTime) {
                    mPaintFill.setColor(0xEE162232);
                    canvas.drawRoundRect(mAchievementBannerRect, dp(10), dp(10), mPaintFill);
                    mPaintStroke.setColor(0xFFFFD54F);
                    mPaintStroke.setStrokeWidth(dp(2));
                    canvas.drawRoundRect(mAchievementBannerRect, dp(10), dp(10), mPaintStroke);

                    mPaintText.setColor(0xFFFFD54F);
                    canvas.drawText("ACHIEVEMENT UNLOCKED!", mAchievementBannerRect.centerX(), mAchievementBannerRect.top + dp(15), mPaintText);
                    mPaintTextSmall.setColor(0xFFFFFFFF);
                    canvas.drawText(mActiveAchievementBanner, mAchievementBannerRect.centerX(), mAchievementBannerRect.top + dp(30), mPaintTextSmall);
                    postInvalidateDelayed(100);
                } else {
                    mActiveAchievementBanner = null;
                }
            }

            // 9. High-Contrast Mobile Objective / Subtitle Card (Stage 26)
            if (mActiveSubtitle != null && mSubtitlesEnabled) {
                long now = System.currentTimeMillis();
                if (now < mSubtitleEndTime) {
                    float subW = Math.min(dp(540), getWidth() * 0.88f);
                    float subH = dp(28);
                    float subX = (getWidth() - subW) / 2f;
                    float subY = getHeight() - dp(74);
                    RectF subRect = new RectF(subX, subY, subX + subW, subY + subH);
                    mPaintFill.setColor(0xDD0E141E);
                    canvas.drawRoundRect(subRect, dp(6), dp(6), mPaintFill);
                    mPaintStroke.setColor(0xAA4FC3F7);
                    mPaintStroke.setStrokeWidth(dp(1.2f));
                    canvas.drawRoundRect(subRect, dp(6), dp(6), mPaintStroke);
                    mPaintTextSmall.setColor(0xFFE1F5FE);
                    canvas.drawText(mActiveSubtitle, subRect.centerX(), subRect.centerY() + dp(4), mPaintTextSmall);
                    postInvalidateDelayed(100);
                } else {
                    mActiveSubtitle = null;
                }
            }

            // Subtle Heartbeat Horror Vignette Breathing & Audio Muffle FX (Stage 26 & Tier 2)
            if (mVignetteEnabled) {
                long now = System.currentTimeMillis();
                float sinVal = (float)Math.sin(now * 0.0035);
                float pulse = 0.22f + 0.08f * sinVal;
                try { nativeSetVignette(pulse); } catch (Throwable ignored) {}

                // Dynamic Audio Muffling (acoustic tunnel vision in horror / low-health tension)
                float muffle = Math.max(0.0f, (pulse - 0.20f) * 3.5f);
                try { nativeSetAudioMuffle(muffle); } catch (Throwable ignored) {}

                // Rhythmic Double-Thump Heartbeat Haptics (Tier 2)
                if (mHeartbeatHapticsEnabled && mHapticEnabled) {
                    long cycle = now % 920;
                    if (cycle < 45 && (now - mLastHeartbeatHapticTime > 300)) {
                        mLastHeartbeatHapticTime = now;
                        vibrateHaptic(26, 175);
                    } else if (cycle >= 140 && cycle < 185 && (now - mLastHeartbeatHapticTime > 100 && now - mLastHeartbeatHapticTime < 300)) {
                        mLastHeartbeatHapticTime = now;
                        vibrateHaptic(16, 115);
                    }
                }
            } else {
                try { nativeSetAudioMuffle(0.0f); } catch (Throwable ignored) {}
            }
        }

        private void showHostWizardDialog() {
            post(new Runnable() {
                @Override public void run() {
                    LinearLayout layout = new LinearLayout(getContext());
                    layout.setOrientation(LinearLayout.VERTICAL);
                    layout.setPadding(dpi(16), dpi(12), dpi(16), dpi(12));
                    layout.setBackgroundColor(0xFF1E242B);

                    TextView title = new TextView(getContext());
                    title.setText("[HOST] MULTIPLAYER & SKIRMISH MATCH");
                    title.setTextColor(0xFF00E5FF);
                    title.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 14);
                    title.setTypeface(android.graphics.Typeface.DEFAULT_BOLD);
                    layout.addView(title);

                    final String[] maps = {
                        "INFarm.dz - Invasion: Farmhouse Horde",
                        "INGarage.dz - Invasion: Garage",
                        "INHouse.dz - Invasion: House",
                        "INStation.dz - Invasion: Police Station",
                        "INCemeteryPC.dz - Invasion: Cemetery",
                        "INRingBigPC.dz - Invasion: Arena",
                        "DMHospital.dz - Deathmatch: Hospital",
                        "DMTheater.dz - Deathmatch: Theater",
                        "DMDowntown.dz - Deathmatch: Downtown",
                        "DMWarehouse.dz - Deathmatch: Warehouse",
                        "CTFRooftops.dz - CTF: Rooftops",
                        "CTFSewers.dz - CTF: Sewers",
                        "CTFStation.dz - CTF: Police Station",
                        "CH01.dz - Campaign Farmhouse (Co-op)"
                    };
                    final String[] mapFiles = {
                        "INFarm.dz", "INGarage.dz", "INHouse.dz", "INStation.dz", "INCemeteryPC.dz", "INRingBigPC.dz",
                        "DMHospital.dz", "DMTheater.dz", "DMDowntown.dz", "DMWarehouse.dz", "CTFRooftops.dz", "CTFSewers.dz", "CTFStation.dz", "CH01.dz"
                    };

                    TextView mapLabel = new TextView(getContext());
                    mapLabel.setText("Select Level / Map:");
                    mapLabel.setTextColor(0xFFECEFF1);
                    mapLabel.setPadding(0, dpi(6), 0, dpi(2));
                    layout.addView(mapLabel);

                    final Spinner mapSpinner = new Spinner(getContext());
                    ArrayAdapter<String> mapAdapter = new ArrayAdapter<String>(getContext(), android.R.layout.simple_spinner_dropdown_item, maps);
                    mapSpinner.setAdapter(mapAdapter);
                    layout.addView(mapSpinner);

                    TextView modeLabel = new TextView(getContext());
                    modeLabel.setText("Game Mode:");
                    modeLabel.setTextColor(0xFFECEFF1);
                    modeLabel.setPadding(0, dpi(6), 0, dpi(2));
                    layout.addView(modeLabel);

                    final String[] modes = {
                        "Invasion (Co-op Zombie Survival)",
                        "Deathmatch (Free-for-All)",
                        "Team Deathmatch",
                        "Capture The Flag"
                    };
                    final String[] modeClasses = {
                        "DOTZGame.DOTZInvasion",
                        "DOTZGame.DOTZDeathMatch",
                        "DOTZGame.DOTZDeathMatch",
                        "DOTZGame.DOTZCaptureTheFlag"
                    };
                    final Spinner modeSpinner = new Spinner(getContext());
                    ArrayAdapter<String> modeAdapter = new ArrayAdapter<String>(getContext(), android.R.layout.simple_spinner_dropdown_item, modes);
                    modeSpinner.setAdapter(modeAdapter);
                    layout.addView(modeSpinner);

                    TextView botLabel = new TextView(getContext());
                    botLabel.setText("AI Bots / Skirmish Count:");
                    botLabel.setTextColor(0xFFECEFF1);
                    botLabel.setPadding(0, dpi(6), 0, dpi(2));
                    layout.addView(botLabel);

                    final String[] bots = {
                        "0 Bots (Solo / Real Players Only)",
                        "2 Bots (Light Skirmish)",
                        "4 Bots (Balanced Skirmish)",
                        "8 Bots (Full Arena Chaos)"
                    };
                    final int[] botCounts = { 0, 2, 4, 8 };
                    final Spinner botSpinner = new Spinner(getContext());
                    ArrayAdapter<String> botAdapter = new ArrayAdapter<String>(getContext(), android.R.layout.simple_spinner_dropdown_item, bots);
                    botSpinner.setAdapter(botAdapter);
                    layout.addView(botSpinner);

                    new AlertDialog.Builder(getContext(), android.R.style.Theme_DeviceDefault_Dialog_Alert)
                        .setView(layout)
                        .setPositiveButton("LAUNCH HOST", new DialogInterface.OnClickListener() {
                            @Override public void onClick(DialogInterface d, int which) {
                                int mIdx = mapSpinner.getSelectedItemPosition();
                                int gIdx = modeSpinner.getSelectedItemPosition();
                                int bIdx = botSpinner.getSelectedItemPosition();
                                String map = (mIdx >= 0 && mIdx < mapFiles.length) ? mapFiles[mIdx] : "INFarm.dz";
                                String game = (gIdx >= 0 && gIdx < modeClasses.length) ? modeClasses[gIdx] : "DOTZGame.DOTZInvasion";
                                int numBots = (bIdx >= 0 && bIdx < botCounts.length) ? botCounts[bIdx] : 0;
                                String cmd = "open " + map + "?Game=" + game;
                                if (numBots > 0) cmd += "?NumBots=" + numBots;
                                cmd += "?Listen";
                                nativeExecConsole(cmd);
                                Toast.makeText(getContext(), "Starting host: " + map + " (" + numBots + " bots)...", Toast.LENGTH_SHORT).show();
                            }
                        })
                        .setNegativeButton("CANCEL", null)
                        .show();
                }
            });
        }

        private void showLanServerBrowser() {
            post(new Runnable() {
                @Override
                public void run() {
                    final LinearLayout root = new LinearLayout(getContext());
                    root.setOrientation(LinearLayout.VERTICAL);
                    root.setPadding(dpi(16), dpi(12), dpi(16), dpi(12));
                    root.setBackgroundColor(0xFF141822);

                    TextView title = new TextView(getContext());
                    title.setText("[SERVERS] MULTIPLAYER & ONLINE BROWSER");
                    title.setTextColor(0xFF4FC3F7);
                    title.setTypeface(android.graphics.Typeface.DEFAULT_BOLD);
                    title.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 16);
                    title.setPadding(0, 0, 0, dpi(2));
                    root.addView(title);

                    final String myIp = LauncherActivity.getLocalIpAddress();
                    TextView ipInfo = new TextView(getContext());
                    ipInfo.setText("Device Local IP: " + myIp + ":7777");
                    ipInfo.setTextColor(0xFF81C784);
                    ipInfo.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 12);
                    ipInfo.setPadding(0, 0, 0, dpi(4));
                    root.addView(ipInfo);

                    // Quick Actions Row (Stage 24)
                    LinearLayout quickRow = new LinearLayout(getContext());
                    quickRow.setOrientation(LinearLayout.HORIZONTAL);
                    quickRow.setPadding(0, dpi(2), 0, dpi(6));

                    Button hostInvasionBtn = new Button(getContext());
                    hostInvasionBtn.setText("HOST INVASION");
                    hostInvasionBtn.setTextColor(0xFFFFFFFF);
                    hostInvasionBtn.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 10);
                    hostInvasionBtn.setBackgroundColor(0xFFC2185B);
                    hostInvasionBtn.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
                    hostInvasionBtn.setOnClickListener(new OnClickListener() {
                        @Override public void onClick(View v) {
                            nativeExecConsole("open INFarm.dz?Game=DOTZGame.DOTZInvasion?Listen");
                            Toast.makeText(getContext(), "Starting Co-op Invasion Host on port 7777...", Toast.LENGTH_SHORT).show();
                        }
                    });
                    quickRow.addView(hostInvasionBtn);

                    final AlertDialog[] dialogHolder = new AlertDialog[1];

                    Button joinHotspotBtn = new Button(getContext());
                    joinHotspotBtn.setText("JOIN HOTSPOT");
                    joinHotspotBtn.setTextColor(0xFFFFFFFF);
                    joinHotspotBtn.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 10);
                    joinHotspotBtn.setBackgroundColor(0xFF00796B);
                    LinearLayout.LayoutParams jhlp = new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f);
                    jhlp.setMargins(dpi(4), 0, 0, 0);
                    joinHotspotBtn.setLayoutParams(jhlp);
                    joinHotspotBtn.setOnClickListener(new OnClickListener() {
                        @Override public void onClick(View v) {
                            connectWithValidation("192.168.43.1:7777", dialogHolder[0]);
                        }
                    });
                    quickRow.addView(joinHotspotBtn);

                    Button hostWizardBtn = new Button(getContext());
                    hostWizardBtn.setText("HOST WIZARD");
                    hostWizardBtn.setTextColor(0xFFFFFFFF);
                    hostWizardBtn.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 10);
                    hostWizardBtn.setBackgroundColor(0xFF512DA8);
                    LinearLayout.LayoutParams hwlp = new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f);
                    hwlp.setMargins(dpi(4), 0, 0, 0);
                    hostWizardBtn.setLayoutParams(hwlp);
                    hostWizardBtn.setOnClickListener(new OnClickListener() {
                        @Override public void onClick(View v) {
                            if (dialogHolder[0] != null) dialogHolder[0].dismiss();
                            showHostWizardDialog();
                        }
                    });
                    quickRow.addView(hostWizardBtn);
                    root.addView(quickRow);

                    final TextView statusText = new TextView(getContext());
                    statusText.setText("Broadcasting UDP discovery beacon (ports 7777, 7778)...");
                    statusText.setTextColor(0xFF88AAFF);
                    statusText.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 12);
                    statusText.setPadding(0, 0, 0, dpi(6));
                    root.addView(statusText);

                    final LinearLayout listLayout = new LinearLayout(getContext());
                    listLayout.setOrientation(LinearLayout.VERTICAL);
                    ScrollView sv = new ScrollView(getContext());
                    sv.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, dpi(120)));
                    sv.addView(listLayout);
                    root.addView(sv);

                    // Direct Connect row
                    LinearLayout directBox = new LinearLayout(getContext());
                    directBox.setOrientation(LinearLayout.HORIZONTAL);
                    directBox.setGravity(Gravity.CENTER_VERTICAL);
                    directBox.setPadding(0, dpi(6), 0, dpi(4));

                    final EditText ipInput = new EditText(getContext());
                    ipInput.setHint("192.168.1.100:7777");
                    ipInput.setText(myIp.substring(0, Math.max(0, myIp.lastIndexOf('.') + 1)));
                    ipInput.setTextColor(0xFFFFFFFF);
                    ipInput.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 13);
                    ipInput.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
                    directBox.addView(ipInput);

                    Button directBtn = new Button(getContext());
                    directBtn.setText("CONNECT");
                    directBtn.setTextColor(0xFFFFFFFF);
                    directBtn.setBackgroundColor(0xFF2E7D32);
                    directBox.addView(directBtn);
                    root.addView(directBox);

                    // Saved Bookmarks section (Stage 22/23)
                    LinearLayout bmkHeader = new LinearLayout(getContext());
                    bmkHeader.setOrientation(LinearLayout.HORIZONTAL);
                    bmkHeader.setGravity(Gravity.CENTER_VERTICAL);
                    bmkHeader.setPadding(0, dpi(6), 0, dpi(2));

                    TextView bmkTitle = new TextView(getContext());
                    bmkTitle.setText("SAVED ONLINE BOOKMARKS:");
                    bmkTitle.setTextColor(0xFFFFCA28);
                    bmkTitle.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 12);
                    bmkTitle.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
                    bmkHeader.addView(bmkTitle);

                    Button addBmkBtn = new Button(getContext());
                    addBmkBtn.setText("+ BOOKMARK");
                    addBmkBtn.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 10);
                    addBmkBtn.setTextColor(0xFFFFFFFF);
                    addBmkBtn.setBackgroundColor(0xFF00796B);
                    bmkHeader.addView(addBmkBtn);
                    root.addView(bmkHeader);

                    final LinearLayout bmkList = new LinearLayout(getContext());
                    bmkList.setOrientation(LinearLayout.VERTICAL);
                    ScrollView bmkSv = new ScrollView(getContext());
                    bmkSv.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, dpi(120)));
                    bmkSv.addView(bmkList);
                    root.addView(bmkSv);

                    final Runnable[] refreshBookmarks = new Runnable[1];
                    refreshBookmarks[0] = new Runnable() {
                        @Override
                        public void run() {
                            bmkList.removeAllViews();
                            SharedPreferences p = getContext().getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE);
                            String raw = LauncherActivity.getCleanServerBookmarks(p);
                            String[] entries = raw.split(";");
                            for (final String e : entries) {
                                if (e.trim().isEmpty()) continue;
                                final String[] parts = e.split("\\|");
                                final String name = parts.length > 0 ? parts[0] : "Server";
                                final String addr = parts.length > 1 ? parts[1] : e;

                                LinearLayout bRow = new LinearLayout(getContext());
                                bRow.setOrientation(LinearLayout.HORIZONTAL);
                                bRow.setGravity(Gravity.CENTER_VERTICAL);
                                bRow.setPadding(0, dpi(2), 0, dpi(2));

                                TextView bLabel = new TextView(getContext());
                                bLabel.setText("[BMK] " + name + " (" + addr + ")");
                                bLabel.setTextColor(0xFFB0BEC5);
                                bLabel.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 11);
                                bLabel.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
                                bRow.addView(bLabel);

                                final TextView pingTv = new TextView(getContext());
                                pingTv.setText("...");
                                pingTv.setTextColor(0xFF888888);
                                pingTv.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 10);
                                pingTv.setPadding(dpi(4), 0, dpi(4), 0);
                                bRow.addView(pingTv);

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
                                        final long lat = System.currentTimeMillis() - start;
                                        final boolean live = ok;
                                        post(new Runnable() {
                                            @Override public void run() {
                                                if (live) {
                                                    pingTv.setText("[OK] " + lat + "ms");
                                                    pingTv.setTextColor(0xFF69F0AE);
                                                } else {
                                                    pingTv.setText("[IDLE]");
                                                    pingTv.setTextColor(0xFF9E9E9E);
                                                }
                                            }
                                        });
                                    }
                                }).start();

                                Button joinBmk = new Button(getContext());
                                joinBmk.setText("JOIN");
                                joinBmk.setTextColor(0xFFFFFFFF);
                                joinBmk.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 10);
                                joinBmk.setBackgroundColor(0xFF1565C0);
                                joinBmk.setOnClickListener(new OnClickListener() {
                                    @Override public void onClick(View v) {
                                        connectWithValidation(addr, dialogHolder[0]);
                                    }
                                });
                                bRow.addView(joinBmk);

                                Button delBmk = new Button(getContext());
                                delBmk.setText("X");
                                delBmk.setTextColor(0xFFE57373);
                                delBmk.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 10);
                                delBmk.setBackgroundColor(0xFF37474F);
                                LinearLayout.LayoutParams dlp = new LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
                                dlp.setMargins(dpi(4), 0, 0, 0);
                                delBmk.setLayoutParams(dlp);
                                delBmk.setOnClickListener(new OnClickListener() {
                                    @Override public void onClick(View v) {
                                        SharedPreferences p = getContext().getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE);
                                        String cur = p.getString("lotd_server_bookmarks", "");
                                        String[] curEntries = cur.split(";");
                                        StringBuilder sb = new StringBuilder();
                                        for (String ce : curEntries) {
                                            if (ce.trim().isEmpty() || ce.equals(e)) continue;
                                            if (sb.length() > 0) sb.append(";");
                                            sb.append(ce);
                                        }
                                        p.edit().putString("lotd_server_bookmarks", sb.toString()).apply();
                                        if (refreshBookmarks[0] != null) refreshBookmarks[0].run();
                                    }
                                });
                                bRow.addView(delBmk);

                                bmkList.addView(bRow);
                            }

                            new Thread(new Runnable() {
                                @Override public void run() {
                                    final List<String[]> masterServers = new ArrayList<String[]>();
                                    try {
                                        URL u = new URL("https://master.333networks.com/json/lotd");
                                        HttpURLConnection conn = (HttpURLConnection) u.openConnection();
                                        conn.setConnectTimeout(3000);
                                        conn.setReadTimeout(3000);
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
                                    if (!masterServers.isEmpty()) {
                                        post(new Runnable() {
                                            @Override public void run() {
                                                for (final String[] ms : masterServers) {
                                                    LinearLayout mRow = new LinearLayout(getContext());
                                                    mRow.setOrientation(LinearLayout.HORIZONTAL);
                                                    mRow.setGravity(Gravity.CENTER_VERTICAL);
                                                    mRow.setPadding(0, dpi(2), 0, dpi(2));

                                                    TextView mLabel = new TextView(getContext());
                                                    mLabel.setText("[LAN] " + ms[0] + " (" + ms[1] + ")");
                                                    mLabel.setTextColor(0xFF80D8FF);
                                                    mLabel.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 11);
                                                    mLabel.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
                                                    mRow.addView(mLabel);

                                                    Button mJoin = new Button(getContext());
                                                    mJoin.setText("JOIN");
                                                    mJoin.setTextColor(0xFFFFFFFF);
                                                    mJoin.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 10);
                                                    mJoin.setBackgroundColor(0xFF0277BD);
                                                    mJoin.setOnClickListener(new OnClickListener() {
                                                        @Override public void onClick(View v) {
                                                            connectWithValidation(ms[1], dialogHolder[0]);
                                                        }
                                                    });
                                                    mRow.addView(mJoin);
                                                    bmkList.addView(mRow, 0);
                                                }
                                            }
                                        });
                                    }
                                }
                            }).start();
                        }
                    };
                    refreshBookmarks[0].run();

                    addBmkBtn.setOnClickListener(new OnClickListener() {
                        @Override public void onClick(View v) {
                            LinearLayout abRoot = new LinearLayout(getContext());
                            abRoot.setOrientation(LinearLayout.VERTICAL);
                            abRoot.setPadding(dpi(16), dpi(10), dpi(16), dpi(10));

                            final EditText nameEt = new EditText(getContext());
                            nameEt.setHint("Server Name (e.g. Squad Server)");
                            abRoot.addView(nameEt);

                            final EditText addrEt = new EditText(getContext());
                            addrEt.setHint("IP:Port (e.g. 192.168.1.50:7777)");
                            abRoot.addView(addrEt);

                            new AlertDialog.Builder(getContext(), android.R.style.Theme_DeviceDefault_Dialog_Alert)
                                .setTitle("Add Custom Server Bookmark")
                                .setView(abRoot)
                                .setPositiveButton("ADD", new DialogInterface.OnClickListener() {
                                    @Override public void onClick(DialogInterface d, int which) {
                                        String n = nameEt.getText().toString().trim();
                                        String a = addrEt.getText().toString().trim();
                                        if (n.isEmpty()) n = "Server";
                                        if (!a.isEmpty()) {
                                            SharedPreferences p = getContext().getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE);
                                            String cur = LauncherActivity.getCleanServerBookmarks(p);
                                            cur += ";" + n + "|" + a;
                                            p.edit().putString("lotd_server_bookmarks", cur).apply();
                                            if (refreshBookmarks[0] != null) refreshBookmarks[0].run();
                                        }
                                    }
                                })
                                .setNegativeButton("CANCEL", null)
                                .show();
                        }
                    });

                    final AlertDialog dialog = new AlertDialog.Builder(getContext(), android.R.style.Theme_DeviceDefault_Dialog_Alert)
                        .setView(root)
                        .setPositiveButton("HOST WIZARD / BOTS", new DialogInterface.OnClickListener() {
                            @Override public void onClick(DialogInterface d, int which) {
                                showHostWizardDialog();
                            }
                        })
                        .setNeutralButton("RESCAN", null)
                        .setNegativeButton("CLOSE", null)
                        .create();
                    dialogHolder[0] = dialog;

                    directBtn.setOnClickListener(new OnClickListener() {
                        @Override public void onClick(View v) {
                            String target = ipInput.getText().toString().trim();
                            if (!target.isEmpty()) {
                                connectWithValidation(target, dialogHolder[0]);
                            }
                        }
                    });

                    final Runnable scanTask = new Runnable() {
                        @Override public void run() {
                            listLayout.removeAllViews();
                            statusText.setText("Scanning Wi-Fi & Hotspot network (ports 7777, 7778, 8777)...");
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
                                            } catch (Throwable e) {
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

                                    post(new Runnable() {
                                        @Override public void run() {
                                            if (found.isEmpty()) {
                                                statusText.setText("No active UE2 servers detected on local subnet.");
                                                TextView empty = new TextView(getContext());
                                                empty.setText("- No local matches detected.\n- Use 'HOST INVASION' above to host a co-op match.\n- Friends can join you with 1 tap!");
                                                empty.setTextColor(0xFF888888);
                                                empty.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 12);
                                                listLayout.addView(empty);
                                            } else {
                                                statusText.setText("Found " + found.size() + " server(s) on LAN:");
                                                for (final String s : found) {
                                                    Button sBtn = new Button(getContext());
                                                    sBtn.setText(s);
                                                    sBtn.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 11);
                                                    sBtn.setTextColor(0xFF81C784);
                                                    sBtn.setBackgroundColor(0xFF1E2838);
                                                    sBtn.setOnClickListener(new OnClickListener() {
                                                        @Override public void onClick(View v) {
                                                            String targetIp = s.split(" \\| ")[0];
                                                            connectWithValidation(targetIp, dialogHolder[0]);
                                                        }
                                                    });
                                                    listLayout.addView(sBtn);
                                                }
                                            }
                                        }
                                    });
                                }
                            }).start();
                        }
                    };

                    dialog.setOnShowListener(new DialogInterface.OnShowListener() {
                        @Override public void onShow(DialogInterface di) {
                            scanTask.run();
                            Button rescanBtn = dialog.getButton(AlertDialog.BUTTON_NEUTRAL);
                            if (rescanBtn != null) {
                                rescanBtn.setOnClickListener(new View.OnClickListener() {
                                    @Override public void onClick(View v) {
                                        scanTask.run();
                                    }
                                });
                            }
                        }
                    });

                    dialog.show();
                }
            });
        }


        public void showInGameSettingsDialog() {
            post(new Runnable() {
                @Override
                public void run() {
                    try {
                        nativeTouchKey(0x1B, true);
                        postDelayed(new Runnable() {
                            @Override public void run() { try { nativeTouchKey(0x1B, false); } catch (Throwable ignored) {} }
                        }, 50);
                    } catch (Throwable ignored) {}
                }
            });
        }

        public void displaySubtitle(String text, int durationMs) {
            showSubtitle(text, durationMs);
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
                    post(new Runnable() {
                        @Override public void run() {
                            if (reachable) {
                                nativeExecConsole("open " + target);
                                displaySubtitle("Connecting to " + target, 3000);
                                if (dlg != null) dlg.dismiss();
                            } else {
                                new AlertDialog.Builder(getContext(), android.R.style.Theme_DeviceDefault_Dialog_Alert)
                                    .setTitle("Host Server Standby / Offline")
                                    .setMessage("No active match response from " + target + ".\n\nQuick Checklist:\n1. Ensure the Host has started the match ('HOST INVASION').\n2. Both devices must be on the same Wi-Fi or Phone Hotspot.\n3. If joining a phone hotspot, use 192.168.43.1:7777.\n\nAttempt connection anyway?")
                                    .setPositiveButton("CONNECT ANYWAY", new DialogInterface.OnClickListener() {
                                        @Override public void onClick(DialogInterface d, int which) {
                                            nativeExecConsole("open " + target);
                                            displaySubtitle("Connecting to " + target, 3000);
                                            if (dlg != null) dlg.dismiss();
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

        private void showCustomMapsAndModsDialog() {
            post(new Runnable() {
                @Override
                public void run() {
                    final LinearLayout root = new LinearLayout(getContext());
                    root.setOrientation(LinearLayout.VERTICAL);
                    root.setPadding(dpi(16), dpi(12), dpi(16), dpi(12));
                    root.setBackgroundColor(0xFF141822);

                    TextView title = new TextView(getContext());
                    title.setText("[MODS] IN-GAME MAP & MOD MANAGER");
                    title.setTextColor(0xFFFFD54F);
                    title.setTypeface(android.graphics.Typeface.DEFAULT_BOLD);
                    title.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 15);
                    title.setPadding(0, 0, 0, dpi(4));
                    root.addView(title);

                    Button installZipBtn = new Button(getContext());
                    installZipBtn.setText("INSTALL MOD / MAP (.ZIP FROM DOWNLOADS)");
                    installZipBtn.setTextColor(0xFFFFFFFF);
                    installZipBtn.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 11);
                    installZipBtn.setBackgroundColor(0xFF6A1B9A);
                    installZipBtn.setPadding(dpi(8), dpi(6), dpi(8), dpi(6));
                    root.addView(installZipBtn);

                    TextView mapsHeader = new TextView(getContext());
                    mapsHeader.setText("INSTALLED PLAYABLE MAPS (CUSTOM & HORDE):");
                    mapsHeader.setTextColor(0xFF81D4FA);
                    mapsHeader.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 12);
                    mapsHeader.setPadding(0, dpi(8), 0, dpi(4));
                    root.addView(mapsHeader);

                    final LinearLayout mapList = new LinearLayout(getContext());
                    mapList.setOrientation(LinearLayout.VERTICAL);
                    ScrollView sv = new ScrollView(getContext());
                    sv.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, dpi(180)));
                    sv.addView(mapList);
                    root.addView(sv);

                    final AlertDialog[] dialogHolder = new AlertDialog[1];

                    final Runnable refreshMapList = new Runnable() {
                        @Override public void run() {
                            mapList.removeAllViews();
                            String[] mapDirs = {
                                "/storage/emulated/0/LandOfTheDead/Maps",
                                "/sdcard/LandOfTheDead/Maps",
                                "/storage/emulated/0/Android/data/org.libsdl.app/files/LandOfTheDead/Maps",
                                "/sdcard/Android/data/org.libsdl.app/files/LandOfTheDead/Maps"
                            };
                            final List<File> mapFiles = new ArrayList<File>();
                            for (String md : mapDirs) {
                                File d = new File(md);
                                if (d.exists() && d.isDirectory()) {
                                    File[] files = d.listFiles();
                                    if (files != null) {
                                        for (File f : files) {
                                            String n = f.getName().toLowerCase(Locale.US);
                                            if (n.endsWith(".dz") || n.endsWith(".unr")) {
                                                if (!mapFiles.contains(f)) mapFiles.add(f);
                                            }
                                        }
                                    }
                                }
                            }

                            if (mapFiles.isEmpty()) {
                                TextView emptyTv = new TextView(getContext());
                                emptyTv.setText("- No custom maps detected yet in LandOfTheDead/Maps/.\n- Tap '1-TAP INSTALL' above to extract any map .zip from Downloads!");
                                emptyTv.setTextColor(0xFF888888);
                                emptyTv.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 12);
                                mapList.addView(emptyTv);
                            } else {
                                for (final File mf : mapFiles) {
                                    LinearLayout row = new LinearLayout(getContext());
                                    row.setOrientation(LinearLayout.HORIZONTAL);
                                    row.setGravity(Gravity.CENTER_VERTICAL);
                                    row.setPadding(0, dpi(3), 0, dpi(3));

                                    TextView mLabel = new TextView(getContext());
                                    long szMb = mf.length() / (1024 * 1024);
                                    long szKb = (mf.length() / 1024) % 1024;
                                    mLabel.setText("[MAP] " + mf.getName() + " (" + (szMb > 0 ? (szMb + "MB") : (szKb + "KB")) + ")");
                                    mLabel.setTextColor(0xFFE0E0E0);
                                    mLabel.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 11);
                                    mLabel.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
                                    row.addView(mLabel);

                                    Button warpBtn = new Button(getContext());
                                    warpBtn.setText("WARP");
                                    warpBtn.setTextColor(0xFFFFFFFF);
                                    warpBtn.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 10);
                                    warpBtn.setBackgroundColor(0xFF2E7D32);
                                    warpBtn.setOnClickListener(new OnClickListener() {
                                        @Override public void onClick(View v) {
                                            String mapCode = mf.getName();
                                            if (mapCode.toLowerCase(Locale.US).endsWith(".dz")) {
                                                mapCode = mapCode.substring(0, mapCode.length() - 3);
                                            }
                                            nativeExecConsole("open " + mapCode);
                                            displaySubtitle("Warping to Custom Map: " + mf.getName(), 3000);
                                            if (dialogHolder[0] != null) dialogHolder[0].dismiss();
                                        }
                                    });
                                    row.addView(warpBtn);
                                    mapList.addView(row);
                                }
                            }
                        }
                    };
                    refreshMapList.run();

                    installZipBtn.setOnClickListener(new OnClickListener() {
                        @Override public void onClick(View v) {
                            showInGameModInstaller(refreshMapList);
                        }
                    });

                    dialogHolder[0] = new AlertDialog.Builder(getContext(), android.R.style.Theme_DeviceDefault_Dialog_Alert)
                        .setView(root)
                        .setNegativeButton("CLOSE", null)
                        .create();
                    dialogHolder[0].show();
                }
            });
        }

        private void showInGameModInstaller(final Runnable onDone) {
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
                new AlertDialog.Builder(getContext(), android.R.style.Theme_DeviceDefault_Dialog_Alert)
                    .setTitle("Mod & Map Installer")
                    .setMessage("No .zip or .dz mod files found in your device's Download folder.\n\nKeep any custom LOTD map or mod .zip in 'Download' and tap this button again!")
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

            new AlertDialog.Builder(getContext(), android.R.style.Theme_DeviceDefault_Dialog_Alert)
                .setTitle("Select Mod / Map Archive to Install")
                .setItems(items, new DialogInterface.OnClickListener() {
                    @Override public void onClick(DialogInterface dialog, int which) {
                        final File chosen = archives.get(which);
                        new Thread(new Runnable() {
                            @Override public void run() {
                                File destBase = new File("/storage/emulated/0/LandOfTheDead");
                                if (!destBase.exists()) destBase = new File("/sdcard/LandOfTheDead");
                                int extracted = 0;
                                String error = null;
                                try {
                                    String lower = chosen.getName().toLowerCase(Locale.US);
                                    if (lower.endsWith(".dz") || lower.endsWith(".unr")) {
                                        File mapsDir = new File(destBase, "Maps");
                                        mapsDir.mkdirs();
                                        File dest = new File(mapsDir, chosen.getName());
                                        copyFile(chosen, dest);
                                        extracted = 1;
                                    } else if (lower.endsWith(".zip")) {
                                        ZipInputStream zis = new ZipInputStream(new FileInputStream(chosen));
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
                                post(new Runnable() {
                                    @Override public void run() {
                                        if (err != null) {
                                            Toast.makeText(getContext(), "Installation Failed: " + err, Toast.LENGTH_LONG).show();
                                        } else {
                                            Toast.makeText(getContext(), "Successfully installed " + count + " file(s)!", Toast.LENGTH_LONG).show();
                                            displaySubtitle("Mod/Map installed successfully (" + count + " files)", 3500);
                                            if (onDone != null) onDone.run();
                                        }
                                    }
                                });
                            }
                        }).start();
                    }
                })
                .setNegativeButton("CANCEL", null)
                .show();
        }

        private void copyFile(File src, File dst) throws IOException {
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

        public void showAchievementBanner(String title, String desc) {
            mActiveAchievementBanner = "ACHIEVEMENT: " + title + " - " + desc;
            mAchievementBannerEndTime = System.currentTimeMillis() + 4500;
            postInvalidate();
        }

        public void showConsoleTerminal() {
            post(new Runnable() {
                @Override
                public void run() {
                    final LinearLayout root = new LinearLayout(getContext());
                    root.setOrientation(LinearLayout.VERTICAL);
                    root.setPadding(dpi(16), dpi(12), dpi(16), dpi(12));
                    root.setBackgroundColor(0xFF10141C);

                    TextView title = new TextView(getContext());
                    title.setText("UNREAL ENGINE 2 CONSOLE TERMINAL");
                    title.setTextColor(0xFF4FC3F7);
                    title.setTypeface(android.graphics.Typeface.DEFAULT_BOLD);
                    title.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 15);
                    title.setPadding(0, 0, 0, dpi(6));
                    root.addView(title);

                    HorizontalScrollView chipScroll = new HorizontalScrollView(getContext());
                    chipScroll.setHorizontalScrollBarEnabled(false);
                    LinearLayout chipLayout = new LinearLayout(getContext());
                    chipLayout.setOrientation(LinearLayout.HORIZONTAL);
                    chipLayout.setPadding(0, dpi(2), 0, dpi(6));

                    final String[] chips = {
                        "god", "allweapons", "allammo", "fly", "walk (land)", "ghost",
                        "fists", "killall zombiebase", "fov 100", "fov 110", "slomo 1.0",
                        "slomo 0.5", "stat fps", "behindview 1", "behindview 0",
                        "open CH01", "open CH02", "open CH05"
                    };

                    final EditText cmdInput = new EditText(getContext());
                    cmdInput.setHint("Enter command (e.g. god, fov 105, open <IP>)");
                    cmdInput.setHintTextColor(0xFF778899);
                    cmdInput.setTextColor(0xFFFFFFFF);
                    cmdInput.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 13);
                    cmdInput.setBackgroundColor(0xFF1E2430);
                    cmdInput.setPadding(dpi(10), dpi(8), dpi(10), dpi(8));
                    cmdInput.setInputType(android.text.InputType.TYPE_CLASS_TEXT |
                                          android.text.InputType.TYPE_TEXT_VARIATION_VISIBLE_PASSWORD |
                                          android.text.InputType.TYPE_TEXT_FLAG_NO_SUGGESTIONS);
                    cmdInput.setImeOptions(android.view.inputmethod.EditorInfo.IME_FLAG_NO_EXTRACT_UI |
                                           android.view.inputmethod.EditorInfo.IME_ACTION_DONE);

                    for (final String chip : chips) {
                        Button cb = new Button(getContext());
                        cb.setText(chip);
                        cb.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 11);
                        cb.setTextColor(0xFFFFCA28);
                        cb.setBackgroundColor(0xFF263238);
                        LinearLayout.LayoutParams cp = new LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, dpi(32));
                        cp.setMargins(0, 0, dpi(6), 0);
                        cb.setLayoutParams(cp);
                        cb.setOnClickListener(new OnClickListener() {
                            @Override public void onClick(View v) {
                                String toSet = chip.equals("walk (land)") ? "walk" : chip;
                                cmdInput.setText(toSet);
                                cmdInput.setSelection(toSet.length());
                            }
                        });
                        chipLayout.addView(cb);
                    }
                    chipScroll.addView(chipLayout);
                    root.addView(chipScroll);

                    LinearLayout runRow = new LinearLayout(getContext());
                    runRow.setOrientation(LinearLayout.HORIZONTAL);
                    runRow.setGravity(Gravity.CENTER_VERTICAL);
                    runRow.setPadding(0, dpi(6), 0, dpi(6));

                    cmdInput.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
                    runRow.addView(cmdInput);

                    Button runBtn = new Button(getContext());
                    runBtn.setText("RUN");
                    runBtn.setTextColor(0xFFFFFFFF);
                    runBtn.setBackgroundColor(0xFF00897B);
                    runRow.addView(runBtn);
                    root.addView(runRow);

                    final TextView logView = new TextView(getContext());
                    logView.setText("Ready for GExec input. Tap a chip or type a command above.");
                    logView.setTextColor(0xFF81C784);
                    logView.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 11);
                    logView.setPadding(dpi(6), dpi(6), dpi(6), dpi(6));
                    logView.setBackgroundColor(0xFF0A0D12);
                    ScrollView logScroll = new ScrollView(getContext());
                    logScroll.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, dpi(70)));
                    logScroll.addView(logView);
                    root.addView(logScroll);

                    final AlertDialog dialog = new AlertDialog.Builder(getContext(), android.R.style.Theme_DeviceDefault_Dialog_Alert)
                        .setView(root)
                        .setNegativeButton("CLOSE", null)
                        .create();

                    cmdInput.setOnEditorActionListener(new TextView.OnEditorActionListener() {
                        @Override
                        public boolean onEditorAction(TextView v, int actionId, KeyEvent event) {
                            runBtn.performClick();
                            return true;
                        }
                    });

                    runBtn.setOnClickListener(new OnClickListener() {
                        @Override public void onClick(View v) {
                            String cmd = cmdInput.getText().toString().trim();
                            if (!cmd.isEmpty()) {
                                nativeExecConsole(cmd);
                                logView.append("\n> " + cmd + " [OK]");
                                logScroll.post(new Runnable() {
                                    @Override public void run() {
                                        logScroll.fullScroll(ScrollView.FOCUS_DOWN);
                                    }
                                });
                                cmdInput.setText("");
                                Toast.makeText(getContext(), "Executed: " + cmd, Toast.LENGTH_SHORT).show();
                                unlockAchievement("console_hacker", "Console Hacker", "Executed custom GExec commands.");
                            }
                        }
                    });

                    dialog.show();
                }
            });
        }

        private void showAchievementsDialog() {
            post(new Runnable() {
                @Override
                public void run() {
                    final LinearLayout root = new LinearLayout(getContext());
                    root.setOrientation(LinearLayout.VERTICAL);
                    root.setPadding(dpi(16), dpi(12), dpi(16), dpi(12));
                    root.setBackgroundColor(0xFF141822);

                    TextView title = new TextView(getContext());
                    title.setText("[TROPHIES] CAMPAIGN ACHIEVEMENTS");
                    title.setTextColor(0xFFFFD54F);
                    title.setTypeface(android.graphics.Typeface.DEFAULT_BOLD);
                    title.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 16);
                    title.setPadding(0, 0, 0, dpi(6));
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

                    SharedPreferences prefs = getContext().getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE);
                    int unlockedCount = 0;
                    for (String[] a : achData) {
                        if (prefs.getBoolean("lotd_ach_" + a[0], false)) unlockedCount++;
                    }

                    TextView summary = new TextView(getContext());
                    summary.setText(String.format(Locale.US, "Trophy Progress: %d / %d Unlocked", unlockedCount, achData.length));
                    summary.setTextColor(0xFF80CBC4);
                    summary.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 13);
                    summary.setPadding(0, 0, 0, dpi(8));
                    root.addView(summary);

                    LinearLayout list = new LinearLayout(getContext());
                    list.setOrientation(LinearLayout.VERTICAL);
                    ScrollView sv = new ScrollView(getContext());
                    sv.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, dpi(200)));
                    sv.addView(list);
                    root.addView(sv);

                    for (String[] a : achData) {
                        boolean unlocked = prefs.getBoolean("lotd_ach_" + a[0], false);
                        String dateStr = prefs.getString("lotd_ach_date_" + a[0], "");

                        LinearLayout row = new LinearLayout(getContext());
                        row.setOrientation(LinearLayout.VERTICAL);
                        row.setPadding(dpi(8), dpi(6), dpi(8), dpi(6));
                        row.setBackgroundColor(unlocked ? 0x332E7D32 : 0x221E2430);

                        TextView nameView = new TextView(getContext());
                        nameView.setText((unlocked ? "[UNLOCKED] " : "[LOCKED] ") + a[1]);
                        nameView.setTextColor(unlocked ? 0xFFFFD54F : 0xFF888888);
                        nameView.setTypeface(android.graphics.Typeface.DEFAULT_BOLD);
                        nameView.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 13);
                        row.addView(nameView);

                        TextView descView = new TextView(getContext());
                        descView.setText(a[2] + (unlocked && !dateStr.isEmpty() ? " (Unlocked: " + dateStr + ")" : ""));
                        descView.setTextColor(unlocked ? 0xFFE0E0E0 : 0xFF666666);
                        descView.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP, 11);
                        row.addView(descView);

                        list.addView(row);
                        View divider = new View(getContext());
                        divider.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, 1));
                        divider.setBackgroundColor(0x33FFFFFF);
                        list.addView(divider);
                    }

                    new AlertDialog.Builder(getContext(), android.R.style.Theme_DeviceDefault_Dialog_Alert)
                        .setView(root)
                        .setPositiveButton("CLOSE", null)
                        .show();
                }
            });
        }

    }

    private void setupVirtualKeyboardToggle() {
        // Disabled: onscreen keyboard opens automatically when text fields are focused
    }

    public static void toggleKeyboard() {
        if (mSingleton == null) return;
        mSingleton.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                InputMethodManager imm = (InputMethodManager) mSingleton.getSystemService(Context.INPUT_METHOD_SERVICE);
                boolean isKbVisible = (mTextEdit != null && mTextEdit.getVisibility() == View.VISIBLE && mTextEdit.getWidth() > 0);
                if (isKbVisible) {
                    if (mSingleton.commandHandler != null) {
                        mSingleton.commandHandler.sendEmptyMessage(COMMAND_TEXTEDIT_HIDE);
                    }
                    if (imm != null && mSurface != null) {
                        imm.hideSoftInputFromWindow(mSurface.getWindowToken(), 0);
                    }
                } else {
                    showTextInput(android.text.InputType.TYPE_CLASS_TEXT, 0, 0, 0, 0);
                    if (imm != null) {
                        imm.toggleSoftInput(InputMethodManager.SHOW_FORCED, InputMethodManager.HIDE_IMPLICIT_ONLY);
                    }
                }
            }
        });
    }

    private static boolean isAssetDifferent(android.content.res.AssetManager am, String assetPath, java.io.File target) {
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

    private void extractAssetsIfNeeded() {
        List<String> gameDirs = new ArrayList<String>();
        gameDirs.add("/storage/emulated/0/LandOfTheDead");
        gameDirs.add("/storage/emulated/0/Land Of The Dead");
        gameDirs.add("/sdcard/LandOfTheDead");
        gameDirs.add("/sdcard/Land Of The Dead");
        try {
            java.io.File ext = getExternalFilesDir(null);
            if (ext != null) {
                gameDirs.add(ext.getAbsolutePath());
                gameDirs.add(new java.io.File(ext, "LandOfTheDead").getAbsolutePath());
                gameDirs.add(new java.io.File(ext, "game").getAbsolutePath());
            }
        } catch (Throwable ignored) {}

        // Guarantee default XHYN_PH profile exists in saves directory (both root/Saves and root/save/Saves)
        for (String gDir : gameDirs) {
            java.io.File dir = new java.io.File(gDir);
            if (dir.exists() && dir.isDirectory()) {
                java.io.File[] saveLocations = new java.io.File[] {
                    new java.io.File(dir, "Saves"),
                    new java.io.File(new java.io.File(dir, "save"), "Saves")
                };
                for (java.io.File savesDir : saveLocations) {
                    try {
                        if (!savesDir.exists()) savesDir.mkdirs();
                        // 1. Primary profile: ONLY XHYN_PH is supported
                        java.io.File xhynDir = new java.io.File(savesDir, "XHYN_PH");
                        if (!xhynDir.exists()) xhynDir.mkdirs();
                        java.io.File metaFile = new java.io.File(xhynDir, "meta.mtd");
                        if (!metaFile.exists() || metaFile.length() == 0) {
                            try (java.io.FileOutputStream fos = new java.io.FileOutputStream(metaFile)) {
                                fos.write("2\nCONTAINERNAME=XHYN_PH\nDATATYPE=PROFILE\n".getBytes(java.nio.charset.StandardCharsets.UTF_8));
                                fos.flush();
                                Log.i(TAG, "Auto-created default XHYN_PH profile at " + metaFile.getAbsolutePath());
                            }
                        }
                        // Migrate/copy saves from old Player to XHYN_PH, then delete Player directory completely
                        java.io.File oldPlayerDir = new java.io.File(savesDir, "Player");
                        if (oldPlayerDir.exists() && oldPlayerDir.isDirectory()) {
                            java.io.File[] oldFiles = oldPlayerDir.listFiles();
                            if (oldFiles != null) {
                                for (java.io.File of : oldFiles) {
                                    if (!of.getName().equalsIgnoreCase("meta.mtd") && of.isFile()) {
                                        java.io.File targetF = new java.io.File(xhynDir, of.getName());
                                        if (!targetF.exists()) {
                                            try {
                                                java.nio.file.Files.copy(of.toPath(), targetF.toPath());
                                            } catch (Throwable ignored) {}
                                        }
                                    }
                                    of.delete();
                                }
                            }
                            oldPlayerDir.delete();
                            Log.i(TAG, "Migrated and deleted legacy Player profile directory.");
                        }
                    } catch (Exception ex) {
                        Log.w(TAG, "Failed ensuring default profile in " + savesDir, ex);
                    }
                }
            }
        }
        try {
            android.content.res.AssetManager am = getAssets();
            String[] textures = am.list("Textures");
            if (textures == null || textures.length == 0) {
                Log.w(TAG, "No textures found in assets/Textures");
                return;
            }

            for (String gDir : gameDirs) {
                java.io.File dir = new java.io.File(gDir);
                if (dir.exists() && dir.isDirectory()) {
                    java.io.File texDir = new java.io.File(dir, "Textures");
                    if (!texDir.exists()) texDir.mkdirs();

                    for (String tName : textures) {
                        java.io.File target = new java.io.File(texDir, tName);

                        long assetLen = -1;
                        try (android.content.res.AssetFileDescriptor afd = am.openFd("Textures/" + tName)) {
                            assetLen = afd.getLength();
                        } catch (Exception e) {
                            try (java.io.InputStream is = am.open("Textures/" + tName)) {
                                byte[] buf = new byte[8192];
                                int r;
                                long total = 0;
                                while ((r = is.read(buf)) > 0) total += r;
                                assetLen = total;
                            } catch (Exception ignored) {}
                        }

                        java.io.File[] existingFiles = texDir.listFiles();
                        if (existingFiles != null) {
                            for (java.io.File ef : existingFiles) {
                                if (ef.getName().equalsIgnoreCase(tName) && !ef.getName().equals(tName)) {
                                    Log.w(TAG, "Removing mismatched case file: " + ef.getAbsolutePath());
                                    ef.delete();
                                }
                            }
                        }

                        if (isAssetDifferent(am, "Textures/" + tName, target)) {
                            Log.i(TAG, "Syncing asset Textures/" + tName + " to " + target);
                            if (target.exists()) {
                                target.setWritable(true);
                                target.delete();
                            }
                            try (java.io.InputStream in = am.open("Textures/" + tName);
                                 java.io.FileOutputStream out = new java.io.FileOutputStream(target)) {
                                byte[] buf = new byte[32768];
                                int n;
                                while ((n = in.read(buf)) > 0) {
                                    out.write(buf, 0, n);
                                }
                                out.flush();
                                Log.i(TAG, "Successfully restored Textures/" + tName + " (" + target.length() + " bytes)");
                            } catch (Exception err) {
                                Log.e(TAG, "Failed to write " + target, err);
                            }
                        }
                    }
                }
            }

            // Sync System assets (e.g. patched DOTZMenu.u) if present in APK assets
            try {
                String[] sysFiles = am.list("System");
                if (sysFiles != null && sysFiles.length > 0) {
                    for (String sName : sysFiles) {
                        for (String gDir : gameDirs) {
                            java.io.File dir = new java.io.File(gDir);
                            if (dir.exists() && dir.isDirectory()) {
                                java.io.File sDir = new java.io.File(dir, "System");
                                if (!sDir.exists()) sDir.mkdirs();
                                java.io.File target = new java.io.File(sDir, sName);
                                if (isAssetDifferent(am, "System/" + sName, target)) {
                                    Log.i(TAG, "Syncing asset System/" + sName + " to " + target);
                                    if (target.exists()) target.delete();
                                    try (java.io.InputStream in = am.open("System/" + sName);
                                         java.io.FileOutputStream out = new java.io.FileOutputStream(target)) {
                                        byte[] buf = new byte[32768];
                                        int n;
                                        while ((n = in.read(buf)) > 0) out.write(buf, 0, n);
                                        out.flush();
                                        Log.i(TAG, "Successfully synced System/" + sName + " (" + target.length() + " bytes)");
                                    } catch (Exception err) {
                                        Log.e(TAG, "Failed to write " + target, err);
                                    }
                                }
                            }
                        }
                    }
                }
            } catch (Exception ignored) {}
        } catch (Exception e) {
            Log.e(TAG, "Error in extractAssetsIfNeeded", e);
        }
    }

    @Override
    protected void onStop() {
        Log.v(TAG, "onStop()");
        super.onStop();
        if (mHasMultiWindow) {
            pauseNativeThread();
        }
    }

    @Override
    protected void onStart() {
        Log.v(TAG, "onStart()");
        super.onStart();
        if (mHasMultiWindow) {
            resumeNativeThread();
        }
    }

    public static int getNaturalOrientation() {
        int result = SDL_ORIENTATION_UNKNOWN;

        Activity activity = getContext();
        if (activity != null) {
            Configuration config = activity.getResources().getConfiguration();
            Display display = activity.getWindowManager().getDefaultDisplay();
            int rotation = display.getRotation();
            if (((rotation == Surface.ROTATION_0 || rotation == Surface.ROTATION_180) &&
                    config.orientation == Configuration.ORIENTATION_LANDSCAPE) ||
                ((rotation == Surface.ROTATION_90 || rotation == Surface.ROTATION_270) &&
                    config.orientation == Configuration.ORIENTATION_PORTRAIT)) {
                result = SDL_ORIENTATION_LANDSCAPE;
            } else {
                result = SDL_ORIENTATION_PORTRAIT;
            }
        }
        return result;
    }

    public static int getCurrentRotation() {
        int result = 0;

        Activity activity = getContext();
        if (activity != null) {
            Display display = activity.getWindowManager().getDefaultDisplay();
            switch (display.getRotation()) {
                case Surface.ROTATION_0:
                    result = 0;
                    break;
                case Surface.ROTATION_90:
                    result = 90;
                    break;
                case Surface.ROTATION_180:
                    result = 180;
                    break;
                case Surface.ROTATION_270:
                    result = 270;
                    break;
            }
        }
        return result;
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        Log.v(TAG, "onWindowFocusChanged(): " + hasFocus);

        if (hasFocus) {
            hideSystemBars(getWindow());
        }

        // If we are gaining focus, we can always try to restore our USB devices. If we are losing focus,
        // only try to relinquish them if we don't have background events allowed (for multi-window Android setups).
        if (hasFocus || !SDLActivity.nativeGetHintBoolean("SDL_JOYSTICK_ALLOW_BACKGROUND_EVENTS", false)) {
            if (mHIDDeviceManager != null) {
                mHIDDeviceManager.setFrozen(!hasFocus);
            }
        }

        if (SDLActivity.mBrokenLibraries) {
           return;
        }

        mHasFocus = hasFocus;
        if (hasFocus) {
           mNextNativeState = NativeState.RESUMED;
           SDLActivity.getMotionListener().reclaimRelativeMouseModeIfNeeded();

           SDLActivity.handleNativeState();
           nativeFocusChanged(true);

        } else {
           nativeFocusChanged(false);
           if (!mHasMultiWindow) {
               mNextNativeState = NativeState.PAUSED;
               SDLActivity.handleNativeState();
           }
        }
    }

    @Override
    public void onTrimMemory(int level) {
        Log.v(TAG, "onTrimMemory(" + level + ")");
        super.onTrimMemory(level);

        if (SDLActivity.mBrokenLibraries) {
           return;
        }

        SDLActivity.nativeLowMemory();
        try {
            nativeTrimMemory(level);
        } catch (Throwable ignored) {}
    }

    @Override
    public void onConfigurationChanged(Configuration newConfig) {
        Log.v(TAG, "onConfigurationChanged()");
        super.onConfigurationChanged(newConfig);

        if (SDLActivity.mBrokenLibraries) {
           return;
        }

        if (mCurrentLocale == null || !mCurrentLocale.equals(newConfig.locale)) {
            mCurrentLocale = newConfig.locale;
            SDLActivity.onNativeLocaleChanged();
        }

        switch (newConfig.uiMode & Configuration.UI_MODE_NIGHT_MASK) {
        case Configuration.UI_MODE_NIGHT_NO:
            SDLActivity.onNativeDarkModeChanged(false);
            break;
        case Configuration.UI_MODE_NIGHT_YES:
            SDLActivity.onNativeDarkModeChanged(true);
            break;
        }
    }

    @Override
    protected void onDestroy() {
        Log.v(TAG, "onDestroy()");
        try { unregisterReceiver(mBatteryReceiver); } catch (Throwable ignored) {}
        try { unregisterReceiver(mAudioBecomingNoisyReceiver); } catch (Throwable ignored) {}

        if (mHIDDeviceManager != null) {
            HIDDeviceManager.release(mHIDDeviceManager);
            mHIDDeviceManager = null;
        }

        SDLAudioManager.release(this);

        if (SDLActivity.mBrokenLibraries) {
           super.onDestroy();
           return;
        }

        if (SDLActivity.mSDLThread != null) {

            // Send Quit event to "SDLThread" thread
            SDLActivity.nativeSendQuit();

            // Wait for "SDLThread" thread to end
            try {
                // Use a timeout because:
                // C SDLmain() thread might have started (mSDLThread.start() called)
                // while the SDL_Init() might not have been called yet,
                // and so the previous QUIT event will be discarded by SDL_Init() and app is running, not exiting.
                SDLActivity.mSDLThread.join(1000);
            } catch(Exception e) {
                Log.v(TAG, "Problem stopping SDLThread: " + e);
            }
        }

        SDLActivity.nativeQuit();

        super.onDestroy();

        // Ensure process terminates cleanly and frees all native resources
        android.os.Process.killProcess(android.os.Process.myPid());
        System.exit(0);
    }

    private long mLastBackPressTime = 0;
    private long mLastMainMenuBackTime = 0;

    @Override
    public void onBackPressed() {
        long now = System.currentTimeMillis();
        if (now - mLastBackPressTime < 450) {
            // Debounce identical back event coming from dispatchKeyEvent + onBackInvoked + pressBackButton
            return;
        }
        mLastBackPressTime = now;

        // Pulse ESC key to game to trigger in-game pause menu or dismiss open dialogs / return from settings
        try {
            nativeTouchKey(0x1B, true);
            new Handler(Looper.getMainLooper()).postDelayed(new Runnable() {
                @Override public void run() { try { nativeTouchKey(0x1B, false); } catch (Throwable ignored) {} }
            }, 50);
        } catch (Throwable ignored) {}

        boolean inGame = false;
        try {
            inGame = nativeIsCaptured() || (nativeGetPossessedWeapons() > 0);
        } catch (Throwable ignored) {}
        if (inGame) {
            // While playing or paused in level: ESC triggers the in-game menu or navigates back.
            // Never finish the activity during gameplay.
            return;
        }

        if (mLastMainMenuBackTime != 0 && (now - mLastMainMenuBackTime < 2500)) {
            if (!isFinishing()) {
                finish();
            }
        } else {
            mLastMainMenuBackTime = now;
            Toast.makeText(this, "Press BACK again to exit game", Toast.LENGTH_SHORT).show();
        }
    }

    static OnBackInvokedCallback backButtonCallback;
    static boolean mBackKeyTrapEnabled = false;
    public static void setBackButtonTrapEnabled(boolean enabled) {

        if ( Build.VERSION.SDK_INT < 33 ) {
            // We're old enough that we just use the old onBackPressed behavior.
            return;
        }

        // Check so we don't register the same callback twice.
        if (enabled == mBackKeyTrapEnabled) {
            return;
        }

        if (backButtonCallback == null) {
            backButtonCallback = new OnBackInvokedCallback() {
                @Override
                public void onBackInvoked() {
                    if (mSingleton != null) {
                        mSingleton.onBackPressed();
                    }
                }
            };
        }

        if (enabled) {
            mSingleton.getOnBackInvokedDispatcher().registerOnBackInvokedCallback(OnBackInvokedDispatcher.PRIORITY_OVERLAY, backButtonCallback);
        }
        else {
            mSingleton.getOnBackInvokedDispatcher().unregisterOnBackInvokedCallback(backButtonCallback);
        }
        mBackKeyTrapEnabled = enabled;
    }

    // File dialog types
    private static final int SDL_FILEDIALOG_OPENFILE = 0;
    private static final int SDL_FILEDIALOG_SAVEFILE = 1;
    private static final int SDL_FILEDIALOG_OPENFOLDER = 2;

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        if (mFileDialogState != null && mFileDialogState.requestCode == requestCode) {
            /* This is our file dialog */
            String[] filelist = null;

            if (data != null && resultCode == Activity.RESULT_OK) {
                Uri singleFileUri = data.getData();

                if (singleFileUri == null) {
                    /* Use Intent.getClipData to get multiple choices */
                    ClipData clipData = data.getClipData();
                    assert clipData != null;

                    filelist = new String[clipData.getItemCount()];

                    for (int i = 0; i < filelist.length; i++) {
                        String uri = clipData.getItemAt(i).getUri().toString();
                        filelist[i] = uri;
                    }
                } else {
                    /* If the user selected a directory and the persistent permission hint has been set,
                       make the permission persistable */
                    if (mFileDialogState.type == SDL_FILEDIALOG_OPENFOLDER && mFileDialogState.persistable) {
                        mSingleton.getContentResolver().takePersistableUriPermission(singleFileUri,
                            Intent.FLAG_GRANT_READ_URI_PERMISSION |
                            Intent.FLAG_GRANT_WRITE_URI_PERMISSION);
                    }
                    /* Only one file is selected. */
                    filelist = new String[]{singleFileUri.toString()};
                }
            } else {
                /* User cancelled the request. */
                filelist = new String[0];
            }

            // TODO: Detect the file MIME type and pass the filter value accordingly.
            SDLActivity.onNativeFileDialog(requestCode, filelist, -1);
            mFileDialogState = null;
        }
    }

    // Called by JNI from SDL.
    public static void manualBackButton() {
        mSingleton.pressBackButton();
    }

    // Used to get us onto the activity's main thread
    public void pressBackButton() {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (!SDLActivity.this.isFinishing()) {
                    SDLActivity.this.onBackPressed();
                }
            }
        });
    }

    // Used to access the system back behavior.
    public void superOnBackPressed() {
        onBackPressed();
    }

    public static void hideSystemBars(Window window) {
        if (window == null) return;
        try {
            if (Build.VERSION.SDK_INT >= 30 /* Android 11 (R) */) {
                final WindowInsetsController controller = window.getInsetsController();
                if (controller != null) {
                    controller.hide(WindowInsets.Type.systemBars());
                    controller.setSystemBarsBehavior(WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE);
                }
            }
            int flags = View.SYSTEM_UI_FLAG_FULLSCREEN |
                    View.SYSTEM_UI_FLAG_HIDE_NAVIGATION |
                    View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY |
                    View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN |
                    View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION |
                    View.SYSTEM_UI_FLAG_LAYOUT_STABLE;
            window.getDecorView().setSystemUiVisibility(flags);
            window.addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
            window.clearFlags(WindowManager.LayoutParams.FLAG_FORCE_NOT_FULLSCREEN);
            if (Build.VERSION.SDK_INT >= 28) {
                window.getAttributes().layoutInDisplayCutoutMode =
                        WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
            }
        } catch (Throwable ignored) {}
    }

    // -------------------------------------------------------------
    // Direct Gamepad / Controller Integration
    // -------------------------------------------------------------
    private static boolean mPadHeldW = false, mPadHeldS = false, mPadHeldA = false, mPadHeldD = false;
    private static boolean mPadTriggerL = false, mPadTriggerR = false;

    private static boolean isGamepadDevice(InputDevice dev) {
        if (dev == null) return false;
        int sources = dev.getSources();
        return (sources & InputDevice.SOURCE_GAMEPAD) == InputDevice.SOURCE_GAMEPAD ||
               (sources & InputDevice.SOURCE_JOYSTICK) == InputDevice.SOURCE_JOYSTICK ||
               (sources & InputDevice.SOURCE_DPAD) == InputDevice.SOURCE_DPAD;
    }

    @Override
    public boolean onGenericMotionEvent(MotionEvent event) {
        if ((event.getSource() & (InputDevice.SOURCE_JOYSTICK | InputDevice.SOURCE_GAMEPAD)) != 0) {
            if (processGamepadMotionEvent(event)) {
                return true;
            }
        }
        return super.onGenericMotionEvent(event);
    }

    private boolean processGamepadMotionEvent(MotionEvent event) {
        if (event.getAction() != MotionEvent.ACTION_MOVE) return false;

        // Left Analog Stick with radial deadzone (0.15f anti-drift)
        float lx = event.getAxisValue(MotionEvent.AXIS_X);
        float ly = event.getAxisValue(MotionEvent.AXIS_Y);
        float lMag = (float)Math.hypot(lx, ly);
        if (lMag < 0.15f) {
            lx = 0.0f; ly = 0.0f;
        } else {
            float scaled = (lMag - 0.15f) / (1.0f - 0.15f);
            lx = (lx / lMag) * scaled;
            ly = (ly / lMag) * scaled;
        }

        // Right Analog Stick (3D Camera Look) with radial deadzone (0.12f anti-drift)
        float rx = 0.0f, ry = 0.0f;
        InputDevice dev = event.getDevice();
        if (dev != null && dev.getMotionRange(MotionEvent.AXIS_RX, event.getSource()) != null) {
            rx = event.getAxisValue(MotionEvent.AXIS_RX);
            ry = event.getAxisValue(MotionEvent.AXIS_RY);
        } else if (dev != null && dev.getMotionRange(MotionEvent.AXIS_Z, event.getSource()) != null) {
            rx = event.getAxisValue(MotionEvent.AXIS_Z);
            ry = event.getAxisValue(MotionEvent.AXIS_RZ);
        } else {
            rx = event.getAxisValue(MotionEvent.AXIS_Z);
            ry = event.getAxisValue(MotionEvent.AXIS_RZ);
            if (Math.abs(rx) < 0.05f && Math.abs(ry) < 0.05f) {
                rx = event.getAxisValue(MotionEvent.AXIS_RX);
                ry = event.getAxisValue(MotionEvent.AXIS_RY);
            }
        }
        float rMag = (float)Math.hypot(rx, ry);
        if (rMag < 0.12f) {
            rx = 0.0f; ry = 0.0f;
        } else {
            float scaled = (rMag - 0.12f) / (1.0f - 0.12f);
            rx = (rx / rMag) * scaled;
            ry = (ry / rMag) * scaled;
        }

        // Pass normalized stick axes directly to native layer (single authority for move & look)
        try { nativeSetGamepadAxes(lx, ly, rx, mInvertLookY ? -ry : ry); } catch (Throwable ignored) {}

        // Triggers (LT = Aim, RT = Fire)
        float lt = event.getAxisValue(MotionEvent.AXIS_BRAKE);
        if (lt <= 0.0f) lt = event.getAxisValue(MotionEvent.AXIS_LTRIGGER);
        boolean downLT = (lt > 0.4f);
        if (downLT != mPadTriggerL) {
            mPadTriggerL = downLT;
            try { nativeTouchMouseButton(1, downLT); } catch (Throwable ignored) {}
        }

        float rt = event.getAxisValue(MotionEvent.AXIS_GAS);
        if (rt <= 0.0f) rt = event.getAxisValue(MotionEvent.AXIS_RTRIGGER);
        boolean downRT = (rt > 0.4f);
        if (downRT != mPadTriggerR) {
            mPadTriggerR = downRT;
            try { nativeTouchMouseButton(0, downRT); } catch (Throwable ignored) {}
        }

        return true;
    }

    private boolean processGamepadKeyEvent(KeyEvent event) {
        int keyCode = event.getKeyCode();
        boolean down = (event.getAction() == KeyEvent.ACTION_DOWN);
        boolean inGame = false;
        try { inGame = nativeIsCaptured(); } catch (Throwable ignored) {}

        if (inGame) {
            switch (keyCode) {
                case KeyEvent.KEYCODE_BUTTON_A:
                    try { nativeTouchKey(0x20, down); } catch (Throwable ignored) {} // Space (Jump)
                    return true;
                case KeyEvent.KEYCODE_BUTTON_B:
                    try { nativeTouchKey(0x11, down); } catch (Throwable ignored) {} // Ctrl (Crouch)
                    return true;
                case KeyEvent.KEYCODE_BUTTON_X:
                    try { nativeTouchKey('R', down); } catch (Throwable ignored) {}  // R (Reload)
                    return true;
                case KeyEvent.KEYCODE_BUTTON_Y:
                    try { nativeTouchKey('E', down); } catch (Throwable ignored) {}  // E (Use)
                    return true;
                case KeyEvent.KEYCODE_BUTTON_R1:
                    try { nativeTouchMouseButton(0, down); } catch (Throwable ignored) {} // Fire
                    return true;
                case KeyEvent.KEYCODE_BUTTON_L1:
                    try { nativeTouchMouseButton(1, down); } catch (Throwable ignored) {} // Aim / ADS
                    return true;
                case KeyEvent.KEYCODE_DPAD_UP:
                    try { nativeTouchKey('F', down); } catch (Throwable ignored) {}  // Flashlight
                    return true;
                case KeyEvent.KEYCODE_DPAD_DOWN:
                    try { nativeTouchKey(0x09, down); } catch (Throwable ignored) {} // Tab (Objectives)
                    return true;
                case KeyEvent.KEYCODE_DPAD_LEFT:
                    if (down) { try { nativeTouchWheel(-120); } catch (Throwable ignored) {} }
                    return true;
                case KeyEvent.KEYCODE_DPAD_RIGHT:
                    if (down) { try { nativeTouchWheel(120); } catch (Throwable ignored) {} }
                    return true;
                case KeyEvent.KEYCODE_BUTTON_START:
                    try { nativeTouchKey(0x1B, down); } catch (Throwable ignored) {} // Escape (Pause)
                    return true;
                case KeyEvent.KEYCODE_BUTTON_SELECT:
                    try { nativeTouchKey(0x09, down); } catch (Throwable ignored) {} // Tab (Objectives)
                    return true;
                case KeyEvent.KEYCODE_BUTTON_THUMBL:
                    try { nativeTouchKey(0x10, down); } catch (Throwable ignored) {} // Shift (Walk/Sprint)
                    return true;
                case KeyEvent.KEYCODE_BUTTON_THUMBR:
                    try { nativeTouchMouseButton(2, down); } catch (Throwable ignored) {} // Zoom
                    return true;
            }
        } else {
            // Menu Navigation
            switch (keyCode) {
                case KeyEvent.KEYCODE_BUTTON_A:
                    try {
                        nativeTouchMouseButton(0, down);
                    } catch (Throwable ignored) {}
                    return true;
                case KeyEvent.KEYCODE_BUTTON_B:
                case KeyEvent.KEYCODE_BUTTON_START:
                case KeyEvent.KEYCODE_BUTTON_SELECT:
                    try { nativeTouchKey(0x1B, down); } catch (Throwable ignored) {} // Back / Escape
                    return true;
            }
        }
        return false;
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent event) {
        if (SDLActivity.mBrokenLibraries) {
            return false;
        }

        int keyCode = event.getKeyCode();
        if (keyCode == KeyEvent.KEYCODE_BACK) {
            if (event.getAction() == KeyEvent.ACTION_UP) {
                onBackPressed();
            }
            return true;
        }
        if (keyCode == KeyEvent.KEYCODE_VOLUME_DOWN ||
            keyCode == KeyEvent.KEYCODE_VOLUME_UP ||
            keyCode == KeyEvent.KEYCODE_CAMERA ||
            keyCode == KeyEvent.KEYCODE_ZOOM_IN ||
            keyCode == KeyEvent.KEYCODE_ZOOM_OUT) {
            return false;
        }

        InputDevice dev = event.getDevice();
        boolean isGamepad = KeyEvent.isGamepadButton(keyCode) ||
                            (dev != null && isGamepadDevice(dev)) ||
                            ((event.getSource() & (InputDevice.SOURCE_GAMEPAD | InputDevice.SOURCE_JOYSTICK | InputDevice.SOURCE_DPAD)) != 0);
        if (isGamepad) {
            if (processGamepadKeyEvent(event)) {
                return true;
            }
        }

        mDispatchingKeyEvent = true;
        boolean result = super.dispatchKeyEvent(event);
        mDispatchingKeyEvent = false;
        return result;
    }

    public static boolean dispatchingKeyEvent() {
        return mDispatchingKeyEvent;
    }

    /* Transition to next state */
    public static void handleNativeState() {

        if (mNextNativeState == mCurrentNativeState) {
            // Already in same state, discard.
            return;
        }

        // Try a transition to init state
        if (mNextNativeState == NativeState.INIT) {

            mCurrentNativeState = mNextNativeState;
            return;
        }

        // Try a transition to paused state
        if (mNextNativeState == NativeState.PAUSED) {
            if (mSDLThread != null) {
                nativePause();
            }
            if (mSurface != null) {
                mSurface.handlePause();
            }
            mCurrentNativeState = mNextNativeState;
            return;
        }

        // Try a transition to resumed state
        if (mNextNativeState == NativeState.RESUMED) {
            boolean readyToRun = (mSurface == null) ? mIsResumedCalled
                    : (mSurface.mIsSurfaceReady && (mHasFocus || mHasMultiWindow) && mIsResumedCalled);
            if (readyToRun) {
                if (mSDLThread == null) {
                    // This is the entry point to the C app.
                    // Start up the C app thread and enable sensor input for the first time
                    // FIXME: Why aren't we enabling sensor input at start?

                    mSDLThread = new Thread(new SDLMain(), "SDLThread");
                    if (mSurface != null) {
                        mSurface.enableSensor(Sensor.TYPE_ACCELEROMETER, true);
                    }
                    mSDLThread.start();

                    // No nativeResume(), don't signal Android_ResumeSem
                } else {
                    nativeResume();
                }
                if (mSurface != null) {
                    mSurface.handleResume();
                }

                mCurrentNativeState = mNextNativeState;
            }
        }
    }

    // Messages from the SDLMain thread
    protected static final int COMMAND_CHANGE_TITLE = 1;
    protected static final int COMMAND_CHANGE_WINDOW_STYLE = 2;
    protected static final int COMMAND_TEXTEDIT_HIDE = 3;
    protected static final int COMMAND_SET_KEEP_SCREEN_ON = 5;
    protected static final int COMMAND_USER = 0x8000;

    protected static boolean mFullscreenModeActive;

    /**
     * This method is called by SDL if SDL did not handle a message itself.
     * This happens if a received message contains an unsupported command.
     * Method can be overwritten to handle Messages in a different class.
     * @param command the command of the message.
     * @param param the parameter of the message. May be null.
     * @return if the message was handled in overridden method.
     */
    protected boolean onUnhandledMessage(int command, Object param) {
        return false;
    }

    /**
     * A Handler class for Messages from native SDL applications.
     * It uses current Activities as target (e.g. for the title).
     * static to prevent implicit references to enclosing object.
     */
    protected static class SDLCommandHandler extends Handler {
        @Override
        public void handleMessage(Message msg) {
            Context context = getContext();
            if (context == null) {
                Log.e(TAG, "error handling message, getContext() returned null");
                return;
            }
            switch (msg.arg1) {
            case COMMAND_CHANGE_TITLE:
                if (context instanceof Activity) {
                    ((Activity) context).setTitle((String)msg.obj);
                } else {
                    Log.e(TAG, "error handling message, getContext() returned no Activity");
                }
                break;
            case COMMAND_CHANGE_WINDOW_STYLE:
                if (context instanceof Activity) {
                    Window window = ((Activity) context).getWindow();
                    if (window != null) {
                        hideSystemBars(window);
                        SDLActivity.mFullscreenModeActive = true;
                    }
                } else {
                    Log.e(TAG, "error handling message, getContext() returned no Activity");
                }
                break;
            case COMMAND_TEXTEDIT_HIDE:
                if (mTextEdit != null) {
                    // Note: On some devices setting view to GONE creates a flicker in landscape.
                    // Setting the View's sizes to 0 is similar to GONE but without the flicker.
                    // The sizes will be set to useful values when the keyboard is shown again.
                    mTextEdit.setLayoutParams(new RelativeLayout.LayoutParams(0, 0));

                    InputMethodManager imm = (InputMethodManager) context.getSystemService(Context.INPUT_METHOD_SERVICE);
                    imm.hideSoftInputFromWindow(mTextEdit.getWindowToken(), 0);

                    onNativeScreenKeyboardHidden();

                    mSurface.requestFocus();
                }
                break;
            case COMMAND_SET_KEEP_SCREEN_ON:
            {
                if (context instanceof Activity) {
                    Window window = ((Activity) context).getWindow();
                    if (window != null) {
                        if ((msg.obj instanceof Integer) && ((Integer) msg.obj != 0)) {
                            window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
                        } else {
                            window.clearFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
                        }
                    }
                }
                break;
            }
            default:
                if ((context instanceof SDLActivity) && !((SDLActivity) context).onUnhandledMessage(msg.arg1, msg.obj)) {
                    Log.e(TAG, "error handling message, command is " + msg.arg1);
                }
            }
        }
    }

    // Handler for the messages
    Handler commandHandler = new SDLCommandHandler();

    // Send a message from the SDLMain thread
    protected boolean sendCommand(int command, Object data) {
        Message msg = commandHandler.obtainMessage();
        msg.arg1 = command;
        msg.obj = data;
        boolean result = commandHandler.sendMessage(msg);

        if (command == COMMAND_CHANGE_WINDOW_STYLE) {
            // Ensure we don't return until the resize has actually happened,
            // or 500ms have passed.

            boolean bShouldWait = false;

            if (data instanceof Integer) {
                // Let's figure out if we're already laid out fullscreen or not.
                Display display = ((WindowManager) getSystemService(Context.WINDOW_SERVICE)).getDefaultDisplay();
                DisplayMetrics realMetrics = new DisplayMetrics();
                display.getRealMetrics(realMetrics);

                boolean bFullscreenLayout = (mSurface != null) &&
                        ((realMetrics.widthPixels == mSurface.getWidth()) &&
                        (realMetrics.heightPixels == mSurface.getHeight()));

                if ((Integer) data == 1) {
                    // If we aren't laid out fullscreen or actively in fullscreen mode already, we're going
                    // to change size and should wait for surfaceChanged() before we return, so the size
                    // is right back in native code.  If we're already laid out fullscreen, though, we're
                    // not going to change size even if we change decor modes, so we shouldn't wait for
                    // surfaceChanged() -- which may not even happen -- and should return immediately.
                    bShouldWait = !bFullscreenLayout;
                } else {
                    // If we're laid out fullscreen (even if the status bar and nav bar are present),
                    // or are actively in fullscreen, we're going to change size and should wait for
                    // surfaceChanged before we return, so the size is right back in native code.
                    bShouldWait = bFullscreenLayout;
                }
            }

            if (bShouldWait && (getContext() != null)) {
                // We'll wait for the surfaceChanged() method, which will notify us
                // when called.  That way, we know our current size is really the
                // size we need, instead of grabbing a size that's still got
                // the navigation and/or status bars before they're hidden.
                //
                // We'll wait for up to half a second, because some devices
                // take a surprisingly long time for the surface resize, but
                // then we'll just give up and return.
                //
                synchronized (getContext()) {
                    try {
                        getContext().wait(500);
                    } catch (InterruptedException ie) {
                        ie.printStackTrace();
                    }
                }
            }
        }

        return result;
    }

    // C functions we call
    public static native String nativeGetVersion();
    public static native void nativeSetupJNI();
    public static native int nativeGetCompiledSubsystems();
    public static native boolean nativeIsHIDAPIEnabled();
    public static native void nativeInitMainThread();
    public static native void nativeCleanupMainThread();
    public static native int nativeRunMain(String library, String function, Object arguments);
    public static native void nativeLowMemory();
    public static native void nativeSendQuit();
    public static native void nativeQuit();
    public static native void nativePause();
    public static native void nativeResume();
    public static native void nativeFocusChanged(boolean hasFocus);
    public static native void onNativeDropFile(String filename);
    public static native void nativeSetScreenResolution(int surfaceWidth, int surfaceHeight, int deviceWidth, int deviceHeight, float density, float rate);
    public static native void nativeSetScreenHDRHeadroom(float headroom);
    public static native void onNativeResize();
    public static native void onNativeKeyDown(int keycode);
    public static native void onNativeKeyUp(int keycode);
    public static native boolean onNativeSoftReturnKey();
    public static native void onNativeKeyboardFocusLost();
    public static native void onNativeMouse(int button, int action, float x, float y, boolean relative);
    public static native void onNativeTouch(int touchDevId, int pointerFingerId,
                                            int action, float x,
                                            float y, float p);
    public static native void onNativePen(int penId, int device_type, int button, int action, float x, float y, float p);
    public static native void onNativeClipboardChanged();
    public static native void onNativeSurfaceCreated();
    public static native void onNativeSurfaceChanged();
    public static native void onNativeSurfaceDestroyed();
    public static native void onNativeScreenKeyboardShown();
    public static native void onNativeScreenKeyboardHidden();
    public static native String nativeGetHint(String name);
    public static native boolean nativeGetHintBoolean(String name, boolean default_value);
    public static native void nativeSetenv(String name, String value);
    public static native void nativeSetNaturalOrientation(int orientation);
    public static native void onNativeRotationChanged(int rotation);
    public static native void onNativeInsetsChanged(int left, int right, int top, int bottom);
    public static native void nativeAddTouch(int touchId, String name);
    public static native void nativePermissionResult(int requestCode, boolean result);
    public static native void onNativeLocaleChanged();
    public static native void onNativeDarkModeChanged(boolean enabled);
    public static native boolean nativeAllowRecreateActivity();
    public static native int nativeCheckSDLThreadCounter();
    public static native void onNativeFileDialog(int requestCode, String[] filelist, int filter);
    public static native void onNativePinchStart(float span_x, float span_y, float focus_x, float focus_y);
    public static native void onNativePinchUpdate(float scale, float span_x, float span_y, float focus_x, float focus_y);
    public static native void onNativePinchEnd();

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean setActivityTitle(String title) {
        // Called from SDLMain() thread and can't directly affect the view
        return mSingleton.sendCommand(COMMAND_CHANGE_TITLE, title);
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static void setWindowStyle(boolean fullscreen) {
        // Called from SDLMain() thread and can't directly affect the view
        mSingleton.sendCommand(COMMAND_CHANGE_WINDOW_STYLE, fullscreen ? 1 : 0);
    }

    /**
     * This method is called by SDL using JNI.
     * This is a static method for JNI convenience, it calls a non-static method
     * so that is can be overridden
     */
    public static void setOrientation(int w, int h, boolean resizable, String hint)
    {
        if (mSingleton != null) {
            mSingleton.setOrientationBis(w, h, resizable, hint);
        }
    }

    /**
     * This can be overridden
     */
    public void setOrientationBis(int w, int h, boolean resizable, String hint)
    {
        int orientation_landscape = -1;
        int orientation_portrait = -1;

        if (w <= 1 || h <= 1) {
            // Invalid width/height, ignore this request
            return;
        }

        /* If set, hint "explicitly controls which UI orientations are allowed". */
        if (hint.contains("LandscapeRight") && hint.contains("LandscapeLeft")) {
            orientation_landscape = ActivityInfo.SCREEN_ORIENTATION_USER_LANDSCAPE;
        } else if (hint.contains("LandscapeLeft")) {
            orientation_landscape = ActivityInfo.SCREEN_ORIENTATION_LANDSCAPE;
        } else if (hint.contains("LandscapeRight")) {
            orientation_landscape = ActivityInfo.SCREEN_ORIENTATION_REVERSE_LANDSCAPE;
        }

        /* exact match to 'Portrait' to distinguish with PortraitUpsideDown */
        boolean contains_Portrait = hint.contains("Portrait ") || hint.endsWith("Portrait");

        if (contains_Portrait && hint.contains("PortraitUpsideDown")) {
            orientation_portrait = ActivityInfo.SCREEN_ORIENTATION_USER_PORTRAIT;
        } else if (contains_Portrait) {
            orientation_portrait = ActivityInfo.SCREEN_ORIENTATION_PORTRAIT;
        } else if (hint.contains("PortraitUpsideDown")) {
            orientation_portrait = ActivityInfo.SCREEN_ORIENTATION_REVERSE_PORTRAIT;
        }

        boolean is_landscape_allowed = (orientation_landscape != -1);
        boolean is_portrait_allowed = (orientation_portrait != -1);
        Log.v(TAG, "setOrientation() enforced SENSOR_LANDSCAPE width=" + w +" height="+ h);
        if (mSingleton != null) {
            mSingleton.setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_SENSOR_LANDSCAPE);
        }
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static void setDesiredHDRHeadroom(final float headroom) {
        if (Build.VERSION.SDK_INT < 35 /* Android 15 (V) */) {
            return;
        }

        if (mSingleton == null) {
            return;
        }

        mSingleton.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mSurface != null) {
                    mSurface.setDesiredHDRHeadroom(headroom);
                }
            }
        });
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static void minimizeWindow() {

        if (mSingleton == null) {
            return;
        }

        Intent startMain = new Intent(Intent.ACTION_MAIN);
        startMain.addCategory(Intent.CATEGORY_HOME);
        startMain.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
        mSingleton.startActivity(startMain);
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean shouldMinimizeOnFocusLoss() {
        return false;
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean supportsRelativeMouse()
    {
        // DeX mode in Samsung Experience 9.0 and earlier doesn't support relative mice properly under
        // Android 7 APIs, and simply returns no data under Android 8 APIs.
        //
        // This is fixed in Samsung Experience 9.5, which corresponds to Android 8.1.0, and
        // thus SDK version 27.  If we are in DeX mode and not API 27 or higher, as a result,
        // we should stick to relative mode.
        //
        if (Build.VERSION.SDK_INT < 27 /* Android 8.1 (O_MR1) */ && isDeXMode()) {
            return false;
        }

        return SDLActivity.getMotionListener().supportsRelativeMouse();
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean setRelativeMouseEnabled(boolean enabled)
    {
        if (enabled && !supportsRelativeMouse()) {
            return false;
        }

        return SDLActivity.getMotionListener().setRelativeMouseEnabled(enabled);
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean sendMessage(int command, int param) {
        if (mSingleton == null) {
            return false;
        }
        return mSingleton.sendCommand(command, param);
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static Activity getContext() {
        return SDL.getContext();
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean isAndroidTV() {
        UiModeManager uiModeManager = (UiModeManager) getContext().getSystemService(UI_MODE_SERVICE);
        if (uiModeManager.getCurrentModeType() == Configuration.UI_MODE_TYPE_TELEVISION) {
            return true;
        }
        if (Build.MANUFACTURER.equals("MINIX") && Build.MODEL.equals("NEO-U1")) {
            return true;
        }
        if (Build.MANUFACTURER.equals("Amlogic") &&
            (Build.MODEL.startsWith("TV") ||
             Build.MODEL.equals("X96-W") ||
             Build.MODEL.equals("A95X-R1"))) {
            return true;
        }
        return false;
    }

    public static boolean isVRHeadset() {
        if (Build.MANUFACTURER.equals("Oculus") && Build.MODEL.startsWith("Quest")) {
            return true;
        }
        if (Build.MANUFACTURER.equals("Pico")) {
            return true;
        }
        return false;
    }

    /**
     * This method is called by SDL using JNI.
     */
    static String getDeviceFormFactor()
    {
        // TODO: WearOS
        if (isAndroidTV()) {
            return "tv";
        } else if (isVRHeadset()) {
            return "headset";
        } else if (isTablet()) {
            return "tablet";
        //} else if (isAndroidAutomotive()) {
        //    return "car";
        } else {
            return "phone";
        }
    }

    public static double getDiagonal()
    {
        DisplayMetrics metrics = new DisplayMetrics();
        Activity activity = getContext();
        if (activity == null) {
            return 0.0;
        }
        activity.getWindowManager().getDefaultDisplay().getMetrics(metrics);

        double dWidthInches = metrics.widthPixels / (double)metrics.xdpi;
        double dHeightInches = metrics.heightPixels / (double)metrics.ydpi;

        return Math.sqrt((dWidthInches * dWidthInches) + (dHeightInches * dHeightInches));
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean isTablet() {
        // If our diagonal size is seven inches or greater, we consider ourselves a tablet.
        return (getDiagonal() >= 7.0);
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean isChromebook() {
        // https://stackoverflow.com/questions/39784415/how-to-detect-programmatically-if-android-app-is-running-in-chrome-book-or-in
        if (getContext() != null) {
            if (getContext().getPackageManager().hasSystemFeature("org.chromium.arc")
                || getContext().getPackageManager().hasSystemFeature("org.chromium.arc.device_management")) {
                return true;
            }
        }

        // Running on AVD emulator
        boolean isChromebookEmulator = (Build.MODEL != null && Build.MODEL.startsWith("sdk_gpc_"));
        return isChromebookEmulator;
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean isDeXMode() {
        if (Build.VERSION.SDK_INT < 24 /* Android 7.0 (N) */) {
            return false;
        }
        try {
            final Configuration config = getContext().getResources().getConfiguration();
            final Class<?> configClass = config.getClass();
            return configClass.getField("SEM_DESKTOP_MODE_ENABLED").getInt(configClass)
                    == configClass.getField("semDesktopModeEnabled").getInt(config);
        } catch(Exception ignored) {
            return false;
        }
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean getManifestEnvironmentVariables() {
        try {
            if (getContext() == null) {
                return false;
            }

            ApplicationInfo applicationInfo = getContext().getPackageManager().getApplicationInfo(getContext().getPackageName(), PackageManager.GET_META_DATA);
            Bundle bundle = applicationInfo.metaData;
            if (bundle == null) {
                return false;
            }
            String prefix = "SDL_ENV.";
            final int trimLength = prefix.length();
            for (String key : bundle.keySet()) {
                if (key.startsWith(prefix)) {
                    String name = key.substring(trimLength);
                    String value = bundle.get(key).toString();
                    nativeSetenv(name, value);
                }
            }
            /* environment variables set! */
            return true;
        } catch (Exception e) {
           Log.v(TAG, "exception " + e.toString());
        }
        return false;
    }

    // This method is called by SDLControllerManager's API 26 Generic Motion Handler.
    public static View getContentView() {
        return mLayout;
    }

    static class ShowTextInputTask implements Runnable {
        /*
         * This is used to regulate the pan&scan method to have some offset from
         * the bottom edge of the input region and the top edge of an input
         * method (soft keyboard)
         */
        static final int HEIGHT_PADDING = 15;

        public int input_type;
        public int x, y, w, h;

        public ShowTextInputTask(int input_type, int x, int y, int w, int h) {
            this.input_type = input_type;
            this.x = x;
            this.y = y;
            this.w = w;
            this.h = h;

            /* Minimum size of 1 pixel, so it takes focus. */
            if (this.w <= 0) {
                this.w = 1;
            }
            if (this.h + HEIGHT_PADDING <= 0) {
                this.h = 1 - HEIGHT_PADDING;
            }
        }

        @Override
        public void run() {
            if (mLayout == null) {
                return;
            }

            RelativeLayout.LayoutParams params = new RelativeLayout.LayoutParams(w, h + HEIGHT_PADDING);
            params.leftMargin = x;
            params.topMargin = y;

            if (mTextEdit == null) {
                mTextEdit = new SDLDummyEdit(getContext());

                mLayout.addView(mTextEdit, params);
            } else {
                mTextEdit.setLayoutParams(params);
            }
            mTextEdit.setInputType(input_type);

            mTextEdit.setVisibility(View.VISIBLE);
            mTextEdit.requestFocus();

            InputMethodManager imm = (InputMethodManager) getContext().getSystemService(Context.INPUT_METHOD_SERVICE);
            imm.showSoftInput(mTextEdit, 0);

            if (imm.isAcceptingText()) {
                onNativeScreenKeyboardShown();
            }
        }
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean showTextInput(int input_type, int x, int y, int w, int h) {
        if (mLayout == null) {
            return false;
        }

        // Transfer the task to the main thread as a Runnable
        return mSingleton.commandHandler.post(new ShowTextInputTask(input_type, x, y, w, h));
    }

    public static boolean isTextInputEvent(KeyEvent event) {

        // Key pressed with Ctrl should be sent as SDL_KEYDOWN/SDL_KEYUP and not SDL_TEXTINPUT
        if (event.isCtrlPressed()) {
            return false;
        }

        return event.isPrintingKey() || event.getKeyCode() == KeyEvent.KEYCODE_SPACE;
    }

    public static boolean handleKeyEvent(View v, int keyCode, KeyEvent event, InputConnection ic) {
        int deviceId = event.getDeviceId();
        int source = event.getSource();
        InputDevice device = InputDevice.getDevice(deviceId);

        if (source == InputDevice.SOURCE_UNKNOWN) {
            if (device != null) {
                source = device.getSources();
            }
        }

//        if (event.getAction() == KeyEvent.ACTION_DOWN) {
//            Log.v("SDL", "key down: " + keyCode + ", deviceId = " + deviceId + ", source = " + source);
//        } else if (event.getAction() == KeyEvent.ACTION_UP) {
//            Log.v("SDL", "key up: " + keyCode + ", deviceId = " + deviceId + ", source = " + source);
//        }

        // Dispatch the different events depending on where they come from
        // Some SOURCE_JOYSTICK, SOURCE_DPAD or SOURCE_GAMEPAD are also SOURCE_KEYBOARD
        // So, we try to process them as JOYSTICK/DPAD/GAMEPAD events first, if that fails we try them as KEYBOARD
        //
        // Furthermore, it's possible a game controller has SOURCE_KEYBOARD and
        // SOURCE_JOYSTICK, while its key events arrive from the keyboard source
        // So, retrieve the device itself and check all of its sources
        if (SDL.isControllerManagerReady() && SDLControllerManager.isDeviceSDLJoystick(device)) {
            // Note that we process events with specific key codes here
            if (event.getAction() == KeyEvent.ACTION_DOWN) {
                if (SDLControllerManager.onNativePadDown(deviceId, keyCode, event.getScanCode())) {
                    return true;
                }
            } else if (event.getAction() == KeyEvent.ACTION_UP) {
                if (SDLControllerManager.onNativePadUp(deviceId, keyCode, event.getScanCode())) {
                    return true;
                }
            }
        }

        if ((source & InputDevice.SOURCE_MOUSE) == InputDevice.SOURCE_MOUSE) {
            if (SDLActivity.isVRHeadset()) {
                // The Oculus Quest controller back button comes in as source mouse, so accept that
            } else {
                // on some devices key events are sent for mouse BUTTON_BACK/FORWARD presses
                // they are ignored here because sending them as mouse input to SDL is messy
                if ((keyCode == KeyEvent.KEYCODE_BACK) || (keyCode == KeyEvent.KEYCODE_FORWARD)) {
                    switch (event.getAction()) {
                    case KeyEvent.ACTION_DOWN:
                    case KeyEvent.ACTION_UP:
                        // mark the event as handled or it will be handled by system
                        // handling KEYCODE_BACK by system will call onBackPressed()
                        return true;
                    }
                }
            }
        }

        if (event.getAction() == KeyEvent.ACTION_DOWN) {
            onNativeKeyDown(keyCode);

            if (isTextInputEvent(event)) {
                if (ic != null) {
                    ic.commitText(String.valueOf((char) event.getUnicodeChar()), 1);
                } else {
                    SDLInputConnection.nativeCommitText(String.valueOf((char) event.getUnicodeChar()), 1);
                }
            }
            return true;
        } else if (event.getAction() == KeyEvent.ACTION_UP) {
            onNativeKeyUp(keyCode);
            return true;
        }

        return false;
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static Surface getNativeSurface() {
        if (SDLActivity.mSurface == null) {
            return null;
        }
        return SDLActivity.mSurface.getNativeSurface();
    }

    // Input

    /**
     * This method is called by SDL using JNI.
     */
    public static void initTouch() {
        int[] ids = InputDevice.getDeviceIds();

        for (int id : ids) {
            InputDevice device = InputDevice.getDevice(id);
            /* Allow SOURCE_TOUCHSCREEN and also Virtual InputDevices because they can send TOUCHSCREEN events */
            if (device != null && ((device.getSources() & InputDevice.SOURCE_TOUCHSCREEN) == InputDevice.SOURCE_TOUCHSCREEN
                    || device.isVirtual())) {

                nativeAddTouch(device.getId(), device.getName());
            }
        }
    }

    // Messagebox

    /** Result of current messagebox. Also used for blocking the calling thread. */
    protected final int[] messageboxSelection = new int[1];

    /**
     * This method is called by SDL using JNI.
     * Shows the messagebox from UI thread and block calling thread.
     * buttonFlags, buttonIds and buttonTexts must have same length.
     * @param buttonFlags array containing flags for every button.
     * @param buttonIds array containing id for every button.
     * @param buttonTexts array containing text for every button.
     * @param colors null for default or array of length 5 containing colors.
     * @return button id or -1.
     */
    public int messageboxShowMessageBox(
            final int flags,
            final String title,
            final String message,
            final int[] buttonFlags,
            final int[] buttonIds,
            final String[] buttonTexts,
            final int[] colors) {

        messageboxSelection[0] = -1;

        // sanity checks

        if ((buttonFlags.length != buttonIds.length) && (buttonIds.length != buttonTexts.length)) {
            return -1; // implementation broken
        }

        // collect arguments for Dialog

        final Bundle args = new Bundle();
        args.putInt("flags", flags);
        args.putString("title", title);
        args.putString("message", message);
        args.putIntArray("buttonFlags", buttonFlags);
        args.putIntArray("buttonIds", buttonIds);
        args.putStringArray("buttonTexts", buttonTexts);
        args.putIntArray("colors", colors);

        // trigger Dialog creation on UI thread

        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                messageboxCreateAndShow(args);
            }
        });

        // block the calling thread

        synchronized (messageboxSelection) {
            try {
                messageboxSelection.wait();
            } catch (InterruptedException ex) {
                ex.printStackTrace();
                return -1;
            }
        }

        // return selected value

        return messageboxSelection[0];
    }

    protected void messageboxCreateAndShow(Bundle args) {

        // TODO set values from "flags" to messagebox dialog

        // get colors

        int[] colors = args.getIntArray("colors");
        int backgroundColor;
        int textColor;
        int buttonBorderColor;
        int buttonBackgroundColor;
        int buttonSelectedColor;
        if (colors != null) {
            int i = -1;
            backgroundColor = colors[++i];
            textColor = colors[++i];
            buttonBorderColor = colors[++i];
            buttonBackgroundColor = colors[++i];
            buttonSelectedColor = colors[++i];
        } else {
            backgroundColor = Color.TRANSPARENT;
            textColor = Color.TRANSPARENT;
            buttonBorderColor = Color.TRANSPARENT;
            buttonBackgroundColor = Color.TRANSPARENT;
            buttonSelectedColor = Color.TRANSPARENT;
        }

        // create dialog with title and a listener to wake up calling thread

        final AlertDialog dialog = new AlertDialog.Builder(this).create();
        dialog.setTitle(args.getString("title"));
        dialog.setCancelable(false);
        dialog.setOnDismissListener(new DialogInterface.OnDismissListener() {
            @Override
            public void onDismiss(DialogInterface unused) {
                synchronized (messageboxSelection) {
                    messageboxSelection.notify();
                }
            }
        });

        // create text

        TextView message = new TextView(this);
        message.setGravity(Gravity.CENTER);
        message.setText(args.getString("message"));
        if (textColor != Color.TRANSPARENT) {
            message.setTextColor(textColor);
        }

        // create buttons

        int[] buttonFlags = args.getIntArray("buttonFlags");
        int[] buttonIds = args.getIntArray("buttonIds");
        String[] buttonTexts = args.getStringArray("buttonTexts");

        final SparseArray<Button> mapping = new SparseArray<Button>();

        LinearLayout buttons = new LinearLayout(this);
        buttons.setOrientation(LinearLayout.HORIZONTAL);
        buttons.setGravity(Gravity.CENTER);
        for (int i = 0; i < buttonTexts.length; ++i) {
            Button button = new Button(this);
            final int id = buttonIds[i];
            button.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    messageboxSelection[0] = id;
                    dialog.dismiss();
                }
            });
            if (buttonFlags[i] != 0) {
                // see SDL_messagebox.h
                if ((buttonFlags[i] & 0x00000001) != 0) {
                    mapping.put(KeyEvent.KEYCODE_ENTER, button);
                }
                if ((buttonFlags[i] & 0x00000002) != 0) {
                    mapping.put(KeyEvent.KEYCODE_ESCAPE, button); /* API 11 */
                }
            }
            button.setText(buttonTexts[i]);
            if (textColor != Color.TRANSPARENT) {
                button.setTextColor(textColor);
            }
            if (buttonBorderColor != Color.TRANSPARENT) {
                // TODO set color for border of messagebox button
            }
            if (buttonBackgroundColor != Color.TRANSPARENT) {
                Drawable drawable = button.getBackground();
                if (drawable == null) {
                    // setting the color this way removes the style
                    button.setBackgroundColor(buttonBackgroundColor);
                } else {
                    // setting the color this way keeps the style (gradient, padding, etc.)
                    drawable.setColorFilter(buttonBackgroundColor, PorterDuff.Mode.MULTIPLY);
                }
            }
            if (buttonSelectedColor != Color.TRANSPARENT) {
                // TODO set color for selected messagebox button
            }
            buttons.addView(button);
        }

        // create content

        LinearLayout content = new LinearLayout(this);
        content.setOrientation(LinearLayout.VERTICAL);
        content.addView(message);
        content.addView(buttons);
        if (backgroundColor != Color.TRANSPARENT) {
            content.setBackgroundColor(backgroundColor);
        }

        // add content to dialog and return

        dialog.setView(content);
        dialog.setOnKeyListener(new Dialog.OnKeyListener() {
            @Override
            public boolean onKey(DialogInterface d, int keyCode, KeyEvent event) {
                Button button = mapping.get(keyCode);
                if (button != null) {
                    if (event.getAction() == KeyEvent.ACTION_UP) {
                        button.performClick();
                    }
                    return true; // also for ignored actions
                }
                return false;
            }
        });

        dialog.show();
    }

    private final Runnable rehideSystemUi = new Runnable() {
        @Override
        public void run() {
            hideSystemBars(getWindow());
        }
    };

    public void onSystemUiVisibilityChange(int visibility) {
        if (SDLActivity.mFullscreenModeActive && ((visibility & View.SYSTEM_UI_FLAG_FULLSCREEN) == 0 || (visibility & View.SYSTEM_UI_FLAG_HIDE_NAVIGATION) == 0)) {

            Handler handler = getWindow().getDecorView().getHandler();
            if (handler != null) {
                handler.removeCallbacks(rehideSystemUi); // Prevent a hide loop.
                handler.postDelayed(rehideSystemUi, 2000);
            }

        }
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean clipboardHasText() {
        return mClipboardHandler.clipboardHasText();
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static String clipboardGetText() {
        return mClipboardHandler.clipboardGetText();
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static void clipboardSetText(String string) {
        mClipboardHandler.clipboardSetText(string);
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static int createCustomCursor(int[] colors, int width, int height, int hotSpotX, int hotSpotY) {
        Bitmap bitmap = Bitmap.createBitmap(colors, width, height, Bitmap.Config.ARGB_8888);
        ++mLastCursorID;

        if (Build.VERSION.SDK_INT >= 24 /* Android 7.0 (N) */) {
            try {
                mCursors.put(mLastCursorID, PointerIcon.create(bitmap, hotSpotX, hotSpotY));
            } catch (Exception e) {
                return 0;
            }
        } else {
            return 0;
        }
        return mLastCursorID;
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static void destroyCustomCursor(int cursorID) {
        if (Build.VERSION.SDK_INT >= 24 /* Android 7.0 (N) */) {
            try {
                mCursors.remove(cursorID);
            } catch (Exception e) {
            }
        }
        return;
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean setCustomCursor(int cursorID) {

        if (Build.VERSION.SDK_INT >= 24 /* Android 7.0 (N) */) {
            try {
                mSurface.setPointerIcon(mCursors.get(cursorID));
            } catch (Exception e) {
                return false;
            }
        } else {
            return false;
        }
        return true;
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean setSystemCursor(int cursorID) {
        int cursor_type = 0; //PointerIcon.TYPE_NULL;
        switch (cursorID) {
        case SDL_SYSTEM_CURSOR_DEFAULT:
            cursor_type = 1000; //PointerIcon.TYPE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_TEXT:
            cursor_type = 1008; //PointerIcon.TYPE_TEXT;
            break;
        case SDL_SYSTEM_CURSOR_WAIT:
            cursor_type = 1004; //PointerIcon.TYPE_WAIT;
            break;
        case SDL_SYSTEM_CURSOR_CROSSHAIR:
            cursor_type = 1007; //PointerIcon.TYPE_CROSSHAIR;
            break;
        case SDL_SYSTEM_CURSOR_PROGRESS:
            cursor_type = 1004; //PointerIcon.TYPE_WAIT;
            break;
        case SDL_SYSTEM_CURSOR_NWSE_RESIZE:
            cursor_type = 1017; //PointerIcon.TYPE_TOP_LEFT_DIAGONAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_NESW_RESIZE:
            cursor_type = 1016; //PointerIcon.TYPE_TOP_RIGHT_DIAGONAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_EW_RESIZE:
            cursor_type = 1014; //PointerIcon.TYPE_HORIZONTAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_NS_RESIZE:
            cursor_type = 1015; //PointerIcon.TYPE_VERTICAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_MOVE:
            cursor_type = 1020; //PointerIcon.TYPE_GRAB;
            break;
        case SDL_SYSTEM_CURSOR_NOT_ALLOWED:
            cursor_type = 1012; //PointerIcon.TYPE_NO_DROP;
            break;
        case SDL_SYSTEM_CURSOR_POINTER:
            cursor_type = 1002; //PointerIcon.TYPE_HAND;
            break;
        case SDL_SYSTEM_CURSOR_NW_RESIZE:
            cursor_type = 1017; //PointerIcon.TYPE_TOP_LEFT_DIAGONAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_N_RESIZE:
            cursor_type = 1015; //PointerIcon.TYPE_VERTICAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_NE_RESIZE:
            cursor_type = 1016; //PointerIcon.TYPE_TOP_RIGHT_DIAGONAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_E_RESIZE:
            cursor_type = 1014; //PointerIcon.TYPE_HORIZONTAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_SE_RESIZE:
            cursor_type = 1017; //PointerIcon.TYPE_TOP_LEFT_DIAGONAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_S_RESIZE:
            cursor_type = 1015; //PointerIcon.TYPE_VERTICAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_SW_RESIZE:
            cursor_type = 1016; //PointerIcon.TYPE_TOP_RIGHT_DIAGONAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_W_RESIZE:
            cursor_type = 1014; //PointerIcon.TYPE_HORIZONTAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_CONTEXT_MENU:
            cursor_type = 1001; //PointerIcon.TYPE_CONTEXT_MENU;
            break;
        case SDL_SYSTEM_CURSOR_HELP:
            cursor_type = 1003; //PointerIcon.TYPE_HELP;
            break;
        case SDL_SYSTEM_CURSOR_CELL:
            cursor_type = 1006; //PointerIcon.TYPE_CELL;
            break;
        case SDL_SYSTEM_CURSOR_VERTICAL_TEXT:
            cursor_type = 1009; //PointerIcon.TYPE_VERTICAL_TEXT;
            break;
        case SDL_SYSTEM_CURSOR_ALIAS:
            cursor_type = 1010; //PointerIcon.TYPE_ALIAS;
            break;
        case SDL_SYSTEM_CURSOR_COPY:
            cursor_type = 1011; //PointerIcon.TYPE_COPY;
            break;
        case SDL_SYSTEM_CURSOR_NO_DROP:
            cursor_type = 1012; //PointerIcon.TYPE_NO_DROP;
            break;
        case SDL_SYSTEM_CURSOR_GRAB:
            cursor_type = 1020; //PointerIcon.TYPE_GRAB;
            break;
        case SDL_SYSTEM_CURSOR_GRABBING:
            cursor_type = 1021; //PointerIcon.TYPE_GRABBING;
            break;
        case SDL_SYSTEM_CURSOR_COL_RESIZE:
            cursor_type = 1014; //PointerIcon.TYPE_HORIZONTAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_ROW_RESIZE:
            cursor_type = 1015; //PointerIcon.TYPE_VERTICAL_DOUBLE_ARROW;
            break;
        case SDL_SYSTEM_CURSOR_ALL_SCROLL:
            cursor_type = 1013; //PointerIcon.TYPE_ALL_SCROLL;
            break;
        case SDL_SYSTEM_CURSOR_ZOOM_IN:
            cursor_type = 1018; //PointerIcon.TYPE_ZOOM_IN;
            break;
        case SDL_SYSTEM_CURSOR_ZOOM_OUT:
            cursor_type = 1019; //PointerIcon.TYPE_ZOOM_OUT;
            break;
        }
        if (Build.VERSION.SDK_INT >= 24 /* Android 7.0 (N) */) {
            try {
                mSurface.setPointerIcon(PointerIcon.getSystemIcon(getContext(), cursor_type));
            } catch (Exception e) {
                return false;
            }
        }
        return true;
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static void requestPermission(String permission, int requestCode) {
        if (Build.VERSION.SDK_INT < 23 /* Android 6.0 (M) */) {
            nativePermissionResult(requestCode, true);
            return;
        }

        Activity activity = getContext();
        if (activity.checkSelfPermission(permission) != PackageManager.PERMISSION_GRANTED) {
            activity.requestPermissions(new String[]{permission}, requestCode);
        } else {
            nativePermissionResult(requestCode, true);
        }
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        boolean result = (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED);
        nativePermissionResult(requestCode, result);
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean openURL(String url)
    {
        try {
            Intent i = new Intent(Intent.ACTION_VIEW);
            i.setData(Uri.parse(url));

            int flags = Intent.FLAG_ACTIVITY_NO_HISTORY
                      | Intent.FLAG_ACTIVITY_MULTIPLE_TASK
                      | Intent.FLAG_ACTIVITY_NEW_DOCUMENT;
            i.addFlags(flags);

            mSingleton.startActivity(i);
        } catch (Exception ex) {
            return false;
        }
        return true;
    }

    /**
     * This method is called by native code / in-game menus to launch the interactive HUD layout editor.
     */
    
    public static void setSoftKeyboardVisible(final boolean visible) {
        if (mSingleton == null) return;
        mSingleton.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                InputMethodManager imm = (InputMethodManager) mSingleton.getSystemService(Context.INPUT_METHOD_SERVICE);
                if (visible) {
                    showTextInput(android.text.InputType.TYPE_CLASS_TEXT, 0, 0, 0, 0);
                    try {
                        if (imm != null) {
                            View target = mTextEdit != null ? mTextEdit : mSurface;
                            if (target != null) {
                                target.requestFocus();
                                imm.showSoftInput(target, InputMethodManager.SHOW_FORCED);
                                imm.toggleSoftInput(InputMethodManager.SHOW_FORCED, InputMethodManager.HIDE_IMPLICIT_ONLY);
                            }
                        }
                    } catch (Throwable ignored) {}
                } else {
                    if (mSingleton.commandHandler != null) {
                        mSingleton.commandHandler.sendEmptyMessage(COMMAND_TEXTEDIT_HIDE);
                    }
                    try {
                        if (imm != null) {
                            View target = mTextEdit != null ? mTextEdit : mSurface;
                            if (target != null) {
                                imm.hideSoftInputFromWindow(target.getWindowToken(), 0);
                            }
                        }
                    } catch (Throwable ignored) {}
                }
            }
        });
    }

    public static void onNativeWidescreenChanged(int mode) {
        if (mSingleton == null) return;
        mSingleton.mWidescreen = (mode != 0);
        try {
            mSingleton.getSharedPreferences(LauncherActivity.PREFS_NAME, Context.MODE_PRIVATE)
                .edit()
                .putBoolean(LauncherActivity.KEY_WIDESCREEN, mode != 0)
                .putInt("lotd_widescreen_mode", mode)
                .apply();
        } catch (Throwable ignored) {}
    }

    public static void openInGameSettings() {
        if (mSingleton != null) {
            mSingleton.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (mSingleton.mHudView != null) {
                        mSingleton.mHudView.showInGameSettingsDialog();
                    }
                }
            });
        }
    }
    public static void showVirtualKeyboard() {
        setSoftKeyboardVisible(true);
    }

    public static void openTouchEditor() {
        if (mSingleton != null) {
            mSingleton.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    try { nativeExecConsole("menu_active 0"); } catch (Throwable ignored) {}
                    if (mSingleton.mHudView != null) {
                        mSingleton.mHudView.mHudEditMode = true;
                        vibrateHaptic(25, 180);
                        android.widget.Toast.makeText(mSingleton, "Touch Controls Layout Editor: Drag buttons or pick claw presets!", android.widget.Toast.LENGTH_SHORT).show();
                        mSingleton.mHudView.invalidate();
                    }
                }
            });
        }
    }

    public static void openConsoleTerminal() {
        if (mSingleton != null) {
            mSingleton.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (mSingleton.mHudView != null) {
                        mSingleton.mHudView.showConsoleTerminal();
                    }
                }
            });
        }
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean showToast(String message, int duration, int gravity, int xOffset, int yOffset)
    {
        if(null == mSingleton) {
            return false;
        }

        try
        {
            class OneShotTask implements Runnable {
                private final String mMessage;
                private final int mDuration;
                private final int mGravity;
                private final int mXOffset;
                private final int mYOffset;

                OneShotTask(String message, int duration, int gravity, int xOffset, int yOffset) {
                    mMessage  = message;
                    mDuration = duration;
                    mGravity  = gravity;
                    mXOffset  = xOffset;
                    mYOffset  = yOffset;
                }

                public void run() {
                    try
                    {
                        Toast toast = Toast.makeText(mSingleton, mMessage, mDuration);
                        if (mGravity >= 0) {
                            toast.setGravity(mGravity, mXOffset, mYOffset);
                        }
                        toast.show();
                    } catch(Exception ex) {
                        Log.e(TAG, ex.getMessage());
                    }
                }
            }
            mSingleton.runOnUiThread(new OneShotTask(message, duration, gravity, xOffset, yOffset));
        } catch(Exception ex) {
            return false;
        }
        return true;
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static int openFileDescriptor(String uri, String mode) throws Exception {
        if (mSingleton == null) {
            return -1;
        }

        try {
            ParcelFileDescriptor pfd = mSingleton.getContentResolver().openFileDescriptor(Uri.parse(uri), mode);
            return pfd != null ? pfd.detachFd() : -1;
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return -1;
        }
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static boolean showFileDialog(String[] filters, boolean allowMultiple,
        int type, String initialPath, int requestCode) {
        if (mSingleton == null) {
            return false;
        }

        /* Convert string list of extensions to their respective MIME types (not needed for folder selection) */
        ArrayList<String> mimes = new ArrayList<>();
        MimeTypeMap mimeTypeMap = MimeTypeMap.getSingleton();
        if (filters != null && type != SDL_FILEDIALOG_OPENFOLDER) {
            for (String pattern : filters) {
                String[] extensions = pattern.split(";");

                if (extensions.length == 1 && extensions[0].equals("*")) {
                    /* Handle "*" special case */
                    mimes.add("*/*");
                } else {
                    for (String ext : extensions) {
                        String mime = mimeTypeMap.getMimeTypeFromExtension(ext);
                        if (mime != null) {
                            mimes.add(mime);
                        }
                    }
                }
            }
        }

        /* Handle the initial path, if set */
        Uri initialPathUri = null;

        if (initialPath != null && !initialPath.isEmpty()) {
            try {
                initialPathUri = Uri.parse(initialPath);
            } catch (Exception e) {
                Log.e(TAG, "Failed to parse initial path URI, ignoring initial path", e);
            }
        }

        boolean persistable = SDLActivity.nativeGetHintBoolean("SDL_ANDROID_ALLOW_PERSISTENT_FOLDER_ACCESS", false);

        /* Select the intent based on the type */
        String action;
        switch (type) {
            case SDL_FILEDIALOG_OPENFILE:
                action = Intent.ACTION_OPEN_DOCUMENT;
                break;
            case SDL_FILEDIALOG_SAVEFILE:
                action = Intent.ACTION_CREATE_DOCUMENT;
                allowMultiple = false;
                break;
            case SDL_FILEDIALOG_OPENFOLDER:
                action = Intent.ACTION_OPEN_DOCUMENT_TREE;
                break;
            default:
                Log.e(TAG, "Unsupported file dialog type: " + type);
                return false;
        }

        /* Prepare the intent with the proper values */
        Intent intent = new Intent(action);
        if (type != SDL_FILEDIALOG_OPENFOLDER) {
            intent.addCategory(Intent.CATEGORY_OPENABLE);
            intent.putExtra(Intent.EXTRA_ALLOW_MULTIPLE, allowMultiple);
            switch (mimes.size()) {
                case 0:
                    intent.setType("*/*");
                    break;
                case 1:
                    intent.setType(mimes.get(0));
                    break;
                default:
                    intent.setType("*/*");
                    intent.putExtra(Intent.EXTRA_MIME_TYPES, mimes.toArray(new String[]{}));
            }
        } else {
            int intent_flags = Intent.FLAG_GRANT_READ_URI_PERMISSION |
                Intent.FLAG_GRANT_WRITE_URI_PERMISSION;
            if (persistable) {
                intent_flags |= Intent.FLAG_GRANT_PREFIX_URI_PERMISSION |
                    Intent.FLAG_GRANT_PERSISTABLE_URI_PERMISSION;
            }
            intent.addFlags(intent_flags);
        }

        if (initialPathUri != null) {
            intent.putExtra(DocumentsContract.EXTRA_INITIAL_URI, initialPathUri);
        }

        /* Handle a suggested filename when saving */
        if (type == SDL_FILEDIALOG_SAVEFILE && initialPath != null && !initialPath.isEmpty() &&
            !initialPath.endsWith("/") && !initialPath.endsWith("\\")) {
            String title = initialPath;
            int lastSeparator = Math.max(title.lastIndexOf('/'), title.lastIndexOf('\\'));
            if (lastSeparator >= 0) {
                title = title.substring(lastSeparator + 1);
            }
            if (!title.isEmpty()) {
                intent.putExtra(Intent.EXTRA_TITLE, title);
            }
        }

        /* Display the file/folder dialog */
        try {
            mSingleton.startActivityForResult(intent, requestCode);
        } catch (ActivityNotFoundException e) {
            Log.e(TAG, "Unable to open dialog.", e);
            return false;
        }

        /* Save current dialog state */
        mFileDialogState = new SDLFileDialogState();
        mFileDialogState.requestCode = requestCode;
        mFileDialogState.type = type;
        mFileDialogState.persistable = persistable;

        return true;
    }

    /* Internal class used to track active file dialog */
    static class SDLFileDialogState {
        int requestCode;
        int type;
        boolean persistable;
    }

    /**
     * This method is called by SDL using JNI.
     */
    public static String getPreferredLocales() {
        String result = "";
        if (Build.VERSION.SDK_INT >= 24 /* Android 7 (N) */) {
            LocaleList locales = LocaleList.getAdjustedDefault();
            for (int i = 0; i < locales.size(); i++) {
                if (i != 0) result += ",";
                result += formatLocale(locales.get(i));
            }
        } else if (mCurrentLocale != null) {
            result = formatLocale(mCurrentLocale);
        }
        return result;
    }

    public static String formatLocale(Locale locale) {
        String result = "";
        String lang = "";
        if (locale.getLanguage() == "in") {
            // Indonesian is "id" according to ISO 639.2, but on Android is "in" because of Java backwards compatibility
            lang = "id";
        } else if (locale.getLanguage() == "") {
            // Make sure language is never empty
            lang = "und";
        } else {
            lang = locale.getLanguage();
        }

        if (locale.getCountry() == "") {
            result = lang;
        } else {
            result = lang + "_" + locale.getCountry();
        }
        return result;
    }
}

/**
    Simple runnable to start the SDL application
*/
class SDLMain implements Runnable {
    @Override
    public void run() {
        // Runs SDLActivity.main()

        try {
            android.os.Process.setThreadPriority(android.os.Process.THREAD_PRIORITY_DISPLAY);
        } catch (Exception e) {
            Log.v("SDL", "modify thread properties failed " + e.toString());
        }

        SDLActivity.nativeInitMainThread();
        SDLActivity.mSingleton.main();
        SDLActivity.nativeCleanupMainThread();

        if (SDLActivity.mSingleton != null && !SDLActivity.mSingleton.isFinishing()) {
            // Let's finish the Activity
            SDLActivity.mSDLThread = null;
            SDLActivity.mSDLMainFinished = true;
            SDLActivity.mSingleton.finish();
        }  // else: Activity is already being destroyed

    }
}

class SDLClipboardHandler implements
    ClipboardManager.OnPrimaryClipChangedListener {

    protected ClipboardManager mClipMgr;

    SDLClipboardHandler() {
       mClipMgr = (ClipboardManager) SDL.getContext().getSystemService(Context.CLIPBOARD_SERVICE);
       mClipMgr.addPrimaryClipChangedListener(this);
    }

    public boolean clipboardHasText() {
        if (Build.VERSION.SDK_INT >= 28 /* Android 9 (P) */) {
            return mClipMgr.hasPrimaryClip();
        } else {
            return mClipMgr.hasText();
        }
    }

    public String clipboardGetText() {
        ClipData clip = mClipMgr.getPrimaryClip();
        if (clip != null) {
            ClipData.Item item = clip.getItemAt(0);
            if (item != null) {
                CharSequence text = item.getText();
                if (text != null) {
                    return text.toString();
                }
            }
        }
        return null;
    }

    public void clipboardSetText(String string) {
        mClipMgr.removePrimaryClipChangedListener(this);
        if (string.isEmpty()) {
            if (Build.VERSION.SDK_INT >= 28 /* Android 9 (P) */) {
                mClipMgr.clearPrimaryClip();
            } else {
                ClipData clip = ClipData.newPlainText(null, "");
                mClipMgr.setPrimaryClip(clip);
            }
        } else {
            ClipData clip = ClipData.newPlainText(null, string);
            mClipMgr.setPrimaryClip(clip);
        }
        mClipMgr.addPrimaryClipChangedListener(this);
    }

    @Override
    public void onPrimaryClipChanged() {
        SDLActivity.onNativeClipboardChanged();
    }
}

