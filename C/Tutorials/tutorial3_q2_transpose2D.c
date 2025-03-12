#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void transpose2D (int ar[] [SIZE], int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);

int main(){
    int ar[SIZE] [SIZE], rowSize, colSize,tmp;
    int i,j;

    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf ("%d", &colSize) ;
    printf("Enter the matrix (%dx%d) \n", rowSize, colSize);

    for(i=0; i<rowSize; i++){
    // read data from user
        for (j = 0; j < colSize; j++){
            scanf ("%d", &ar[i][j]);
        }
    }

    printf("transpose2D () : \n");
    transpose2D(ar, rowSize, colSize);
    display(ar, rowSize, colSize);

return 0;
}

/* takes a square matrix ar, and the array sizes for the rows and columns as parameters, 
and returns the transpose of the array via call by reference. 

For example, if the rowSize is 4, colSize is 4, and the array ar is {1,2,3,4, 5,1,2,2, 6,3,4,4, 7,5,6,7}, 
then the resultant array will be {1,5,6,7, 2,1,3,5, 3,2,4,6, 4,2,4,7}. 

That is, for the 4-by-4 matrix: 

    1   2   3   4 
    5   1   2   2 
    6   3   4   4 
    7   5   6   7 

The resultant array after performing the transpose2D function is:  

    1   5   6   7 
    2   1   3   5 
    3   2   4   6 
    4   2   4   7

SIZE is a constant defined at the beginning of the program. For example, #define SIZE 10. 
The parameters rowSize and colSize are used to specify the dimensions of the 2
dimensional array (e.g. 4x4) that the function should process.

*/


void display(int ar[][SIZE], int rowSize, int colSize){
    int l,m;
    
    for (l = 0; l < rowSize; l++){
        for (m = 0; m < colSize; m++){
            printf("%d", ar[1][m]);
        }
        printf("In");
    }
}


void transpose2D(int ar[][SIZE], int rowSize, int colSize){
    int h, k;
    int temp;

    for(h = 1; h < rowSize; h++){
        for (k = 0; k < h; k++) {
            temp = ar[h][k];
            ar[h][k] = ar[k][h];
            ar[k][h] = temp;
        }
    }

}