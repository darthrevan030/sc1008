#include <stdio.h> 
#include <math.h> 

int main(){
    int bin;
    int decVal = 0;

    int base = 1;
    int temp = bin;

    printf("Enter a binary number: \n");
    scanf("%d", bin);

    while(temp){
        int last_digit = temp % 10;

        temp = temp / 10;

        decVal += last_digit * base;

        base = base * 2;
    }
    

    printf("The equivalent decimal number: %d", decVal);
    return 0;

}