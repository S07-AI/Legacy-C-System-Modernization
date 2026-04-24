#include "sExtension.h"

// Begins here: (PP and LZ)
void quadraticFormula (int a, int b, int c) {
    double result;
    double subtraction;
    double x1;
    double x2;
    double determinant;

    subtraction = (b*b)-((4*c)*a);
    if (subtraction >= 0) {
        determinant = sqrt(subtraction);
        if (determinant == 0) {
        result = (((b*-1) + determinant)) / (2*a);
        printf ("Root = %.2lf \n", result);
        }
        else {
            x1 = (((b*-1) + determinant)) / (2*a);
            x2 = (((b*-1) - determinant)) / (2*a);
            printf ("First root = %.2lf \nSecond root = %.2lf \n", x1, x2);
        }
    }
    else if (subtraction < 0) {
        printf("No roots found\n");
    }
}
void printFibonacci (int index) {
    int fibonacci[11] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    if (index == 0) {
        printf("0: \n");
    }
    for (int i = 0; i < index; i++) {
        printf ("%d: ", fibonacci[i]);
        for (int j = 0; j < fibonacci[i]; j++) {
            printf ("* ");
        }
        printf ("\n");
    }
}
double roots (double value, double root) {
    double result;
    result = pow (value, (1.0/root));
    return result;
}

// Ends here: (PP and LZ)