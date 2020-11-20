# SEmi STatic Blog

## Introduction

## Build

sestblog can be build using docker or directy in your environment.

### Build using docker

```
./build_docker.sh
```

### Build in the environtment

To build sestblog the following dependencies are required:
* cmake
* git
* g++-10 or greater

After install them you can run:
```
cmake -H. -Bbuild
cmake --build build
```

or

```
./build.sh
```
