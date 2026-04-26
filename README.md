# Project README

## Overview
This project is a simple C application that demonstrates the use of a custom memory allocator. It includes functionalities to allocate, free, and print memory blocks.

## Features
- Custom Memory Allocator (`Allocator` struct)
- Functions for allocating (`Allocator_BAlloc`) and freeing (`Allocator_BFree`) memory blocks.
- Functionality to print the current state of the allocator (`Allocator_Print`).
- Support for different platforms via separate Makefiles (Linux, Windows, Wine, WebAssembly).

## Project Structure
### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
The project is built using a set of Makefiles tailored to different target environments.

### Linux
To build for Linux:
```bash
cd <Project>
make -f Makefile.linux all
```
Run the application:
```bash
./build/Main
```

### Windows
To build for Windows:
```bash
cd <Project>
make -f Makefile.windows all
```
Run the application:
```bash
wine build/Main.exe  # If running on Linux using Wine
```

### Wine
For building on Linux but targeting Windows executables, use:
```bash
make -f Makefile.wine all
```
Run the Windows executable:
```bash
wine build/Main.exe
```

### WebAssembly
To build for WebAssembly:
```bash
cd <Project>
make -f Makefile.web all
```
Execute with Emscripten's `wasmtime`:
```bash
wasmtime build/Main.wasm
```

These steps ensure that the project is built and executed according to the target platform's requirements.