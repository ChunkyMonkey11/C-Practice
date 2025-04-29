/*
Program uses formula C = (5/9)(F-32)
This will be used to print a table of Fahrenheit tempature table and their
centigrad or Celcius Equivalenets:
*/

#include <stdio.h>
/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */
int main(){
    int fahr, celcius;
    int lower,upper, step;

    lower = 0; // Lower limt of temperature table
    upper = 300; // Upper limit
    step = 20; // step size

    fahr = lower;
    while(fahr <= upper) {
        celcius = 5 * (fahr-32) /9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }
}
/*
    Notes from section
    -In C all variables must be declared before they are used, usually at the beginning of the function or before any executable statemenets.
        
    char                : character- a single byte
    short               : short integer
    long                : long integer
    double executable   : double -precision floating point

    -Size of objects are machine-dependent
    -While loop operates like this:
     while(condition){
        ...
     }
     The condition in paranthesis is tested. If it i strue the body of the loop is exexcuted.
     This gets repeated and the condition is again tested until it is no longer true. 

     Body of a while loop can be one or more statements enclosed in braces:
     while(i<j)
        i= 2 * i;

    5/9 would truncate to 0
    but 5.0 / 9.0 would not.
    
*/