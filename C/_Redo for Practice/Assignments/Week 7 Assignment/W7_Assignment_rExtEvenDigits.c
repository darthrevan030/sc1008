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

    static int firstcall = 1;
    if (firstcall){
        *evenPtr = -1;
        firstcall = 0;
    }

    if (num == 0){
        firstcall = 1;
        return;
    }

    int lastDigit = num % 10;

    rExtEvenDigits(num / 10, evenPtr);

    if (lastDigit % 2 == 0) {
        if (*evenPtr == -1){
            *evenPtr = lastDigit;
        } else {
        *evenPtr = *evenPtr * 10 + lastDigit;
        }
    }
}