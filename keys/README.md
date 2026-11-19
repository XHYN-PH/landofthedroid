# Community Release Signing Key

This directory contains the public release signing keystore used to sign official `LandOfTheDroid` Android APK release builds.

Making this release key available allows community developers, modders, and maintainers to compile updates, bug fixes, or enhancements that retain identical cryptographic signatures, allowing users to install community builds directly as seamless updates over previous releases without having to uninstall the game or lose existing save files.

---

## Keystore Details

| Property | Value |
| :--- | :--- |
| **Keystore File** | `lotd-release.keystore` |
| **Keystore Format** | PKCS12 |
| **Keystore Password** | `lotdandroid` |
| **Key Alias** | `lotd` |
| **Key Password** | `lotdandroid` |
| **Key Algorithm** | RSA 4096-bit (`SHA384withRSA`) |
| **Validity** | Valid until April 2, 2054 |

---

## Certificate Fingerprints

- **SHA-256**:
  ```
  E2:3B:BA:6F:4B:CF:46:DD:5B:1E:59:96:A7:BF:50:B2:5B:61:86:52:6C:43:62:20:40:CA:93:AF:AD:6F:14:AD
  ```
- **SHA-1**:
  ```
  A6:B5:27:EA:18:01:80:31:5F:90:EF:44:AF:E8:87:25:92:28:EC:A7
  ```

---

## Usage in Gradle Builds

The Android project at `SDL3/android-project/app/build.gradle` is pre-configured to use this keystore for release builds:

```groovy
android {
    signingConfigs {
        release {
            storeFile file('../lotd-release.keystore')
            storePassword 'lotdandroid'
            keyAlias 'lotd'
            keyPassword 'lotdandroid'
            v1SigningEnabled true
            v2SigningEnabled true
        }
    }
    buildTypes {
        release {
            signingConfig signingConfigs.release
            minifyEnabled false
        }
    }
}
```

Running `./gradlew assembleRelease` inside `SDL3/android-project` will automatically sign the output APK with these credentials.
