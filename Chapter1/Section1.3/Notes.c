// Notes for section 1.3
/*
The for statement is a loop, a generalization of the while. 
*/

// Farhenheit-Celcius Table using while loop.
# include <stdio.h>
void while_loop(){
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("Fahr, Celcius\n");
    while(fahr <= upper){
        celsius = (5.0/9.0) *(fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

// Farhenheit-Celcius Table using for loop
void for_loop(){
    int fahr;
    
    printf("Fahr, Celcius\n");
    for (fahr = 0; fahr<= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
       
}

int main(){
    while_loop();
    printf("<---------------------->\n");
    for_loop();
    return 0;
}
/*
    The choice between while and for is arbitrary ("based on random choice or personal whim"), based on which seems clearer. 
    The for is usually appropriate for loops in which the intialization and incremenet are single statements and logically related.

*/