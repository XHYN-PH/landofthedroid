# Frequently Asked Questions (FAQ) & Troubleshooting Guide

---

## General Questions

### Q: What is LandOfTheDroid?
**A**: LandOfTheDroid is a native, source-level Android port of the 2005 survival horror FPS *Land of the Dead: Road to Fiddler's Green* (powered by Unreal Engine 2). It runs natively on 64-bit ARM processors with OpenGL ES 3.0 graphics, custom touch controls, and in-engine settings.

### Q: Is this running through an emulator like Wine, Box64, or Mobox?
**A**: **No.** LandOfTheDroid is compiled directly to native 64-bit ARM machine code (`arm64-v8a`) using SDL3 and modern C shims. It does not run an emulator, x86 translation layer, or virtual machine.

### Q: What are the system requirements?
**A**:
- **CPU**: 64-bit ARM processor (`arm64-v8a`). 32-bit only devices are not supported.
- **RAM**: **3 GB RAM minimum**, with **4 GB to 6 GB+ RAM recommended** for stable frame pacing and background caching.
- **OS**: Android 7.0 (Nougat, API 24) or newer.
- **Storage**: ~2.5 GB free internal storage for game asset files.

---

## Installation & Setup

### Q: Where do I get the game data files?
**A**: You must supply your own copy of the PC retail release of *Land of the Dead: Road to Fiddler's Green*. From your PC installation directory, copy the following 10 folders:
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

### Q: Where do I copy the folders on my Android device?
**A**: Place all 10 folders directly into:
```
/sdcard/LandOfTheDead/
```
*(On modern Android versions, this is identical to `/storage/emulated/0/LandOfTheDead/`).*

### Q: The app closes immediately when I tap "LAUNCH GAME". What should I do?
**A**:
1. **Check Storage Permissions**: Ensure LandOfTheDroid has permission to access device storage. On Android 11+, grant the "All Files Access" permission when prompted.
2. **Verify File Placement**: Open your device's file manager and ensure that `/sdcard/LandOfTheDead/` contains the game folders (especially `System/` and `Levels/`). Make sure the files are not nested inside an extra subfolder (e.g., `/sdcard/LandOfTheDead/LandOfTheDead/`).
3. **Inspect Crash Logs**: Check `/sdcard/LandOfTheDead/port.log` and `/sdcard/LandOfTheDead/crash.log` to see the exact missing file or error.

---

## Gameplay & Controls

### Q: How do I customize the on-screen touch button layout?
**A**:
1. In the main menu or pause screen, navigate to **Settings > XHYN Settings**.
2. Tap **`[ CONFIGURE TOUCH CONTROLS LAYOUT >> ]`**.
3. Drag any button or stick to your desired position on screen.
4. Tap **SAVE & EXIT** to lock in your custom layout.

### Q: Can I play with a physical Bluetooth or USB controller?
**A**: **Yes.** LandOfTheDroid supports standard Android gamepads (Xbox Series/One, PlayStation DualShock 4 / DualSense, Razer Kishi, GameSir, and standard HID controllers) via SDL3. Analog sticks and buttons map automatically. You can customize button bindings in **Settings > Controls**.

### Q: How do I skip cutscenes?
**A**: Simply tap anywhere on the screen during a cutscene to skip it.

### Q: How do I access Cheats during gameplay?
**A**: Cheats can be activated in two ways:
1. **Pause Menu**: Press the physical back button or tap the in-game pause button, then tap **CHEATS** directly below Quit.
2. **Settings**: Navigate to **Settings > Cheats** to toggle God Mode, Loaded / All Weapons & Ammo, Kung Fu Fists, Kill All Zombies, Fly, Ghost, Walk, Slomo, Behindview 3rd-person camera, or Chapter Warps.

---

## Graphics & Performance Tuning

### Q: How do I enable 60, 90, or 120 FPS?
**A**:
1. Open **Settings > Video**.
2. Locate the **Target FPS** option and select `60 FPS`, `90 FPS`, `120 FPS`, or `Unlimited`.
3. Tap **APPLY CHANGES**.

### Q: What is AMD CAS Sharpening?
**A**: AMD FidelityFX Contrast Adaptive Sharpening (CAS) is an integrated post-processing filter that enhances edge clarity without introducing visual noise or taxing battery life. You can enable or disable it in **Settings > Video** or **Settings > XHYN Settings**.

### Q: How do I enable the classic 4:3 aspect ratio?
**A**: In **Settings > Video**, toggle **Aspect Ratio** between `True Hor+ Widescreen` and `Classic 4:3 Boxed`.

### Q: The game stutters or drops frames on my budget device. What should I change?
**A**:
- In the Android launcher before starting the game, select `1280x720` resolution.
- In **Settings > Video**, set **Detail Level** to `Low` or `Medium`.
- Set **Anti-Aliasing** to `Disabled` or `FXAA Low`.
- Set **Target FPS** to `30 FPS` or `60 FPS` for consistent thermal pacing.

---

## Modding & Custom Content

### Q: How do I install custom maps?
**A**:
1. Download community `.dz` or `.zip` map archives to your device's `Downloads/` directory.
2. In the game launcher or side drawer, tap **1-TAP INSTALL** to automatically extract and place them into `/sdcard/LandOfTheDead/Maps/`.
3. To load a custom map, open the console and type:
   ```
   open MapName
   ```

### Q: How do I backup my save files?
**A**: In the launcher, go to the Utility tab and tap **Backup Saves** to create a timestamped `.zip` archive of your campaign progress in `/sdcard/LandOfTheDead/`.
