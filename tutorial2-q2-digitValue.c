#include <stdio.h>
int digitValue1(int num, int k); 
void digitValue2(int num, int k, int *result); 

int main()
{
    int number, digit, result2 = -1;
    // obtain user input 
    printf("Enter number: "); 
    scanf("%d", &number); 
    printf("Enter digit: "); 
    scanf("%d", &digit); 

    // passing into functions 
    int result1 = digitValue1(number, digit);
    digitValue2(number, digit, &result2);

    printf("digitValue1() = %d, digitValue2() = %d\n", result1, result2);
    return 0; 
}

int digitValue1(int num, int k)
{
    for (int i = 1; i <= k - 1; i++)
        num /= 10; 
    // when k > no. of digits in num --> num automatically becomes 0 
    return (num % 10); 
}

void digitValue2(int num, int k, int *result)
{
    for (int i = 1; i < k; i++)
        num /= 10;
    *result = num % 10; 
}
