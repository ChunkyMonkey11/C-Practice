#include <stdio.h>

int main() {
    int c;
    
    while ((c = getchar()) != EOF) {
        printf("c = %d, getchar() != EOF = %d\n", c, (c != EOF));
    }

    printf("Final value of c = %d, (c != EOF) = %d\n", c, (c != EOF));
    
    return 0;
}