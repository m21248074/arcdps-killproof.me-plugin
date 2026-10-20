# CLAUDE.md

arcdps addon that loads killproof.me data (kill proofs, coffers, ...) for the squad and shows it ingame as a table.
Upstream is `knoxfighter/arcdps-killproof.me-plugin`. This repo is a fork with Traditional Chinese (zh-TW) support.

> This file lives on the `dev-overlay` branch only (see "Branches"). It is not meant for `master` / upstream.

## Layout (`killproof_me/`)

| File | What |
|---|---|
| `dllmain.cpp` | arcdps entry points (`get_init_addr`, `mod_init`, `mod_imgui`, `mod_combat`, `mod_wnd`, `mod_release`), unofficial-extras subscription (`language_changed_callback`) |
| `Killproofs.h/.cpp` | `Killproof` enum, killproof.me item id -> enum mapping, `toStringShort/Long` |
| `Player.h/.cpp` | per-player data, fetches `https://killproof.me/api/kp/...` (curl) |
| `KillproofUI*.cpp/.h`, `KillproofUITable.*` | the window and its table; `COLUMN_SETUP` in `KillproofUITable.h` defines the columns |
| `Settings.*`, `SettingsUI.*` | settings, stored in `addons\arcdps\arcdps_killproof.me.json` (nlohmann-json) |
| `Lang.h/.cpp` | translation keys (`KillproofMeTranslations`, `KMT_*`) and one table per language |
| `Icons.h`, `icons.rc`, `icons/*.png`, `resource.h` | icons are embedded as resources |

Libraries (vcpkg): arcdps-extension (Localization, UpdateChecker, settings widgets), arcdps-unofficial-extras, imgui,
nlohmann-json, magic-enum, curl, modern-ini. The Zinn-o-Matics registry (`vcpkg-configuration.json`) provides
arcdps-extension, arcdps-unofficial-extras, imgui and modern-ini.

## Build

Windows, MSVC, CMake >= 4.2, vcpkg, x64-windows-static (see `CMakePresets.json`).

```bat
set VCPKG_ROOT=<path to vcpkg>
set VCPKG_OVERLAY_PORTS=<repo>\vcpkg-overlay\ports
cmake --preset release-windows
cmake --build --preset release-windows
```

Output: `cmake-build/release-windows/d3d9_arcdps_killproof_me.dll`. The first build is slow (vcpkg builds openssl, curl, ...).
A freshly linked exe can fail with "Access is denied" for a few seconds (antivirus scan), retry.

## Branches

- `master`: upstream + zh-TW translations.
- `dev-overlay`: `master` + `vcpkg-overlay/` + `/utf-8` in `CMakeLists.txt` (+ this file). The overlay replaces
  arcdps-unofficial-extras and arcdps-extension with the owner's forks, which add zh-TW:
  `Language::TChinese`, `UE_TRANSLATIONS_TCHINESE`. The ports pin the forks by commit; update `REF` and `SHA512` in the port
  after pushing a fork. More in `vcpkg-overlay/README.md`.
- Keep `dev-overlay` up to date by merging `master` into it.

## Translations

- Languages: en, fr, de, es, zh-tw. Settings store the language as a code string (`language2`, e.g. `zh-tw`) or
  `Lang::LikeGame`; an old numeric `language` field is migrated in `Settings.cpp`.
- Each table in `Lang.cpp` must contain every `KMT_*` key: `static_assert`s compare the sizes of all tables with the
  English one. A key added upstream (e.g. a new boss) breaks the build until zh-TW has it too.
- zh-TW style: `中文名(English)`, e.g. `齊拉(Kela)`, `波浪總管齊拉 挑戰模式(Kela, Seneschal of Waves CM)`. Don't invent official
  game names, ask the owner.
- `Lang.cpp` is UTF-8 **with BOM**, CRLF in the working tree (`core.autocrlf=true`). Keep the BOM and use `u8"..."` literals.
- Upstream typos, leave them: `KMT_MinisterLi_Short` is duplicated in the German table and `KMT_Harvest_Short` in the French
  one (their `_Long` is missing).

## Adding a new killproof entry (checklist, based on the Vloxx commit)

1. `Killproofs.h`: new `Killproof` enum value(s) and the killproof.me item id(s) in the id -> enum `switch`.
2. `Killproofs.cpp`: `toStringShort` / `toStringLong`.
3. `Lang.h` + `Lang.cpp`: new `KMT_*` keys in **all five** tables, including zh-TW.
4. `KillproofUITable.h`: column(s) in `COLUMN_SETUP`.
5. Icon: `icons/<name>.png`, `icons.rc`, `resource.h`, `Icons.h` (`generate_icon_list`).

## `/utf-8` is required

Some translations are used as `std::format` format strings (`ET_UpdateDesc` in arcdps-extension). Without `/utf-8` MSVC checks
them against the system code page, and on a double-byte one (cp950, Traditional Chinese) it throws `Invalid encoded
character in format string.` The addon then dies with `0xC0000409` as soon as the language is switched to zh-TW.
`std::vformat` is inline, so the flag must be set for **both** the addon (`CMakeLists.txt`, `add_compile_options`) and
arcdps-extension (the overlay port sets `VCPKG_CXX_FLAGS`); the linker keeps only one copy.

## Testing without the game

[`arcdps_mock`](https://github.com/m21248074/arcdps_mock) (fork with a CJK font and exception logging) loads an addon dll
as a fake arcdps host: `ArcdpsMockProgram.exe d3d9_arcdps_killproof_me.dll`. Killproof data needs killproof.me and the
squad, so the table stays mostly empty; the settings tab and the language switch are testable.

- `ARCDPS_MOCK_FONT`: CJK font file (default `C:\Windows\Fonts\msjh.ttc`).
- `ARCDPS_MOCK_TRACE=1`: log every thrown exception with a stack trace to `arcdps_mock_exceptions.log`. Use it when the
  process dies with `0xC0000409` (uncaught exception).
