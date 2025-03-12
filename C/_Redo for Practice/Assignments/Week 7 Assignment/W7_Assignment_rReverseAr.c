#include <stdio.h>

void rReverseAr(int ar[], int size);

int main(){ 
    int array[80]; 
    int size, i; 

    printf("Enter size: \n"); 
    scanf("%d", &size); 
    printf("Enter %d numbers: \n", size); 
    
    for (i = 0; i < size; i++) 
        scanf("%d", &array[i]); 
    
        printf("rReverseAr(): "); 
    rReverseAr(array, size); 
    
    for (i = 0; i < size; i++) 
        printf("%d ", array[i]); 
    
        printf("\n"); 
    
    return 0; 
}

void rReverseAr(int ar[], int size){   
    // Base case: if array is empty or has only one element
    if (size <= 1)
    return;

    // Swap the first and last elements
    int temp = ar[0];
    ar[0] = ar[size-1];
    ar[size-1] = temp;

    // Recursively reverse the rest of the array (excluding first and last elements)
    rReverseAr(ar + 1, size - 2);
} 