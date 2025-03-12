#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void reduceMatrix2D(int ar[][SIZE], int rowsize, int colsize);
void display(int ar[][SIZE], int rowSize, int colSize);

int main(){
    int ar [SIZE] [SIZE], rowSize, colSize;
    int i,j;

    printf("Enter row size of the 2D array: \n");
    scanf ("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);

    for (i=0; i<rowSize; i++){ // read data from user
        for (j = 0; j < colSize; j++){
            scanf ("%d", &ar[i][j]);
        }
    }

    reduceMatrix2D(ar, rowSize, colSize);
    printf("reduceMatrix2D(): \n");
    display(ar, rowSize, colSize);

    return 0;
}

/*  A square matrix (2-dimensional array of equal dimensions) can be 
reduced to upper-triangular form by setting each diagonal element to the sum of the 
original elements in that column and setting to 0s all the elements below the diagonal.  

For example, the 4-by-4 matrix: 

    4   3   8   6 
    9   0   6   5 
    5   1   2   4 
    9   8   3   7 

would be reduced to: 

    27   3   8   6 
    0   9   6   5 
    0   0   5   4 
    0   0   0   7 

Write a function reduceMatrix2D() to reduce a matrix with dimensions of rowSize and colSize. 

SIZE is a constant defined at the beginning of the program. For example, #define SIZE 10. 
The parameters rowSize and colSize are used to specify the dimensions of the 2
dimensional array (e.g. 4x4) that the function should process.

*/


void reduceMatrix2D(int matrix[][SIZE], int rowSize, int colSize){
    int i, j, sum;

    for (j = 0; j < colSize; j++){   // traverse column
        sum = 0;

        for(i = j + 1; i < rowSize; i++){   // process Row
            sum += matrix[i][j];
            matrix[i][j] = 0;
        }
    matrix[j][j] += sum;
    }
}

void display(int ar[][SIZE], int rowSize, int colSize){
    int i, j;
    
    for (i = 0; i < rowSize; i++) {
        for (j = 0; j < colSize; j++) {
            printf("%3d ", ar[i][j]);
        }
        printf("\n");
    }
}