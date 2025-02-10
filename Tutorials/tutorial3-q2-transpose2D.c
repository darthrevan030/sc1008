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