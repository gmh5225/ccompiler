#!/bin/bash

set -e

clang-format src/*.cpp src/*.hpp -i

BUILD_DIR=build

mkdir -p "$BUILD_DIR"

cd "$BUILD_DIR"

cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=1
ln -sf "$BUILD_DIR"/compile_commands.json ..

make

cd ..

clear

./"$BUILD_DIR"/ccomp examples/foo.c # "$@"
