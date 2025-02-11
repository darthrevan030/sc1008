#include <stdio.h>
#include <math.h>
#define INIT_VALUE 999 

int ext_odd_digits_1(int num); 
void ext_odd_digits_2(int num, int *result);

int main()
{
    int number = 0, result1 = 0, result2 = 0;

    // obtaining user input 
    printf("Enter number: "); 
    scanf("%d", &number); 

    // passing into functions 
    result1 = ext_odd_digits_1(number);
    ext_odd_digits_2(number, &result2);

    printf("extOddDigits1() = %d, extOddDigits2() = %d\n", result1, result2);
    return 0;
}

// extract odd numbers --> arrange them in sequence 
int ext_odd_digits_1(int num)
{
    int result = 0, last_dig = 0, count = 0;
    while (num > 0)
    {
        last_dig = num % 10;  // extracting last digit 
        if (last_dig % 2 == 1)  // if last digit is odd
        {
            result += last_dig * pow(10, count);   // append to number
            count++;
        } 
        num /= 10;  // divide by 10 to remove last digit
    }
    
    if (result == 0)
        return -1;
    else
        return result;
//    return (result == 0) ? -1 : result;
}

void ext_odd_digits_2(int num, int *result)
{
    int last_dig = 0, count = 0;
    while (num > 0)
    {
        last_dig = num % 10;
        if (last_dig % 2 == 1)
        {
            *result += last_dig * pow(10, count);
            count++;
        }
        num /= 10;
    }
    if (*result == 0)
        *result = -1;
}


