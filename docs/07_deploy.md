# Deployment Guide

This guide describes the standard operating procedure (SOP) to configure, build, and run the project from a clean clone.

## Prerequisites

Before building the project, ensure your environment meets the following requirements:
- **Git:** Installed and configured in the system PATH.
- **C++ Compiler:** A compiler supporting **C++23** features (e.g., GCC 13+, Clang 16+, or MSVC 2022+).
- **CMake:** Version 3.25 or higher installed.
- **Build Tool:** Make (Linux/macOS) or Ninja/MSVC (Windows) linked with CMake.

---

## Clean-Start Procedure

Follow these ordered steps to set up and build the project from scratch.

### 1. Configure the Build Directory
Initialize the CMake build environment from the repository root to generate the required build files:
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release

```

### 2. Build the Project

Compile the C++ source files and generate the executable binary target:

```bash
cmake --build build

```

### 3. Run Verification Tests

Execute all unit, integration, and automated verification tests using CTest to ensure system stability:

```bash
ctest --test-dir build

```

---

## Execution & Usage Example

Once the build completes successfully, the command-line interface (CLI) executable will be located inside the `build/` directory.

### Running the System

Provide the target sum and the input list of numbers via the command-line arguments:

```bash
./build/twosum --target 9 --nums 2,7,11,15

```

*(Note: On Windows systems using MSVC, the path will be `.\build\Release\twosum.exe` depending on your build generator).*

### Expected Output

```json
[0, 1]

```

---

## Supported Environments

* **Windows 11:** Full compatibility (tested with MSVC 2022)
* **macOS:** Full compatibility (tested with Apple Clang)
* **Linux (Ubuntu 22.04+):** Full compatibility (tested with GCC 13)

## Troubleshooting

* **Compiler Not Found:** If CMake fails to find a valid compiler, ensure your C++23 compiler path is correctly added to the system `PATH` environment variable.
* **Cache Conflicts / Clean Build:** To clean previous build artifacts or fix configuration cache issues, safely delete the `build/` directory and re-run the configuration step:
```bash
rm -rf build

```
