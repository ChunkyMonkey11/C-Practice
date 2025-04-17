/*Write a program to count blanks,tabs, and newlines.*/
#include<stdio.h>
/* Count lines in input*/
main(){
    int c, nl,bl,t;

    nl = 0;
    bl = 0;
    t = 0;
    while((c = getchar()) != EOF){
        // Check if character is a newline.
        if (c == '\n'){
            ++nl;
        }
        // Check if  character is a blank
        if (c == ' '){
            ++bl;
        }
        // Check if charcter is a tab
        if (c == '\t'){
            ++t;
        }
        // Just for my own testing purposes I am adding an if statement to break out of the loop.
        if (c == 'b'){
            break;
        }
    }
    printf("Newlines: %d, Blanks: %d, Tabs: %d\n", nl, bl, t);
    return 0;
}