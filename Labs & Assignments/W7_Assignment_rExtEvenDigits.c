#include <stdio.h> 

void rExtEvenDigits(int num, int *evenPtr); 

int main(){ 
    int number, result; 

    printf("Enter a number: \n"); 
    scanf("%d", &number); 
    rExtEvenDigits(number, &result); 
    printf("rExtEveneDigits(): %d\n", result); 
    return 0; 
} 

void rExtEvenDigits(int num, int *evenPtr){
   /* Write your code here */ 
}