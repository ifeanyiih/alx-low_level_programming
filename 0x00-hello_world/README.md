# 0x00-hello_world
This directory contains projects based learning files which introduce low level programming concepts using C.
Below is a list of the files and a brief description with it.

---

- **0-preprocessor**: This script runs a C file through the preprocessor and save the result into another file.
- **1-compiler**: This script compiles a C file without linking it.
- **2-assembler**: This script generates the assembly code of a C code and save it in an output file.
- **3-name**: This script compiles a C file and creates an executable named `cisfun`
- **4-puts.c**: This C program prints exactly "Programming is like building a multilingual puzzle\n"
	- Uses the function puts
- **5-printf.c**: This C program prints exactly "with proper grammar, but the outcome is a piece of art," followed by a new line.
	- Uses the function printf
	- Returns 0
	- Compiles without warning when using the `-Wall gcc` option.
- **6-size.c**: This C program prints the size of various types on the computer it is compiled and run on.
	- Returns 0
	- I installed the package `libc6-dev-i386` to test the `-m32 gcc` option

