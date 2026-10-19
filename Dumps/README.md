# DNLauncher.exe Decompiled Code Dump

Dumped live from Ghidra (`DNLauncher.exe`, PE32 x86) on 2026-10-18 23:37:00.

## 1. Summary
- **Binary**: `DNLauncher.exe`
- **Total Functions**: 4312
- **Decompiler**: Ghidra 12.1.4 C Decompiler

## 2. Organization
- **`Launcher/`**: 836 decompiled functions belonging to custom application logic (`0x00401000` - `0x00430000`).
  - Includes `CDnLauncherApp`, `CDnLauncherDlg`, `CDnPatchInfo`, `CDnPatchThread`, `CDnOptionDlg`, `CDnOptionData`, `CDnServiceModule`, etc.
- **`Utility/`**: 1133 decompiled functions for common libraries (`0x00430000` - `0x00460000`).
  - Includes `CEtFileSystem`, `StringUtil`, `MD5`, `tinyxml`, `zlib`, `CxImage`.
- **`MFC_CRT/`**: 2343 decompiled functions for standard runtime (`0x00460000`+).
- **`Launcher_All.c`**: Consolidated C source of all 836 launcher functions.
- **`Utility_All.c`**: Consolidated C source of all 1,133 utility functions.
- **`DNLauncher_Complete_Decompilation.c`**: Complete single-file dump of all 4312 functions.
- **`functions_index.csv`**: Master index of all functions with address, name, category, and file paths.
- **`metadata/`**: PE headers, segments, imports, and exports in JSON.
