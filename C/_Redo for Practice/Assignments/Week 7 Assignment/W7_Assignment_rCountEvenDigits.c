#include <stdio.h> 

int rCountEvenDigits1(int num);  
void rCountEvenDigits2(int num, int *result); 

int main(){
    int number, result; 
    
    printf("Enter the number: \n"); 
    scanf("%d", &number); 
    printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number)); 
    rCountEvenDigits2(number, &result); 
    printf("rCountEvenDigits2(): %d\n", result);
    
    return 0; 
}

int rCountEvenDigits1(int num){ 


    if (num == 0){
        return 0;
    }

    int lastDigit = num % 10;

    if(lastDigit % 2 == 0){
        return 1 + rCountEvenDigits1(num / 10);
    } else {
        return rCountEvenDigits1(num / 10);
    }
} 


/* 
The `static int firstCall = 1;` in your code serves a specific purpose related to how functions behave across multiple calls.

When you declare a variable as `static` inside a function:

1. The variable is initialized only once (the first time the function is called)
2. The variable retains its value between function calls
3. The variable is not recreated or reset on subsequent calls

In your `rCountEvenDigits2` function, this is crucial because:

- You need to initialize `*result = 0` only on the very first call (the top-level call)
- But you can't modify the main function to do this initialization
- Without the `static` flag, you would reset `*result` to 0 during every recursive call, which would erase previous counts

How it works in your implementation:

1. First time the function is called: `firstCall` equals 1, so you set `*result = 0` and change `firstCall` to 0
2. During recursive calls: `firstCall` is already 0, so the initialization is skipped
3. When reaching the base case (`num == 0`): you reset `firstCall` to 1 to prepare for the next time the function is called from main

This allows the function to correctly accumulate the count of even digits during recursive calls without resetting the count. 
The `firstCall` flag provides a way to distinguish between the initial call from main (where initialization should happen) and 
the recursive calls within the function (where initialization should be skipped).*/

void rCountEvenDigits2(int num, int *result){ 

    static int firstcall = 1;

    if (firstcall){
        *result = 0;
        firstcall = 0;
    }


    if (num == 0){
        firstcall = 1;
        return;
    }

    int lastDigit = num % 10;

    if(lastDigit % 2 == 0){
        (*result)++;
    }
    
    rCountEvenDigits2(num / 10, result);
}