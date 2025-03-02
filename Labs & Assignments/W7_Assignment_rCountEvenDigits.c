#include <stdio.h> 

int rCountEvenDigits1(int num);  
void rCountEvenDigits2(int num, int *result); 

int main(){
    int number, result; 
    
    printf("Enter the number: \n"); 
    scanf("%d", &number); 
    printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number)); 
    rCountEvenDigits2(number, &result); 
    printf("rCountEvenDigits2(): %d\n", result);
    
    return 0; 
}

int rCountEvenDigits1(int num){ 
    
    // Base case: if number is 0, return 0
    if (num == 0)
        return 0;
    
    // Get the rightmost digit
    int digit = num % 10;
    
    // Check if the digit is even
    if (digit % 2 == 0)
        return 1 + rCountEvenDigits1(num / 10);  // Count this digit + recursively count the rest
    else
        return rCountEvenDigits1(num / 10);      // Don't count this digit, just the rest
} 

void rCountEvenDigits2(int num, int *result){ 
    
    // Base case: if number is 0, we're done
    if (num == 0)
    return;

    // Get the rightmost digit
    int digit = num % 10;

     // Check if the digit is even
    if (digit % 2 == 0)
        (*result)++;  // Increment the count if the digit is even

     // Recursively process the rest of the number
    rCountEvenDigits2(num / 10, result);
}