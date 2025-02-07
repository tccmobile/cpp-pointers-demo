# C++ Pointer Demonstration Project

## Overview
Educational project demonstrating pointer concepts in C++, including:
- Basic pointer operations
- Dynamic memory allocation
- Pointer arithmetic
- Common pitfalls and solutions
- Smart pointers
- Function pointers

## Requirements
- CMake 3.10+
- C++17 compatible compiler
- Visual Studio Code (optional)
- Docker (for container development)

## Quick Start

### Local Build (macOS)
```bash
# Install prerequisites
brew install cmake llvm

# Build project
mkdir build && cd build
cmake ..
make

# Run
./pointer_demo