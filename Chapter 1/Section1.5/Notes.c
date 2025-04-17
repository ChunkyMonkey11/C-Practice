/*
'A' is a character constant; in the ASCII character set it's value is 65
This is important to realize because '\n' is also repersented in the ASCII character set 10 is the integer value.
*/ 
// Code to use as base for Exercises for section 1.5.2
// This program counts input lines. Counting lines is just counting new lines since input text stream appears as a sequence of lines.

#include <stdio.h>
/* count lines in input */
main(){
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF){
        if (c != '\n'){
            ++nl;
        }
    }
    printf("%d\n", nl);
    return 0;
}