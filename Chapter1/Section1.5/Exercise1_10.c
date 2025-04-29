/*Write a program to copy its input to its output, replacing each tab by t, each backspace by \b and each backslash by \\. This makes tabs and backspaces in an unambigous way.*/
/*The task is to read every character from the input, and:

If it is a tab character ('\t'), you should output the two-character sequence:
\ followed by t — so it prints \\t, making the tab visible as text.

If it is a backspace ('\b'), you should print \\b.

If it is a backslash ('\\'), print \\\\ to make it visible as a literal backslash.

For all other characters, just print them normally.*/
#include <stdio.h>
#include <stdio.h>
// 
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }
    return 0;
}
