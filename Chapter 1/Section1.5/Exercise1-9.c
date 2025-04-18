/*Exercise 1-9 Write a program to copy its input to its output, replacing each sting of one or more blanks by a single blank.*/
#include <stdio.h>

// Count characters in input
int main(){
    // Declare int variables "c" - contains character inputted. "bs"-blank space flag 
    int c,bs;
    bs = 0; //bs is a flag that represents  
}






/*
Reads characters one-by-one.

Tracks whether the last character you read was a space.

If you see a space, you only print the first one.

If more spaces come after it, you just ignore them.

When you hit a non-space character again, you start printing everything normally again — and if a space comes after that, it's a new "first space", so you print that one.
*/