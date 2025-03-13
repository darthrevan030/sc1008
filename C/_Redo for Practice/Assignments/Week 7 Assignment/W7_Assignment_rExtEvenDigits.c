#include <stdio.h> 

void rExtEvenDigits(int num, int *evenPtr); 

int main(){ 
    int number, result; 

    printf("Enter a number: \n"); 
    scanf("%d", &number); 
    rExtEvenDigits(number, &result); 
    printf("rExtEvenDigits(): %d\n", result); 
    return 0; 
} 

void rExtEvenDigits(int num, int *evenPtr){
    // Initialize for the first call
    static int isFirstCall = 1;
    if (isFirstCall) {
        *evenPtr = -1;  // Start with -1 to indicate no even digits found yet
        isFirstCall = 0;
    }
    
    // Base case
    if (num == 0) {
        isFirstCall = 1;  // Reset for next time this function is called
        return;
    }
    
    // Get the current digit
    int digit = num % 10;
    
    // Recursive call to process the rest of the number
    rExtEvenDigits(num / 10, evenPtr);
    
    // After processing left portion, check if current digit is even
    if (digit % 2 == 0) {
        if (*evenPtr == -1) {
            *evenPtr = digit;  // First even digit
        } else {
            *evenPtr = *evenPtr * 10 + digit;  // Add to existing even digits
        }
    }
}