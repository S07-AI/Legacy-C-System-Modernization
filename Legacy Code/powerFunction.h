// Begins here (LZ)

#include <stdio.h>

/* 
    This function is used to calculate the power of a number.
    The function takes the parameters base and power, and the function will return result calculated from base^power. 
*/

double powerFn(double base, int power){
    // Declare variables 
    double result = 1;
    int count;

    // Loop calculates base^power
    for(count = 1; count <= power; count++){
        result *= base;
    }

    return result;
}
// Ends here (LZ)
