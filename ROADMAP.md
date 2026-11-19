# LandOfTheDroid - Project Roadmap

This document outlines the development milestones, current active objectives, and future planned features for **LandOfTheDroid** (the native Android port of *Land of the Dead: Road to Fiddler's Green*).

---

## Milestone Overview

```
Phase 1: Core Port & Stability (Completed - v1.0.0)
     │
     ▼
Phase 2: Refinements & Customization (Active Focus - v1.1.0)
     │
     ▼
Phase 3: Multiplayer & LAN Co-Op (Planned - v1.2.0)
     │
     ▼
Phase 4: Advanced Modernizations (Future Research)
```

---

## Phase 1: Core Port & Essential Features (Completed - v1.0.0)

- [x] **Native ARM64 Core**: High performance C recompilation executing natively on 64-bit ARM (`arm64-v8a`) architecture.
- [x] **GLES3 Rendering Pipeline**: Custom OpenGL ES 3.0 renderer replacing legacy DirectX 8/9, supporting dynamic lights, skeletal vertex skinning, and projection decals.
- [x] **Post-Processing Enhancements**:
  - [x] AMD FidelityFX Contrast Adaptive Sharpening (CAS).
  - [x] Multi-level FXAA anti-aliasing (Low, Medium, High, Ultra).
  - [x] Cinematic color grading filters (Romero Zombie Green, High Contrast Noir, Bleached Apocalypse, Warm Sunset).
  - [x] Authentic 4:3 Boxed Pillarboxed aspect ratio alongside modern Hor+ widescreen.
- [x] **Touch Interface & Controls**:
  - [x] Dual-zone virtual thumbstick with separated progressive sprint threshold to prevent accidental sprinting.
  - [x] High-precision camera aim surface with sensitivity tuning.
  - [x] Visual in-game Touch Controls Layout Editor.
  - [x] Physical Bluetooth and USB gamepad plug-and-play support.
- [x] **In-Engine Settings Integration**:
  - [x] Video, Audio, Controls, and Mobile XHYN Settings tabs.
  - [x] In-engine Cheats menu (God Mode, Weapons, Kung Fu, Slomo, Ghost, Walk, Chapter Warps, Console terminal).
  - [x] Direct Cheats button integrated into the single-player pause menu.
  - [x] Proximity Auto-Pickup and empty magazine Auto-Reload.
- [x] **Audio & Cinematics**:
  - [x] 3D positional audio via OpenAL and streaming SDL3 audio backend.
  - [x] Cutscene video decoding via embedded FFmpeg with screen-tap skip support.
- [x] **Mods & Community Maintenance**:
  - [x] Built-in 1-tap custom map installer for `.dz` and `.zip` archives.
  - [x] Public release signing keystore and documentation for seamless community updates.
  - [x] Automated GitHub Actions CI/CD pipeline for native compilation and release APK packaging.

---

## Phase 2: Mobile Refinements & Customization (Active Focus - v1.1.0)

- [ ] **Dynamic HUD Customization**:
  - [ ] Global Touch Button Opacity slider in XHYN Settings (adjust visibility from 10% to 100%).
  - [ ] Per-button sizing slider in the Touch Controls Layout Editor.
  - [ ] Auto-hide HUD option when an external physical gamepad is connected.
- [ ] **Gamepad & Input Polish**:
  - [ ] Deadzone and outer threshold calibration sliders for physical thumbsticks.
  - [ ] Preset controller layouts (Xbox, PlayStation, Nintendo Switch Pro, Razer Kishi).
- [ ] **Display & Graphics Options**:
  - [ ] Ultra-wide 20:9 and 21:9 aspect ratio HUD safe-area bounds configuration.
  - [ ] Frame time graph and lightweight micro-benchmark telemetry display option.
- [ ] **Audio & Immersion**:
  - [ ] Configurable haptic rumble vibration intensity curve.

---

## Phase 3: Multiplayer & LAN Co-Op (Planned - v1.2.0)

- [ ] **Wi-Fi LAN Peer-to-Peer Play**:
  - [ ] Verification and testing of 8-player co-op campaign and invasion survival over local Wi-Fi.
  - [ ] Direct IP connection shortcut with clipboard paste integration.
- [ ] **Server Browser Enhancements**:
  - [ ] Automatic LAN broadcast discovery for local games without needing manual IP entry.
  - [ ] In-game ping latency and player count indicators.

---

## Phase 4: Advanced Modernizations (Future Research)

- [ ] **Vulkan Rendering Backend**:
  - [ ] Exploration of Vulkan compute and graphics rendering using SDL3 GPU abstractions.
- [ ] **High-Resolution Asset Support**:
  - [ ] Community HD texture pack loader and dynamic mipmap generation.
- [ ] **Dynamic Resolution Scaling**:
  - [ ] Dynamic resolution scaler for sustained thermal performance on budget and mid-range devices.

---

## Contributing to the Roadmap

Community contributions are welcome. If you are interested in working on any of the roadmap items or proposing new features:
1. Review the [MODDING.md](MODDING.md) guide for UnrealScript development instructions.
2. Check existing issues or open a new proposal using the [Feature Request Template](.github/ISSUE_TEMPLATE/feature_request.md).
3. Submit a pull request adhering to the [Pull Request Template](.github/PULL_REQUEST_TEMPLATE.md).
