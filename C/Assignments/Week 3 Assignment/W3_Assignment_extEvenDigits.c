#include <stdio.h> 
#define INIT_VALUE 999 

int extEvenDigits1(int num); 
void extEvenDigits2(int num, int *result); 

int main(){
    int number, result = INIT_VALUE; 
    
    printf("Enter a number: \n"); 
    scanf("%d", &number); 
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));         
    extEvenDigits2(number, &result); 
    printf("extEvenDigits2(): %d\n", result); 
    
    return 0; 
}


int extEvenDigits1(int num) {
    int result = 0;
    int multiplier = 1;
    int hasEven = 0;
    
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            result = digit * multiplier + result;
            multiplier *= 10;
            hasEven = 1;
        }
        num /= 10;
    }
    
    return hasEven ? result : -1;
}

void extEvenDigits2(int num, int *result) {
    *result = 0;
    int multiplier = 1;
    int hasEven = 0;
    
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            *result = digit * multiplier + *result;
            multiplier *= 10;
            hasEven = 1;
        }
        num /= 10;
    }
    
    if (!hasEven) *result = -1;
}