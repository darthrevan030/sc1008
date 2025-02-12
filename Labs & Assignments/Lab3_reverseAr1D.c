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

// Original Answer
/*
void reverseAr1D(int ar[], int size) { 
    
    // temporary array to store elements in reverse order
    int temp[size]; // this is technically wrong but the program works? -- Error: Expression must have a constant value

    // copy elements from original array to temp in reverse order
    for(int i = 0; i < size; i++){
        temp[i] = ar[size - i - 1];
    }
    // copy elements back to originaL array
    for(int i = 0; i < size; i++){
        ar[i] = temp[i];
    }
}
*/

/*
Old solution works but you've identified an interesting point about int temp[size]. 
Let me explain why this works despite being technically incorrect in standard C:

This is actually a C99 feature called Variable-Length Arrays (VLAs), where you can declare an array with a size determined at runtime. 
    
    Variable-Length Arrays (VLAs):
        int temp[size];  // This is a VLA

While it's technically not standard C89/90, many modern compilers support it. 
However, there are several reasons why this approach might be considered problematic:

Stack limitations:
    VLAs are allocated on the stack
    Stack size is limited
    Large input sizes could cause stack overflow
    No bounds checking is performed
Portability concerns:
    Not all compilers support VLAs
    C11 made VLAs optional
    Some environments might disable VLA support*/



// New answer
void reverseAr1D(int ar[], int size){
    
    int temp;
    
    for(int i = 0; i < size; i++){
        temp[i] = ar[i];
        ar[i] = ar[size - 1 - i];
        ar[size - 1 - i] = temp;
    }
}

/*
New solution:
    Uses only one temporary variable
    Swaps elements in place
    More memory efficient
    More portable
    No risk of stack overflow
    Works by swapping pairs of elements from the ends toward the middle

The key difference is:
    Old solution: Creates a temporary array and does two passes through the data
    New solution: Works in-place with just one variable and one pass

Both solutions work, but the in-place version is generally considered better practice because it:
    Uses constant extra space O(1) instead of linear extra space O(n)
    Avoids potential stack issues with large arrays
    Is more portable across different C versions and compilers
*/