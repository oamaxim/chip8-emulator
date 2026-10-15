# Chip8 Emulator

A CHIP-8 emulator written in modern C++20, with a core that is fully separate from SDL so it can be unit tested without a window.

## Status

Work in progress. The project skeleton and build pipeline are in place; there is no emulation yet.

## Building

Requires CMake 3.20+ and a C++20 compiler (MSVC from the Visual Studio Build Tools, or MinGW-w64).

```bash
cmake -S . -B build
cmake --build build
```

Run the executable from the `build` folder (on Windows with MSVC it is under `build/Debug/` or `build/Release/`).

## Licence

MIT. See [LICENSE](LICENSE).