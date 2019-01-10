# smec_online_tool

## Prerequisites
- MinGW if you are using windows
- CMake (for windows: https://github.com/Kitware/CMake/releases/download/v3.13.2/cmake-3.13.2-win64-x64.msi)
- git (https://git-scm.com/downloads)

Check that all these tools are added to path. Open the terminal and check the following commands:
- `git --version`
- `gcc --version`
- `cmake --version`
- `make` or `mingw32-make`

## Build and Test
Note: Check cmake --help to see the available generators on your platform

Checkout the first_lesson branch
`git clone --recursive https://github.com/BharathTalloju/smec_online_tool.git -b first_lesson`

### On Windows
- Go to any build folder.
`cd build` or `cd first_lesson/build`
- Generate Makefiles
`cmake ..` or `cmake -G MinGW Makefiles ..`
- Make
`mingw32-make`

### On OSX
- Go to any build folder.
`cd build` or `cd first_lesson/build`
- Generate Makefiles
`cmake ..` or `cmake -G Unix Makefiles ..`
- Make
`make`

### On Unix
- Go to any build folder.
`cd build` or `cd first_lesson/build`
- Generate Makefiles
`cmake ..` or `cmake -G Unix Makefiles ..`
- Make
`make`


For running the tests, run: `ctest --verbose`
