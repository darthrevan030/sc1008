#include <stdio.h> 
void findAverage2D(float matrix[4][4]);    
int main() 
{ 
    float ar[4][4];  
    int i,j;       
    
    printf("Enter data: \n"); 
    for (i = 0; i < 4; i++) { 
        for (j = 0; j < 4; j++){
            scanf("%f", &ar[i][j]); 
        }
    }

    findAverage2D(ar); 
    printf("findAverage2D(): \n"); 
    for (i = 0; i < 4; i++) { 
        for (j = 0; j < 4; j++){ 
            printf("%.2f ", ar[i][j]);
        }
        printf("\n"); 
    } 

    return 0; 
} 
void findAverage2D(float matrix[4][4]) { 
    for (int i = 0; i < 4; i++) {
        float sum = matrix[i][0] + matrix[i][1] + matrix[i][2]; // Sum of first 3 elements in the row
        matrix[i][3] = sum / 3.0f; // Store average in the last column
    }
}