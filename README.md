# LandOfTheDroid

Native Android port of *Land of the Dead: Road to Fiddler's Green* (Unreal Engine 2).

## Overview

LandOfTheDroid brings the classic 2005 survival horror FPS *Land of the Dead: Road to Fiddler's Green* to modern Android devices. Built using native 64-bit ARM compilation (`arm64-v8a`), modern SDL3 runtime, `sdl2-compat`, and FFmpeg cutscene decoding.

## Features

- **Native ARM64 Execution**: High performance C recompilation core with GLES3 rendering backend.
- **Custom Touch HUD**:
  - Virtual movement stick with separated progressive sprint threshold to prevent accidental activation.
  - Look and aim touch surface with smooth rotational panning.
  - Responsive action buttons (Fire, Alt Fire, Jump, Crouch, Reload, Next Weapon, Prev Weapon, Flashlight, Kick/Kung Fu).
  - Tahoma styled HUD typography and customizable layout positioning.
- **In-Engine Settings Menu**:
  - **Video**: Resolution selector (720p, 900p, 1080p), Gamma slider, Detail levels, Shadows, FXAA Anti-Aliasing (Off, Low, Medium, High, Ultra), Post-FX Color Grading (Normal, Romero Zombie Green, High Contrast Noir, Bleached Apocalypse, Warm Sunset), HDR/Bloom, real-time FOV slider (70-120), Target FPS cap (30, 60, 90, 120, Unlimited), AMD CAS Sharpening (FidelityFX), and True 4:3 Boxed Aspect Ratio mode.
  - **Audio**: Dedicated sliders for Music and Sound Effects volume, Dual Rumble Haptic Feedback, and low-health muffled audio simulation.
  - **Controls**: Full keybinding configurations, Look Sensitivity adjustment slider, and Invert Look toggle.
  - **XHYN Settings**: On-screen Touch Controls Layout editor, Auto Sprint, and Auto-Pickup / Auto-Use proximity interaction.
  - **Cheats Menu**: Direct in-engine toggles for God Mode, Loaded / All Weapons & Ammo, Kung Fu Fists, Kill All Zombies, Fly / Ghost / Walk mode, Slomo Bullet-Time, Behindview 3rd-person camera, Campaign Chapter Warps, and an integrated console terminal.
- **Pause Menu Integration**: Cheats access button directly integrated into the single-player pause menu.
- **Storage & Mod Support**: Built-in 1-tap custom map (.dz and .zip) extraction, save backup and restore manager, and servers browser.

## Requirements

- Android device running Android 7.0 (Nougat, API level 24) or higher.
- 64-bit ARM processor (`arm64-v8a`).
- Original PC game assets of *Land of the Dead: Road to Fiddler's Green*.

## Asset Installation

1. Install `LandOfTheDead-Android.apk` on your Android device.
2. Grant Storage permission when requested by the launcher.
3. Copy the game asset folders from your PC installation into `/sdcard/LandOfTheDead/` (or `/storage/emulated/0/LandOfTheDead/`):
   - `Animations/`
   - `Audio/`
   - `Cinematics/`
   - `Help/`
   - `KarmaData/`
   - `Levels/`
   - `Meshes/`
   - `Saves/`
   - `System/`
   - `Textures/`
4. The APK comes pre-packaged with updated engine bytecode (`DOTZMenu.u`, `DOTZWeapons.u`, `DOTZEngine.u`) and fonts, which are verified and deployed into `System/` automatically upon launch.
5. Launch the game from your app drawer and press **LAUNCH GAME**.

## Building from Source

### Prerequisites

- Android NDK (r26b or newer)
- Android SDK (API 34)
- CMake 3.22+
- JDK 17
- Ninja or Make

### 1. Compile Native Library (libmain.so)

```bash
mkdir -p build_android && cd build_android
cmake -DCMAKE_TOOLCHAIN_FILE="${ANDROID_NDK_ROOT}/build/cmake/android.toolchain.cmake" \
      -DANDROID_ABI=arm64-v8a \
      -DANDROID_PLATFORM=android-24 \
      -DCMAKE_BUILD_TYPE=Release ..
make -j$(nproc)
cp libmain.so ../SDL3/android-project/app/libs/arm64-v8a/
cd ..
```

### 2. Build the Android APK

```bash
cd SDL3/android-project
./gradlew assembleRelease
```

The signed release APK will be generated at:
`SDL3/android-project/app/build/outputs/apk/release/app-release.apk`

## License & Credits

- Ported to Android by **XHYN-PH**.
- Original game developed by Brainbox Games and published by Groove Games (2005).
- Powered by Unreal Engine 2 by Epic Games.
- SDL3 and sdl2-compat by libsdl-org.
- FFmpeg by the FFmpeg team.
- C recompilation base inspired by `lotd-webport` by un4ckn0wl3z.
