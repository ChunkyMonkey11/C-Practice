#include <stdio.h>
// Write a program that prints its input one word per line.
/*
That means:

You are not stopping at the first word — you keep reading until end of input (EOF).

You are not just echoing the input line-by-line — you're splitting the input into individual words.

You treat each “word” as a sequence of characters that is not whitespace.

When you hit a space, tab, or newline, that ends the current word, and you print a newline.
*/
int print_one_word_per_line(){
    int c;
    int in_word = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            putchar(c);
            in_word = 1;
        } else if (in_word == 1) {
            putchar('\n');
            in_word = 0;
        }
    }
    return 0;
}