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

   if (num == 0){
      return 0;
   }

   int oddInt = 2 * num - 1;

   return oddInt + rSquare1(num - 1);

}

void rSquare2(int num, int *result){ 


}