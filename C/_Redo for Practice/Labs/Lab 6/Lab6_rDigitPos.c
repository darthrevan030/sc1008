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
   int pos;

   if (num == 0){
      return 0;
   }

   if (num % 10 == digit){
      return 1;
   }

   pos = rDigitPos1(num / 10, digit);

   if (pos > 0){
      return pos + 1;
   } else {
      return 0;
   }

} 

void rDigitPos2(int num, int digit, int *pos){   

}