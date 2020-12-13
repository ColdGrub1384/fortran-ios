# fortran-ios
A script that acts like a Fortran compiler that uses Flang to build sources for iOS arm64.

## Installation

Install [Docker](https://docs.docker.com/docker-for-mac/install/) and open it to run the daemon.
`gfortran` in `/usr/local/bin` is also recommended because if `-arch arm64` is not passed to the script, it will use `gfortran`.

Python 3 is also required.

You can build the project by running `./build.sh` but it will take some time, so you can just [download the release](https://github.com/ColdGrub1384/fortran-ios/releases/download/v2.0/fortran-ios-macos-x86_64.zip).

## Usage

```bash
$ "<path/to/fortran-ios/bin/gfortran>" -arch arm64 -c test.f -o test.o
$ file test.o
test.o: Mach-O 64-bit object arm64
```

Then, link `share/ios_flang_runtime.framework` to your app that uses objects compiled with this project.

## How it works

The [flang](https://github.com/flang-compiler/flang) compiler doesn't seem to officially support macOS, at least the version that can generate LLVM IR.
So this project uses a Docker container with `flang` in it and compiles the given source into LLVM IR. Then, outside the container, `llc` compiles the LLVM IR into an object file.

The `ios_flang_runtime` framework contains the symbols needed at runtime by the Fortran object files to work. So an app containing Fortran code must link this framework.
`llc` needs to be compiled from [here](https://github.com/flang-compiler/classic-flang-llvm-project) to understand IR produced by `flang`.

The script is called `gfortran` so you can add the project to `$PATH` to build projects.

## What worked with this

- SciPy
- Lapack
