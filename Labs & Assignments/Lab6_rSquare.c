#include <stdio.h> 

int rSquare1(int num); 
void rSquare2(int num, int *result); 

int main(){ 
   int number, result=0; 

   printf("Enter the number: \n"); 
   scanf("%d", &number); 
   printf("rSquare1(): %d\n", rSquare1(number));  
   rSquare2(number, &result); 
   printf("rSquare2(): %d\n", result);                 

   return 0; 
} 

int rSquare1(int num){ 
   // Base case: if num is 0, return 0
   if (num == 0)
   return 0;

   // Calculate the current odd number to add
   // For num=1: 1
   // For num=2: 1+3
   // For num=3: 1+3+5
   // and so on...
   int oddNum = 2 * num - 1;

   // Recursive case: add current odd number to sum of previous odd numbers
   return oddNum + rSquare1(num - 1);
}

void rSquare2(int num, int *result){ 
   // Base case: if num is 0, set result to 0
   if (num == 0) {
      *result = 0;
      return;
   }

   // Calculate sum of odd numbers for num-1
   rSquare2(num - 1, result);

  // Add the current odd number
  *result = *result + (2 * num - 1);
}