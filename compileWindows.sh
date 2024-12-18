#!/bin/bash

x86_64-w64-mingw32-g++ -o main.exe main.cpp   -I./SDL2-2.30.8/x86_64-w64-mingw32/include   -L./SDL2-2.30.8/x86_64-w64-mingw32/lib   -lmingw32 -lSDL2main -lSDL2   -Wl,-subsystem,console   -static-libstdc++ -static-libgcc
