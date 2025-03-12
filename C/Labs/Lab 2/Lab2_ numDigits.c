#include <stdio.h> 

int numDigits1(int num); 
void numDigits2(int num, int *result); 

int main() 
{ 
    int number, result=0; 
    
    printf("Enter the number: \n"); 
    scanf("%d", &number); 
    printf("numDigits1(): %d\n", numDigits1(number));    
    numDigits2(number, &result); 
    printf("numDigits2(): %d\n", result);            
    return 0; 
}

int numDigits1(int num) {
    
}

void numDigits2(int num, int *result) {
    
}