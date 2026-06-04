## 🛠️ Prerequisites

- **C++20** compiler (MSVC, GCC or Clang).
- **CMake 3.28+**
- **Git** for cloning and FetchContent.

## 📂 Project Structure

```
vscode-cpp/
├── CMakeLists.txt
└── main.cpp
```

## ⚡ Building the Project

```bash
git clone https://github.com/aguirregonzaloa/vscode-cpp.git
cd vscode-cpp
cmake -B Build -D CMAKE_BUILD_TYPE=Debug
cmake --build Build --config Debug -j
```
