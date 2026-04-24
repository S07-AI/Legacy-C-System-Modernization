#include "drawGraph.h"

void drawGraph(float operand1, float operand2, float result, char operator)
{
    //----------following 5 lines set the height of the graph-------
	//1. highest number between the operands and result. float to keep track of decimals.
    float ceiling = 0;
	//1. set ceiling to the highest of the 2 operands
    ceiling = (operand1 > operand2) ? operand1 : operand2;
	//3. if result is higher make it that instead
    if(result > ceiling) ceiling = result;
    //4. declare new var to turn our ceiling into an int, without losing decimals
    int numberOfRows = (int)ceiling;
	//5. round up the decimals to next highest integer number. this is now our final ceiling
	if(ceiling > numberOfRows) numberOfRows++;
    
	//for loop starts from the ceiling and goes down from there 
    for(int i = numberOfRows; i >= 1; i--){
        //i condensed the the if-else statements into 3 simple ternary oeprators
        /*ex: in the first statement, the arguments to printf will depend on the condition:
        operand1 >= i. if true, "*\t" will be the argument, otherwise it'll be "\t" */
        printf(operand1 >= i ? "*\t" : "\t");
        printf(operand2 >= i ? "*\t" : "\t");
        printf(result >= i ? "*\t\n" : "\t\n");
    }
    printf("%.2f %c %.2f = %.2f\n", operand1, operator, operand2, result);
}