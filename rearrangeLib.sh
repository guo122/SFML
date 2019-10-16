#!/bin/bash

cd "$(dirname "$0")"

mkdir ../../bin 2>/dev/null
mkdir ../../bin/macos 2>/dev/null
mkdir ../../bin/macos/Debug 2>/dev/null

cp -f Solution/macOS/lib/Debug/libsfml* ../../bin/macos/Debug 2>/dev/null
#cp -f Solution/macOS/lib/Debug/libsfml-audio-d.dylib ../../bin/macos/Debug 2>/dev/null
#cp -f Solution/macOS/lib/Debug/libsfml-graphics-d.dylib ../../bin/macos/Debug 2>/dev/null
#cp -f Solution/macOS/lib/Debug/libsfml-network-d.dylib ../../bin/macos/Debug 2>/dev/null
#cp -f Solution/macOS/lib/Debug/libsfml-system-d.dylib ../../bin/macos/Debug 2>/dev/null
#cp -f Solution/macOS/lib/Debug/libsfml-window-d.dylib ../../bin/macos/Debug 2>/dev/null
