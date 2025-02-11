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