# vcpkg overlay ports (dev-overlay branch)

Local build setup for Traditional Chinese (zh-TW). Not meant for `master`.

| Port | Source | Pinned commit |
|---|---|---|
| `arcdps-unofficial-extras` | `m21248074/arcdps_unofficial_extras_releases` | `5191229f6f4422a911da3621d56b79462bab7091` |
| `arcdps-extension` | `m21248074/arcdps-extension` | `08b7411ab205a24ca61c7d2d1e8c3dce89d68bab` |

Both forks add Traditional Chinese (`Language::TChinese`, `UE_TRANSLATIONS_TCHINESE`) which the registry versions don't have.

## Build

```bat
set VCPKG_ROOT=<path to vcpkg>
set VCPKG_OVERLAY_PORTS=<repo>\vcpkg-overlay\ports
cmake --preset release-windows -DCMAKE_CXX_FLAGS="/DWIN32 /D_WINDOWS /EHsc /utf-8"
cmake --build --preset release-windows
```

`/utf-8` is required, see below.

## Why `/utf-8`

Translations are UTF-8 and some are used as `std::format` format strings (`ET_UpdateDesc`). Without `/utf-8`
MSVC checks format strings against the system code page. On a double-byte code page (e.g. 950, Traditional
Chinese) this throws `Invalid encoded character in format string.` and the addon crashes as soon as the language is
switched to Traditional Chinese.

`std::vformat` is inline, so the flag has to be set for **both** the addon and arcdps-extension (the linker keeps only
one copy). The `arcdps-extension` overlay port already adds it for the library; the addon needs it via
`CMAKE_CXX_FLAGS` as shown above.

## Updating

When one of the forks changes, update `REF` and `SHA512` in the matching `portfile.cmake`:

```sh
curl -sL -o x.tar.gz https://github.com/<owner>/<repo>/archive/<commit>.tar.gz
sha512sum x.tar.gz
```
