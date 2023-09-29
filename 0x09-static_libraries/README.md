# Static Library README

#STEP 1: CREATING STATIC LIBRARIES

This quiz assesses your knowledge of static libraries in C programming. You'll be working with a static library named `libmy.a` that contains various C functions. Follow these steps to complete the quiz:

1. Implement the provided C functions in the `libmy.a` library. If any functions are missing, create empty ones with the correct prototypes.

2. Use the following commands to compile the functions and create the static library:

   ```bash
   gcc -c main.c -o main.o
   ar rcs libmy.a main.o

#STEP 2: EXAMINE LIBRARY CONTENTS

Use the ar command with the -t flag to list the object files contained within the library:
	ar -t libmy.a

Use the nm command to inspect the symbols (functions and variables) within the library:
	nm libmy.a

#STEP 3: TEST THE LIBRARY
The main.c file contains a sample program that uses functions from the libmy.a library. Compile and run the program to ensure it works correctly:
	gcc main.c -o quote -lmy
	./quote

