#include <stdio.h>

/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    // lower limit of temperature scale
    upper = 300;  // upper limit
    step = 20;    // step size

    printf("Celsius to Farenheit Conversion Table\n");
    printf("-------------------------------------\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        fahr = fahr + step;
    }
              
    return 0;
}