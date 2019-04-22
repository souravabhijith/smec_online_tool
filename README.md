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

## Build
Note: Check cmake --help to see the available generators on your platform

Checkout the first_lesson branch
`git clone --recursive https://github.com/BharathTalloju/smec_online_tool.git -b first_lesson`

### On Windows
- Go to any build folder.
`cd build` or `cd first_lesson/build`
- Generate Makefiles
`cmake .` or `cmake -G MinGW Makefiles .`
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

### Testing
- Go to the build folder of any lesson.
`cd first_lesson/build`
- Build the files if you haven't already.
`cmake .;make`
- To run all tests:
`ctest --verbose`
- To run specific tests:
`ctest -R <test name>`
- To list out all available tests:
`ctest -N`

The test output is also logged in Testing/Temporary/LastTest.log


Pending
1.Change build dir