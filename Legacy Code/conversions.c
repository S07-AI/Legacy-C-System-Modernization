//fixed by zubaidi

#include "conversions.h"

/*this function asks what unit we convert from and what unit we convert to,
then passes the info to time() (which asked for these values directly, now
this function does that job and passes the values)*/
void askInputForTime(){
    int from;
    int to;

    printf("\n\t\tseconds(1)\t\tminutes(2)\t\thours(3)\t\tdays(4)\n\n\n"
            "\t\tweeks(5)\t\tmonths(6)\t\tyears(7)\t\tDecades(8)\n\n\n"
            "\t\tcenturies(9)\t\tmilleniums(10)\t\tlight years(11)\t\tGenerations(12): ");

    printf("\n\n\n\t\tConvert from(number):");
    scanf("%d", &from);

    printf("\n\n\n\t\tConvert to(number):");
    scanf("%d", &to);
    time(from, to);
}

/*this function compares t1 and t2 and prints the conversions
previously, time() did that directly for each case. it was repetitive and
clunky. by putting it in this one function, it is much cleaner*/
//parameters: takes the 2 units (to compare), and a string to adjust the printf
//returns: nothing
void printConversion(double t1, double t2, char* unit){
    unit[12] = '\0';
    if (t2 <= 1){
        printf("\n\n\n\t\t%f seconds = %f %s", t1, t1, unit);
    }
    else if(t1 == 1){
        printf("\n\n\n\t\t1 second = %f %s", t2, unit);
    }
    else{
        //"milennia"  and "centuries" do not fit the pattern of just 'add an s.' the if-elses below account for this
        if(strcmp(unit, "millenium") == 0){
            printf("\n\n\n\t\t1 second = %f %s", t2, "millenia");
        }
        else if(strcmp(unit, "century") == 0){
            printf("\n\n\n\t\t1 second = %f %s", t2, "centuries");
        }
        else{
            printf("\n\n\n\t\t1 second = %f %ss", t2, unit);
        }
    }
}


//this function converts t2 based on value of t1 then calls printConversions.
/*previously this function asked for user input, had no parameters, and the
variables in the parameters were declared locally. instead, i took out the
section of the function that asked for user input and put it in its own
function (askInput()), and declared the variables locally there, and passed
them by value into time().*/
//parameters: int from, int to, int double t1, int double t2
//returns: nothing
void time(int from, int to){
    //note we declare t1 and t2 locally. i kept the old logic.
    double t1 = 0;
    double t2 = 0;
    //if we're keeping the same unit...
    if(from == to){
        printf("Enter time: ");
        scanf("%lf", &t1);
        printf("The resultant value is %f", t1);
    }
    //if we're converting units...
    else if (from != to){
        printf("\n\n\n\t\tEnter the time: ");
        scanf("%lf", &t1);

        if(from == 1){

            switch(to){

                case 2:
                    t2 = t1 / 60;
                    printConversion(t1, t2, "minute");
                    break;

                case 3:
                    t2 = t1 / 3600;
                    printConversion(t1, t2, "hour");
                    break;

                case 4:
                    t2 = t1 / (3600 * 24);
                    printConversion(t1, t2, "day");
                    break;
                
                case 5:
                    t2 = t1 / (3600 * 24 * 7);
                    printConversion(t1, t2, "week");
                    break;
        
                case 6:
                    t2 = t1 / (3600 * 24 * 30);
                    printConversion(t1, t2, "month");
                    break;
                
                case 7:
                    t2 = t1 / (3600 * 24 * 365.25);
                    printConversion(t1, t2, "year");
                    break;
    
                case 8:
                    t2 = t1 / (3600 * 24 * 365.25 * 10);
                    printConversion(t1, t2, "decade");
                    break;    

                case 9:
                    t2 = t1 / (3600 * 24 * 365.25 * 100);
                    printConversion(t1, t2, "century");
                    break;
        
                case 10:
                    t2 = t1 / (3600 * 24 * 365.25 * 1000);
                    printConversion(t1, t2, "millenium");
                    break;
                //the original code had this as case 12. 11 (light years) was skipped.
                case 12:
                    t2 = t1 / (3600 * 24 * 365.25 * 30);
                    printConversion(t1, t2, "Generation");
                    break;
            }
        }
    }
}

/*this function asks for user input on behalf of temp().
it passes them by value to temp().*/
//parameters: none
//returns: nothing
void askInputForTemp(){
    int from;
    int to;
    double t1;

    printf("\n\n\n\t\t\tCelsius(1)\t\t\tFahrenheit(2)\t\t\tKelvin(3)");

    printf("\n\n\n\t\t\tConvert from(number): ");
    scanf("%d", &from);

    printf("\n\n\n\t\t\tConvert to(number): ");
    scanf("%d", &to);

    printf("\n\n\n\t\t\tEnter temperature: ");
    scanf("%lf", &t1);

    temp(from, to, t1);
}

/* this function converts between celcius/fahrenheit/kelvin. it prints the conversion*/
//parameters: int from (starting unit), int to (desire dunit), double t1 (amount)
//returns: nothing
void temp(int from, int to, double t1){
    //t2 is not set by user input. no need to declare it before this point.
    double t2 = 0;

    if(from == to){
        printf("\n\n\n\t\t\t The resulting temperature remains the same: %f", t1);
    }
    else{

        switch(from){

            case 1:
                switch(to){
                    case 2:
                        t2 = t1 * 9 / 5 + 32.0;
                        printf("\n\n\n\t\t\t%fC=%fF", t1, t2);
                        break;
                    case 3:
                        t2 = t1 + 273.15;
                        printf("\n\n\n\t\t\t%fC=%fK", t1, t2);
                        break;
                }
                break;

            case 2:
                switch(to){
                    case 1:
                        t2 = (t1 - 32.0) * 5 / 9;
                        printf("\n\n\n\t\t\t%fF=%fC", t1, t2);
                        break;
                    case 3:
                        t1 = (t1 - 32.0) * 5 / 9;
                        t2 = t1 + 273.15;
                        printf("\n\n\n\t\t\t%fF=%fK", t1 , t2);
                        break;
                }
                break;

            case 3:
                switch(to){
                    case 1:
                        t2 = t1 - 273.15;
                        printf("\n\n\n\t\t\t%fK=%fC", t1, t2);
                        break;
                    case 2:
                        t2 = (t1 - 273.15) * 9 / 5 + 32;
                        printf("\n\n\n\t\t\t%fK=%fF", t1, t2);
                        break;
                }
                break;

        }
    }
}
