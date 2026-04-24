// Shayan Safaei Worked From Lines 0 - 150
// It is now from Lines 3 to 213
// Begins Here (SS)
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926535897932384626433832795
#include "factorial.h"
#include "matrices.h"
#include "powerFunction.h"
#include "sExtension.h"
#include "conversions.h"
#include <string.h>
#include "drawGraph.h"

FILE *help;

/*
This function is a custom input reader that safely keeps asking for a float until the user types one correctly.
Parameters: char*inname
Returns: key
*/
float input(char *inName)
{
    float key;
    char temp[9999];

    do
    {
        printf("%s", inName);
        if (!scanf("%f", &key))
        {
            scanf("%s", temp); // read the bad input into temp
            printf("Please try again!\n");
        }
        else
        {
            return key;
        }
    } while (1);
}

/*
This function is also a custom input reader that safely keeps asking for a float until the user types one correctly AND adds numbering to the prompt
Parameters: char*inname, int num
Returns: key
*/
float inputAry(char *inName, int num)
{
    float key;
    char temp[9999];

    do
    {
        printf("%s[%d]: ", inName, num + 1);
        if (!scanf("%f", &key))
        {
            scanf("%s", temp);
            printf("Please try again!\n");
        }
        else
        {
            return key;
        }
    } while (1);
}

/*
This function is used to add two float values into result
Parameters: float adder, float addin
Returns: result
*/
float plus(float adder, float addin) {
    float result = adder + addin;
    drawGraph(adder, addin, result, '+');
    return result;
}

/*
This function is used to subtract two float values into result
Parameters: float miner, float minin
Returns: result
*/
float minus(float miner, float minin) {
    float result = miner - minin;
    drawGraph(miner, minin, result, '-');
    return result;
}

/*
This function is used to multiply two float values into result
Parameters: float multer, float multin
Returns: result
*/
float mult(float multer, float multin) {
    float result = multer * multin;
    drawGraph(multer, multin, result, 'x');
    return result;
}

/*
This function is used to divide two float values into result
Parameters: float divider, float dividin
Returns: result
*/
float divind(float divider, float dividin) {
    float result = divider / dividin;
    drawGraph(divider, dividin, result, '/');
    return result;
}

/*
This function recursively finds the factorial of the integer value chosen
Parameters: int term
Returns: term*factorial(term - 1), 1
*/
int factorial(int term)
{
    if (term == 0)
    {
        return 1;
    }
    return term * factorial(term - 1);
}

/*
This function recursively finds the fibonacci sequence of the int value chosen
Parameters: int term
Returns: fib(term - 1) + fib(term - 2), 1, 0
*/
int fib(int term)
{
    if (term == 1)
    {
        return 0;
    }
    if (term == 2)
    {
        return 1;
    }
    return fib(term - 1) + fib(term - 2);
}

/*
This function takes the float as a base and a integer as a power to complete exponenation
Parameters: float base, int pow
Returns: mem
*/
float power(float base, int pow)
{
    int powCounter; // changed the variable to have more meaning than just i
    float mem = 1;
    for (powCounter = 0; powCounter < pow; powCounter++)
    {
        mem *= base;
    }
    return mem;
}

/*
This function takes the radius float variable to replicate the sine law of trigonometry
Parameters: float radius
Returns: sin
*/
float sine(float radius)
{
    float val;
    float sin;
    val = radius * (PI / 180);
    sin = val - (power(val, 3) / factorial(3)) + (power(val, 5) / factorial(5)) - (power(val, 7) / factorial(7));
    return sin;
}

/*
This function takes the radius float variable to replicate the cosine law of trigonometry
Parameters: float radius
Returns: cos
*/
float cosine(float radius)
{
    float val;
    float cos; // created into own variable
    val = radius * (PI / 180);
    cos = 1 - (power(val, 2) / factorial(2)) + (power(val, 4) / factorial(4)) - (power(val, 6) / factorial(6));
    return cos;
}

/*
This function prints an integer equation
Parameters: char*screen, char*sym, int ini, int res
Returns: 0
*/
int spprint(char *screen, char *sym, int ini, int res)
{
    printf("%s %d%s = %d\n", screen, ini, sym, res);
    return 0;
}

/*
This function prints a floating point equation with 4 decimal places in the same format
Parameters: char*screen, char*sym, float ini, float res
Returns: 0
*/
float spprintf(char *screen, char *sym, float ini, float res)
{
    printf("%s %.4f%s = %.4f\n", screen, ini, sym, res);
    return 0;
}

/*
This function is a float calculator printer that displays the full operation
Parameters: char*screen, char*sym, float ini, float upt, float res
Returns: 0
*/
float print(char *screen, char *sym, float ini, float upt, float res)
{
    printf("%s %.4f %s %.4f = %.4f\n", screen, ini, sym, upt, res);
    return 0;
}

/*
This function dsplays the answer only
Parameters: char*screen, float ans
Returns: 0
*/
float Aryprint(char *screen, float ans)
{
    printf("%s : %.4f\n", screen, ans);
    return 0;
}
// Ends Here (SS)

/* Prototypes */ //(SS & BN)
float rectangleArea(float length, float width);
float circleArea(float radius);
float triangleArea(float base, float height);

float cubeVolume(float length, float width, float height);
float sphereVolume(float radius);

float rectanglePerim(float length, float width);
float trianglePerim(float a, float b, float c);
float circlePerim(float radius);

float rectanglePrismSA(float length, float width, float height);
/* Uses triangle perimeter (a,b,c) and triangle area via base/height */
float trianglePrismSA(float a, float b, float c, float base, float height, float lengthPrism);
float sphereSA(float radius);

/* Implementations */
float rectangleArea(float length, float width)
{
    return length * width;
}

float circleArea(float radius)
{
    return PI * radius * radius;
}

float triangleArea(float base, float height)
{
    return 0.5f * base * height;
}

/* Volumes */
float cubeVolume(float length, float width, float height)
{
    return length * width * height;
}

float sphereVolume(float radius)
{
    return (4.0f / 3.0f) * PI * radius * radius * radius;
}

/* Perimeters / Circumference */
float rectanglePerim(float length, float width)
{
    return 2.0f * (length + width);
}

float trianglePerim(float a, float b, float c)
{
    return a + b + c;
}

float circlePerim(float radius)
{
    return 2.0f * PI * radius;
}

/* Surface areas */
float rectanglePrismSA(float length, float width, float height)
{
    return 2.0f * (width * length + height * length + height * width);
}

float trianglePrismSA(float a, float b, float c, float base, float height, float lengthPrism)
{
    float triPerim = trianglePerim(a, b, c);
    float triArea = triangleArea(base, height);
    return triPerim * lengthPrism + 2.0f * triArea;
}

float sphereSA(float radius)
{
    return 4.0f * PI * radius * radius;
}
//Ends Here: (SS & BN)

/*
Begins here: (PP)
This is the main function that controls and displays the menu for the various calculators
Parameters: int argc, char*argv[]
Returns: the function returns 0 if the program ran successfully
*/
int main(int argc, char *argv[])
{
    // All the variables used in this function, excluding the counter variables, are declared here
    float a;
    float b;
    float c;
    float r1;
    float r2;
    double root;
    double powerTo;
    double base;
    int menu;
    int rmenu;
    int smenu;
    int gmenu;
    int gsmenu;

    // This is the do-while loop that runs displays the main menu
    // It runs until the user chooses to exit
    do
    {
        printf("\n======\n");
        printf("Menu\n");
        printf("======\n");
        printf("1.Regular Calculator\n");
        printf("2.Scientific Calculator\n");
        printf("3.Acountant Calculator\n");
        printf("4.Read Help and Notice\n");
        printf("5.Geometry Calculator\n");
        printf("0.Exit\n");
        menu = input("Select Menu: "); // input main menu
        system("clear");

        // Regular Calculator
        if (menu == 1) {
            // Regular Calculator Menu
            do {
                printf("\n======================\n");
                printf("Regular Calculator Menu\n");
                printf("=======================\n");
                printf("1.PLUS\n");
                printf("2.MINUS\n");
                printf("3.MULTIPLY\n");
                printf("4.DIVIDE\n");
                printf("5.QUADRATIC FORMULA\n"); // First extension function
                printf("6.PRINT FIBONACCI SEQUENCE\n"); // Second extension function
                printf("7.ROOTS\n"); // Third extension function
                printf("0.BACK\n");
                rmenu = input("Select Menu: ");//input regular  menu
                system("clear");

                // Basic ops (keep graphing behavior via drawGraph in helpers)
                if (rmenu == 1) {
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    c = plus(a, b);
                    printf("\n");
                    print("Result:", "+", a, b, c);
                }
                if (rmenu == 2) {
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    c = minus(a, b);
                    printf("\n");
                    print("Result:", "-", a, b, c);
                }
                if (rmenu == 3) {
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    c = mult(a, b);
                    printf("\n");
                    print("Result:", "x", a, b, c);
                }
                if (rmenu == 4) {
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    c = divind(a, b);
                    printf("\n");
                    print("Result:", "/", a, b, c);
                }

                // Begins here: (PP and LZ extensions)
                // this is the first extension function by Palak and Luisa
                // It computes the quadratic formula using the values the user provides
                if(rmenu == 5) {
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    c = input("Enter value 3 rd: ");
                    quadraticFormula(a,b,c);
                }
                // this is the second extension function by Palak and Luisa
                // It displays the graph of the fibonacci sequence for the number of terms entered by the user
                if(rmenu == 6) {
                    a = input("Enter the number of terms for the graph (0-11): ");
                    printFibonacci(a);
                }
                // this is the third extension function by Palak and Luisa
                // It computes the root of a value entered by the user
                if(rmenu == 7) {
                    base = input("Enter base value: ");
                    powerTo = input("Enter root value: ");
                    root = roots(base, powerTo);
                    printf("\n");
                    printf("Result: %.2lf \n", root);
                }
                // Ends here: (PP and LZ extensions)

            } while (rmenu != 0);
        }

        // Scientific Calculator
        if (menu == 2){
            // Scientific Calculator Menu
            do {
                printf("\n===========================\n");
                printf("Scientific Calculator Menu\n");
                printf("===========================\n");
                printf("1.Power function (x^y)\n");
                printf("2.Factorial Series (x!)\n");
                printf("3.Fibonacci Series \n");
                printf("4.Sine (Sin x)\n");
                printf("5.Cosine (cos x)\n");
                printf("6.Tangent (Tan x)\n");
                printf("7.Cosec (cosec x)\n");
                printf("8.Sec (sec x)\n");
                printf("9.Cot (cot x)\n");
                printf("10.Matrix functions\n");
                printf("11.Conversion functions\n");
                printf("0.Back\n");
                smenu = input("Select Menu: ");
                system("clear");
                // The power of a number is calculated here if option 1 is chosen
                if(smenu == 1){
                    a = input("Enter base(x): ");
                    b = input("Enter power(y): ");
                    c = powerFn(a,b);
                    printf("\n");
                    print("result of","^",a,b,c);
                }
                // The factorial of a number is calculated here if option 2 is chosen
                if(smenu == 2){
                    a = input("Enter numbers of term: ");
                    c = fact(a);
                    printf("\n");
                    spprint("Factorial of","!",a,c);
                }
                // The fibonacci sequence numbers are calculated here if option 3 is chosen
                if(smenu == 3){
                    a = input("Enter numbers of term: ");
                    c = fib(a);
                    printf("\n");
                    spprint("Fibonacci of"," ",a,c);
                }
                // The sine of a number is calculated here if option 4 is chosen
                if(smenu == 4){
                    a = input("Enter your value: ");
                    c = sine(a);
                    printf("\n");
                    spprintf("Sine of"," ",a,c);
                }
                // The cosine of a number is calculated here if option 5 is chosen
                if(smenu == 5){
                    a = input("Enter your value: ");
                    c = cosine(a);
                    printf("\n");
                    spprintf("Cosine of"," ",a,c);
                }
                // The tangent of a number is calculated here if option 6 is chosen
                if(smenu == 6){
                    a = input("Enter your value: ");
                    r1 = sine(a);
                    r2 = cosine(a);
                    c = r1/r2;
                    printf("\n");
                    spprintf("Tangent of"," ",a,c);
                }
                // The cosecant of a number is calculated here if option 7 is chosen
                if(smenu == 7){
                    a = input("Enter your value: ");
                    c = sine(a);
                    printf("\n");
                    spprintf("Cosec of"," ",a,1/c);
                }
                // The secant of a number is calculated here if option 8 is chosen
                if(smenu == 8){
                    a = input("Enter your value: ");
                    c = cosine(a);
                    printf("\n");
                    spprintf("Sec of"," ",a,1/c);
                }
                // The cotangent of a number is calculated here if option 9 is chosen
                if(smenu == 9){
                    a = input("Enter your value: ");
                    r1 = sine(a);
                    r2 = cosine(a);
                    c = r1/r2;
                    printf("\n");
                    spprintf("Cot of"," ",a,1/c);
                }
                // The matrix functions are done here if option 10 is chosen
                if(smenu == 10){
                    int operation_number = 0;
                    printf("\n\t\tSum of Matrices(1)\t\tTranspose(2)\t\tProduct of Matrices(3)");
                    printf("\n\tEnter an operation command:");
                    scanf("%d",&operation_number);
                    // The switch-statement that performs the matrix functions begins here
                    switch(operation_number){
                        case 1: matrixSum();
                        break;
                        case 2: matrixTranspose();
                        break;
                        case 3: matrixProduct();
                        break;
                    }
                }
                // The conversion functions are done here if option 11 is chosen
                if(smenu == 11){
                    int operation_number = 0;
                    printf("\n\n\n\t\tTemperature(1)\t\tTime(2)");
                    printf("\n\n\n\t\tPlease choose an operation number:");
                    scanf("%d",&operation_number);
                    // The switch-statement that performs the conversion functions begins here
                    switch(operation_number){
                        case 1: askInputForTemp();
                        break;
                        case 2: askInputForTime();
                        break;
                    }
                }
            } while(smenu != 0);
        }
// Ends here: (PP)

/*
 Brandon Nikolasevic (350 - 547)
 Accountant Calculator Menu

 Code Block Purpose:
   Allows the user to calculate diffrenct accounting values such as (max, min, mean, median, mode and range)

 Parameters:
   no input paremters, relies on user input instead.

 Returns:
   nothing is returned, results are instead displayed on the console
 */

        if(menu == 3){

warp:

            //system("clear");
            printf("\n===========================\n");
            printf("Accountant Calculator Menu\n");
            printf("===========================\n");
            printf("Please set value first\n");
            printf("\n");

            int numTerm;
            int index;
            int compareIndex;
            int aMenu;
            float rest;
            float max;
            float min;
            float xBar = 0;
            float sum = 0;
            float med;
            int temp;

            // gets how many values the user wants to enter 
            numTerm = input("Enter number of term: ");

            float set[numTerm];
            int numTemp[numTerm];

            // input values from the user into the array
            for(index = 0; index < numTerm; index++){
                set[index] = inputAry("Enter value terms",index);
            }

            // sorts the values in the array into accedning order
            for(index = 0; index < numTerm; index++){
                for(compareIndex = 0; compareIndex <= index; compareIndex++){
                    if(set[compareIndex] > set[index]){
                        rest = set[compareIndex];
                        set[compareIndex] = set[index];
                        set[index] = rest;
                    }
                }
            }

            // find the minumum and maximum value in the array
            min = set[0];
            max = set[numTerm -1];

            // calculate the mean
            for(index = 0; index < numTerm; index++){
                sum += set[index];
            } 
            xBar = (sum / numTerm);

            // calculate the median
            if((numTerm % 2) != 0){
                med = set[((numTerm + 1) / 2) -1];
            }
            else{
                med = (set[((numTerm + 1) /2)] + set[((numTerm + 1) / 2) -1]) / 2;
            }

            // calculate the mode
            for(index = 0; index < numTerm; index++){
                numTemp[index] = 0;
            }
            for(index = 0; index < numTerm; index++){
                temp = (int)set[index];
                for(compareIndex = index; compareIndex < numTerm; compareIndex++){
                    if(set[compareIndex] == set[index]){
                        numTemp[index]++;
                    }
                }
            }

            temp = numTemp[0];
            for(index = 1; index < numTerm; index++){
                if(numTemp[index] > temp){
                    temp = numTemp[index];
                }
            }

            if(index == 999){//Always False If

warp1://Warp form menu
                compareIndex = 0;

                for(index = 0; index < numTerm; index++){
                    if(numTemp[index] == temp){
                        compareIndex++;
                    }
                }

                if(compareIndex == 1){
                    for(index = 0; index < numTerm; index++){
                        if(numTemp[index] == temp){
                            printf("%.4f\n",set[index]);
                        }
                    }
                }

                else{
                    printf("Not have mode value\n");	
                }

            }

            // display menu options
            do{
                printf("\n===========================\n");
                printf("Accountant Calculator Menu\n");
                printf("===========================\n");
                printf("1.Show max\n");
                printf("2.Show min\n");
                printf("3.Show x-bar\n");
                printf("4.Show range\n");
                printf("5.Show Med\n");
                printf("6.Show Mode\n");
                printf("7.Show value(sort)\n");
                printf("8.Set new value\n");
                printf("0.Back\n");
                aMenu = input("Select Menu: "); //input acountant  menu
                system("clear");

                if(aMenu == 1){
                    printf("\n");
                    Aryprint("Max is",max);
                }

                if(aMenu == 2){
                    printf("\n");
                    Aryprint("Min is",min);
                }

                if(aMenu == 3){
                    printf("\n");
                    Aryprint("X-bar is",xBar);
                }

                if(aMenu == 4){
                    printf("\n");
                    Aryprint("Range is",max-min);
                }

                if(aMenu == 5){
                    printf("\n");
                    Aryprint("Med is",med);
                }

                if(aMenu == 6){
                    printf("\n");
                    printf("Mode is: ");
                    goto warp1;
                }

                if(aMenu == 7){
                    printf("\n");
                    printf("Set of number is(sort): ");
                    for(index = 0; index < numTerm; index++){
                        printf("%.3f ",set[index]);
                    }
                }

                if(aMenu == 8){
                    goto warp;
                }

            }while(aMenu != 0);
        }

        if(menu == 4){
            char text;
            help = fopen("User_helping.txt","r");
            if (help) {
                while((text = fgetc(help)) != EOF){
                    fprintf(stdout,"%c",text);
                }
                fclose(help);
            } else {
                printf("Could not open User_helping.txt\n");
            }
        }

        // Geometry Calculator
        if (menu == 5)
        {
            // Geometry Calculator Menu (SS & BN)
            do
            {
                printf("\n======================\n");
                printf("Geometry Calculator Menu\n");
                printf("=======================\n");
                printf("1.AREA\n");
                printf("2.PERIMETER\n");
                printf("3.SURFACE AREA\n");
                printf("4.VOLUME\n");
                printf("0.BACK\n");
                gmenu = input("Select Menu: "); // input regular  menu
                system("clear");

                if (gmenu == 1)
                {
                    do {
                        printf("1. Rectangle Area\n");
                        printf("2. Cricle Area\n");
                        printf("3. Triange Area\n");
                        printf("0. Back\n");
                        gsmenu = input("Select Menu: ");
                        
                        if (gsmenu == 1) {
                            float x = input("Enter value for length: ");
                            float y = input("Enter value for width: ");
                            float z = rectangleArea(x, y);
                            printf("\n");
                            printf("result of rectangle area is: %f Square Units\n", z);
                        }
                        if (gsmenu == 2) {
                            float x = input("Enter value for the radius: ");
                            float y = circleArea(x);
                            printf("\n");
                            printf("the area of the cirle is: %f Square Units\n", y);
                        }
                        if (gsmenu == 3) {
                            float x = input("Enter value for base: ");
                            float y = input("Enter value for height: ");
                            float z = triangleArea(x,y);
                            printf("\n");
                            printf("the area of the triangle is: %f Square Units\n", z);
                        }

                    } while(gsmenu != 0);
                }

                // Perimeter
                if (gmenu == 2)
                {
                    do {
                        printf("1. Rectangle Perimeter\n");
                        printf("2. Cricle Perimeter\n");
                        printf("3. Triange Perimeter\n");
                        printf("0. Back\n");
                        gsmenu = input("Select Menu: ");
                        
                        if (gsmenu == 1) {
                            float x = input("Enter value for length: ");
                            float y = input("Enter value for width: ");
                            float z = rectanglePerim(x, y);
                            printf("\n");
                            printf("result of rectangle perimeter is : %f Units\n", z);
                        }
                        if (gsmenu == 2) {
                            float x = input("Enter value for the radius: ");
                            float y = circlePerim(x);
                            printf("\n");
                            printf("the perimeter of the cirle is: %f Units\n", y);
                        }
                        if (gsmenu == 3) {
                            float x = input("Enter value for side 1: ");
                            float y = input("Enter value for side 2: ");
                            float z = input("Enter value for side 3: ");
                            float h = trianglePerim(x,y,z);
                            printf("\n");
                            printf("the perimeter of the triangle is: %f Units\n", h);
                        }

                    } while(gsmenu != 0);
                }

  
                if (gmenu == 3)
                {
                    do {
                        printf("1. Rectangle Prism Volume\n");
                        printf("2. Sphere Volume\n");
                        printf("0. Back\n");
                        gsmenu = input("Select Menu: ");

                        if (gsmenu == 1) {
                            float x = input("enter the length: ");
                            float y = input("enter the width: ");
                            float z = input("enter the height: ");
                            float anwser = cubeVolume(x,y,z);
                            printf("\n");
                            printf("the volume of the rectangular prism is: %f units cubed\n", anwser);
                        }

                        if (gsmenu == 2) {
                            float x = input("enter the raduis: ");
                            float answer = sphereVolume(x);
                            printf("\n");
                            printf("the volume of the sphere is: %f units cubed\n", answer);
                        }
                    } while(gsmenu != 0);
                }


                if (gmenu == 4)
                {  
                    do {
                        printf("1. Rectangle Prism Surface Area\n");
                        printf("2. Sphere Surface Area\n");
                        printf("3. Triangular Prism Surface Area\n");
                        printf("0. Back\n");
                        gsmenu = input("Select Menu: ");

                        if (gsmenu == 1) {
                            float x = input("Enter value for length: ");
                            float y = input("Enter value for width: ");
                            float z = input("Enter value for height: ");
                            float answer = rectanglePrismSA(x, y, z);
                            printf("\n");
                            printf("result of rectangular prism surface area is : %f Units Squared\n", answer);
                        }
                        if (gsmenu == 2) {
                            float x = input("Enter value for the radius: ");
                            float y = sphereSA(x);
                            printf("\n");
                            printf("the surface area of the sphere is: %f Units Squared\n", y);
                        }
                        if (gsmenu == 3) {
                            float x = input("Enter value for side 1: ");
                            float y = input("Enter value for side 2: ");
                            float z = input("Enter value for side 3: ");
                            float basev = input("Enter value for base: ");
                            float length = input("Enter value for length: ");
                            float height = input("Enter value for height: ");
                            float h = trianglePrismSA(x, y, z, basev, height, length);
                            printf("\n");
                            printf("the surface area of the triangular prism is: %f Units Squared\n", h);
                        }
                    } while(gsmenu != 0);
                }

            } while (gmenu != 0);
        }
        //Ends Here: //(SS & BN)

    } while(menu != 0);

    return 0;
}

