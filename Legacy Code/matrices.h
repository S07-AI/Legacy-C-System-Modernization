#include <stdio.h>

/* Begins Here: BS*/
// this function will find the add the matrices that the user inputed, finding the sum
void matrixSum(){
    
    //all variables used are declared below
    int rowIndex;
    int colIndex;
    int rowMatrix;
    int colMatrix;
    int rowMatrix2;
    int colMatrix2;
    //changed the variable names using camelcase as well as based on relevance 

    printf("Enter the number of rows of matrix 1:");
    scanf("%d",&rowMatrix);

    printf("Enter the number of columns of matrix :");
    scanf("%d",&colMatrix);

    printf("Enter the number of rows of matrix 2:");
    scanf("%d",&rowMatrix2);

    printf("Enter the number of columns of matrix 2:");
    scanf("%d",&colMatrix2);
    //changed formatting + spacing of the variables and functions 

    //the if statement is comparing the rows in both matrices and columns in both matrices
    if(rowMatrix == rowMatrix2 && colMatrix == colMatrix2) {
        float matrixRow[rowMatrix][colMatrix];
        float matrixRow2[rowMatrix2][colMatrix2];
        float sumMatrix[rowMatrix][colMatrix];


        //looping through the row matrices to later on print them out 
        for(rowIndex = 0; rowIndex < rowMatrix; rowIndex++) {
        
            printf("Enter the members of matrix 1 row %d :",rowIndex + 1);

            //same thing is done with the column index to later on print them out 
            for(colIndex = 0; colIndex < colMatrix; colIndex++) {
                
                scanf("%f",&matrixRow[rowIndex][colIndex]);
            
            }
}
        for(rowIndex = 0; rowIndex < rowMatrix2; rowIndex++)
        {
            /* Ends here: BS */
            printf("Enter the members of matrix 2 row %d :",rowIndex+1);
            
            for(colIndex = 0; colIndex < colMatrix2; colIndex++)
            {
                scanf("%f",&matrixRow2[rowIndex][colIndex]);
            }
}

    for(rowIndex = 0;rowIndex < rowMatrix; rowIndex++)
    {
        //Brooke.S
        for(colIndex = 0; colIndex < colMatrix;colIndex++)
        {
	//zubaidi: changed var names to reflect brookes changes
	//i dug thru ur code and replaced i with rowIndex, j with colIndex, and b with matrixRow2. hope im right
        sumMatrix[rowIndex][colIndex]=matrixRow[rowIndex][colIndex]+matrixRow2[rowIndex][colIndex];
        }
    }
//zubaidi: everything above i copied from one of brookes commits.
//everything below i copied frmo one of luisa's commits.
//only way i found to reconcile between teh different files

// Begins here (LZ)
        // Changed the spacing of variables and loops + fixed indentation of {} + changed variable names 
        // Print the sum of the matrices 
        printf("The sum of both matrices is\n:");
        for(colIndex = 0; colIndex < colMatrix; colIndex++){
            for(rowIndex = 0; rowIndex < rowMatrix; rowIndex++){
                printf("\t\t %.0f",sumMatrix[rowIndex][colIndex]);
            }
            printf("\n");
        }
    }
    else{
        printf("\n\tThe matrices are incompatible");
    }
}

/*
    This funtion is used to calculate and print the product of two user entered matrices. 
*/
void matrixProduct() {
    int rowIndex;
    int colIndex;
    int rowMatrix;
    int colMatrix;
    int rowMatrix2;
    int colMatrix2;
    int count;

    // Ask the user to enter the dimensions of the matrices
    printf("\n\n");   // For formatting
    printf("Enter the number of rows of matrix 1: ");
    scanf("%d", &rowMatrix);
    printf("Enter the number of columns of matrix 1: ");
    scanf("%d", &colMatrix);
    printf("Enter the number of rows of matrix 2: ");
    scanf("%d", &rowMatrix2);
    printf("Enter the number of columns of matrix 2: ");
    scanf("%d", &colMatrix2);

    // Create the matrices
    float matrix1[rowMatrix][colMatrix];
    float matrix2[rowMatrix2][colMatrix2];
    float matrixProduct[rowMatrix][colMatrix2];

    // Ask the user to enter the numbers of matrix 1
    printf("\n\nEnter the numbers in each matrix (separated by spaces)\n");
    for (rowIndex = 0; rowIndex < rowMatrix; rowIndex++) {
        printf("Enter the members of matrix 1 row %d: ", rowIndex + 1);
        for (colIndex = 0; colIndex < colMatrix; colIndex++) {
            scanf("%f", &matrix1[rowIndex][colIndex]);
        }
    }

    printf("\n");

    // Ask the user to enter the numbers of matrix 2
    for (rowIndex = 0; rowIndex < rowMatrix2; rowIndex++) {
        printf("Enter the members of matrix 2 row %d: ", rowIndex + 1);
        for (colIndex = 0; colIndex < colMatrix2; colIndex++) {
            scanf("%f", &matrix2[rowIndex][colIndex]);
        }
    }

    // Find the matrix product
    for (rowIndex = 0; rowIndex < rowMatrix; rowIndex++) {
        for (colIndex = 0; colIndex < colMatrix2; colIndex++) {
            matrixProduct[rowIndex][colIndex] = 0;
            for (count = 0; count < colMatrix; count++) {
                matrixProduct[rowIndex][colIndex] += matrix1[rowIndex][count] * matrix2[count][colIndex];   // Fixed multiplication
            }
        }
    }

    // Output the product of the matrices
    printf("\nThe product of the matrices is:\n");
    for (rowIndex = 0; rowIndex < rowMatrix; rowIndex++) {
        for (colIndex = 0; colIndex < colMatrix2; colIndex++) {
            printf("\t%.0f", matrixProduct[rowIndex][colIndex]);
        }
        printf("\n");
    }
}
/*
    This function is used to calculate and print the transpose of a user entered matrix.
*/
void matrixTranspose(){

    // Chnaged variable names and used camelcase
    int rowIndex;
    int colIndex;
    int numRows;
    int numCols;

    // Ask the user to enter the dimentions of the matrix
    printf("\n\n");   // For formatting
    printf("Enter the number of rows:");
    scanf("%d", &numRows);
    printf("Enter the number of columns:");
    scanf("%d", &numCols);

    // Create the matrix
    float matrixTranspose[numRows][numCols];

    // Ask the user to enter the numbers in the matrix
    printf("\n\n");   // For formatting
    for(rowIndex = 0; rowIndex < numRows; rowIndex++){
        printf("Enter the members of row %d :", rowIndex + 1);

        for(colIndex = 0; colIndex < numCols; colIndex++){
            scanf("%f", &matrixTranspose[rowIndex][colIndex]);
        }
    }

    // Find and print the transpose 
    printf("The transpose of the matrix is\n:");
    printf("\n\n");   // For formatting
    for(colIndex = 0; colIndex < numCols; colIndex++){
        for(rowIndex = 0; rowIndex < numRows; rowIndex++){
            printf("\t\t %.0f", matrixTranspose[rowIndex][colIndex]);
        }
        printf("\n");
    }
    printf("\n\n");   // For formatting
}
// Ends here (LZ)
