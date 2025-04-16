/* Modify the temperature conversion program to print the table in reverse order, that is from 300 dergrees to 0.*/
#include<stdio.h>
void for_loop(){

    int fahr;
    
    printf("Fahr, Celcius\n");
    // Starts from The upper bound and decreases value of fahr as loop continues until <= 0.
    for (fahr = 300; fahr>= 0; fahr = fahr -20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
    
int main(){
    // Function call to the for loop function.
    for_loop();
}