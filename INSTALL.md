## General building information
In order to build atowers, you will need to have both SDL and CMake installed.

## Building on GNU/Linux

Follow these steps to build and run atowers:

```
 mkdir build
 cd build
  cmake ..
  make
  ./atowers
```

You can run 'make install' with root privileges to install the project
globally, but doing so is not recommended.

## Building for Windows (MinGW)

### Install CMake
From [CMake website](http://www.cmake.org/cmake/resources/software.html) download the latest binary distribution and install it.

### Install SDL
Download the latest development library for Mingw32 (also valid for 64 bit) from [SDL''s official website](http://www.libsdl.org).

From the package extract the following:

 1. From bin/ directory, extract SDL.dll and sdl-config to somewhere that PATH variable can find, preferably to the bin/ directory of MinGW installation
 2. From include/ directory, extract SDL directory to the include/ directory of MinGW installation
 3. From lib/ directory, extract all files to the lib/ directory of MinGW installation

Follow these steps to build and run atowers:

```
 mkdir build
 cd build
  cmake -G"Unix Makefiles" -DSDL_LIBRARY="mingw32;SDLmain;SDL;-lpthread" ..
  make ./atowers
```
