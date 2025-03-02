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
    
    // Base case: if num becomes 0, return 0
    if (num == 0)
        return 0;
    
    // Get the last digit
    int lastDigit = num % 10;
    
    // Check if the last digit is even
    if (lastDigit % 2 == 0)
        return 1 + rCountEvenDigits1(num / 10); // Count this digit and continue with the rest
    else
        return rCountEvenDigits1(num / 10); // Skip this digit and continue with the rest
} 

void rCountEvenDigits2(int num, int *result){ 
    
    // Base case: if num becomes 0, return
    if (num == 0)
        return;
    
    // Get the last digit
    int lastDigit = num % 10;
    
    // Check if the last digit is even
    if (lastDigit % 2 == 0)
        (*result)++; // Increment the result if the digit is even
    
    // Recursive call with the remaining digits
    rCountEvenDigits2(num / 10, result);
}