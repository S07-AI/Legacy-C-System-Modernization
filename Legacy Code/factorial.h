#include <stdio.h>
#include <stdint.h>

/* Code Refactored by Brooke Stephanos */


    // function will return a very large whole number that cannot be negative
 unsigned long long int fact(int factInput){    /*Factorial function inefficient for values after 20*/
    
        unsigned long long int fact;
        int factIndex;
        fact = 1;

        //this loop allows for the multiplication of the factorial result until it reaches the end
        for(factIndex = factInput; factIndex > 0; factIndex--){
            fact *= factIndex;
        }
        //returns the last final factorial stored in fact 
        return fact;
    }

