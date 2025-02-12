#include <stdio.h> 

void reverseAr1D(int ar[], int size); 

int main() { 
    int ar[10]; 
    int size, i; 

    printf("Enter array size: \n"); 
    scanf("%d", &size); 
    printf("Enter %d data: \n", size); 

    for (i=0; i <= size-1; i++) 
        scanf("%d", &ar[i]);

    reverseAr1D(ar, size); 

    printf("reverseAr1D(): "); 

    if (size > 0) { 
        for (i=0; i<size; i++) 
        printf("%d ", ar[i]); 
    } 
    return 0; 
} 

void reverseAr1D(int ar[], int size) { 
    
    // temporary array to store elements in reverse order
    int temp[size]; // this is technically wrong but the program works?

    // copy elements from original array to temp in reverse order
    for(int i = 0; i < size; i++){
        temp[i] = ar[size - i - 1];
    }
    // copy elements back to originaL array
    for(int i = 0; i < size; i++){
        ar[i] = temp[i];
    }
}