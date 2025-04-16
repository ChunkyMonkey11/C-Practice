// SYMBOLIC CONSTANTS
/*
Code below is from section 1.3 and will be our base code before using Symbolic Constants.
#include<stdio.h>
void for_loop(){

    int fahr;
    
    printf("Fahr, Celcius\n");
    // Starts from The upper bound and decreases value of fahr as loop continues until <= 0.
    for (fahr = 0; fahr<=300; fahr = fahr +20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

Notes:
    A #define line defines a symbolic name or symbolic constant to be a [articular string of characters:
    "#define name replacement text"
    -The name will be a placeholder for the value 
    -Once somthing is defined using #define it can no longer be changed or redefined unless you used #undef
    -No semicolon after the 

*/
#include <stdio.h>
#define LOWER  0
#define UPPER 300
#define STEP 20


main(){
    // we dont predefine this since it does change.
    int fahr;
    for(fahr = LOWER; fahr<= UPPER; fahr = fahr + STEP){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

}