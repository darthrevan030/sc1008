#include <stdio.h>

int rNumDigits1(int num); 
void rNumDigits2(int num, int *result);

int main(){ 
   int number, result=0; 

   printf("Enter the number: \n"); 
   scanf("%d", &number); 
   printf("rNumDigits1(): %d\n", rNumDigits1(number));    
   rNumDigits2(number, &result); 
   printf("rNumDigits2(): %d\n", result);

   return 0; 
} 

int rNumDigits1(int num){ 

    // Base case: if number is 0, it has 1 digit
   if (num == 0){
      return 1;
   }
    // Recursive case: divide by 10 and count
   if (num / 10 == 0){
        return 1;  // Last digit
   } else {
      return 1 + rNumDigits1(num / 10);
   }  // Count this digit + rest of digits
} 

void rNumDigits2(int num, int *result){ 
   // Base case: if number is 0, it has 1 digit
   if (num == 0) {
      *result = 1;
      return;
   }

   // Recursive case: divide by 10 and count
   if (num / 10 == 0){
      *result = 1;  // Last digit
   } else {
      rNumDigits2(num / 10, result);  // Count digits in the rest of the number
      *result = *result + 1;  // Add 1 for current digit
   }
}