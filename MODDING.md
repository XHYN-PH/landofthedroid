# LandOfTheDroid - UnrealScript Development & Modding Guide

This guide explains how to modify, develop, and recompile UnrealScript packages (`.u`) for **LandOfTheDroid**, as well as how to create and install custom maps and community modifications.

---

## 1. UnrealScript Architecture Overview

*Land of the Dead: Road to Fiddler's Green* is powered by a customized build of **Unreal Engine 2 (build 2226 base)**. 

While the low-level rendering, input shims, and native C functions run via `libmain.so`, all high-level gameplay rules, weapon behaviors, HUD elements, menus, settings tabs, and cheat systems are executed by the UnrealScript Virtual Machine (VM) from compiled bytecode packages (`.u` files):

| Package | Source Location | Description |
| :--- | :--- | :--- |
| **`DOTZMenu.u`** | `ucc_env/DOTZMenu/Classes/` | In-game menus, Video/Audio/Controls settings, Mobile XHYN settings, Touch layout editor, and Cheats page. |
| **`DOTZWeapons.u`** | `ucc_env/DOTZWeapons/Classes/` | Weapon classes, weapon animations, firing modes, projectile logic, and the Kung Fu melee system. |
| **`BBGui.u`** | `ucc_env/BBGui/Classes/` | Core GUI framework widgets, buttons, combo boxes, and sliders. |
| **`DOTZEngine.u`** | `ucc_env/EngineExport/` | Player controller shims, camera perspectives, and input hooks. |

---

## 2. Setting Up the Compilation Toolchain

UnrealScript compilation is performed using the 32-bit Windows commandlet compiler `UCC.exe`.

### Prerequisites on Linux

- **Wine** (x86 / 32-bit compatible)
- Standard Linux utilities (`make`, `python3`)

```bash
sudo apt-get update
sudo apt-get install -y wine wine32
```

Configure a 32-bit Wine prefix if needed:
```bash
export WINEARCH=win32
export WINEPREFIX=~/.wine32
wineboot --init
```

---

## 3. Modifying and Compiling UnrealScript Packages

The source classes are located in `ucc_env/`:
- Menus & Cheats: `ucc_env/DOTZMenu/Classes/*.uc`
- Weapons & Kung Fu: `ucc_env/DOTZWeapons/Classes/*.uc`

### Step 1: Edit the Source Code

For example, to modify the Cheats menu, open and edit:
`ucc_env/DOTZMenu/Classes/DOTZCheatsSettings.uc`

To adjust the Kung Fu fists attack behavior, open and edit:
`ucc_env/DOTZWeapons/Classes/KungFuWeapon.uc`

### Step 2: Configure Package Order (`make.ini`)

The compiler builds packages sequentially based on dependencies defined under `[Editor.EditorEngine]` in `ucc_env/System/make.ini`:

```ini
[Editor.EditorEngine]
EditPackages=Core
EditPackages=Engine
EditPackages=Fire
EditPackages=IPDrv
EditPackages=Gameplay
EditPackages=GUI
EditPackages=DOTZEngine
EditPackages=DOTZGame
EditPackages=DOTZItems
EditPackages=BBGui
EditPackages=DOTZMenu
EditPackages=DOTZWeapons
```

> [!NOTE]
> `UCC make` only compiles packages whose corresponding `.u` file does not exist in `ucc_env/System/`. Before compiling, ensure you delete or move the old `.u` file so the compiler detects that a rebuild is required.

### Step 3: Run the UCC Compiler

Run the compiler from inside `ucc_env/System/`:

```bash
cd ucc_env/System
# Remove the old compiled package to trigger recompilation
rm -f DOTZMenu.u

# Execute UCC make via Wine
wine UCC.exe make -ini=make.ini
```

If compilation succeeds, the new bytecode package will be generated at:
`ucc_env/System/DOTZMenu.u`

---

## 4. Deploying Custom Packages to the Android Build

1. Copy your newly compiled `.u` file into the Android project's assets:
   ```bash
   cp ucc_env/System/DOTZMenu.u SDL3/android-project/app/src/main/assets/System/DOTZMenu.u
   ```

2. Rebuild the Android APK:
   ```bash
   cd SDL3/android-project
   ./gradlew assembleRelease
   ```

3. **Automatic Deployment to Device**:
   When the Android APK is launched on a device, `SDLActivity.java` automatically checks the assets against the existing files on the device storage (`/sdcard/LandOfTheDead/System/`). If the asset version is newer or different, it automatically extracts and updates the files on device storage without requiring manual file copying.

---

## 5. Custom Maps & Levels

LandOfTheDroid supports custom maps made by the community for the PC version of *Land of the Dead*:

- **Map Format**: Standard Unreal Engine 2 map packages (`.dz` or `.unr`).
- **Placement Directory**: `/sdcard/LandOfTheDead/Maps/`
- **1-Tap In-Game Installer**:
  1. Download any community `.dz` or `.zip` map file to your device's `Downloads/` directory.
  2. Launch LandOfTheDroid.
  3. Open the side drawer or Mods utility.
  4. Tap **1-TAP INSTALL** to automatically scan, extract, and deploy the map directly into the game's map directory.
- **Loading Maps**:
  Open the in-engine console (via the Cheats tab or pause menu) and enter:
  ```
  open MapFileName
  ```
