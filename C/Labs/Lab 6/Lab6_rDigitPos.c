#include <stdio.h> 

int rDigitPos1(int num, int digit); 
void rDigitPos2(int num, int digit, int *pos); 

int main(){ 
   int number, digit, result=0; 

   printf("Enter the number: \n"); 
   scanf("%d", &number); 
   printf("Enter the digit: \n"); 
   scanf("%d", &digit);             
   printf("rDigitPos1(): %d\n", rDigitPos1(number, digit));            
   rDigitPos2(number, digit, &result);           
   printf("rDigitPos2(): %d\n", result);

   return 0; 
}

int rDigitPos1(int num, int digit){ 
      // Base case: if number is 0, digit is not found
      if (num == 0)
      return 0;
   
   // Check if current rightmost digit matches the target digit
   if (num % 10 == digit)
       return 1;  // Found at position 1
   
   // Recursive case: check the rest of the number
   int result = rDigitPos1(num / 10, digit);
   
   // If digit was found in the remaining digits, increment position
   if (result > 0)
       return result + 1;  // Add 1 to position
   else
       return 0;  // Digit not found
} 

void rDigitPos2(int num, int digit, int *pos){   
   // Base case: if number is 0, digit is not found
   if (num == 0) {
      *pos = 0;
      return;
   }

   // Check if current rightmost digit matches the target digit
   if (num % 10 == digit) {
      *pos = 1;  // Found at position 1
      return;
   }

   // Recursive case: check the rest of the number
   rDigitPos2(num / 10, digit, pos);

   // If digit was found in the remaining digits, increment position
   if (*pos > 0)
      *pos = *pos + 1;  // Add 1 to position
}