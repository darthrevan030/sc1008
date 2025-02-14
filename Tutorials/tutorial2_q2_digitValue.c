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

/*returns the value of the kth digit (k>0) from the right of a non negative integer num. 
For example, if num is1234567 and k is 3, the function will return 5 and if 
num is 1234 and k is 8, the function will return 0. Write the function in two versions. The 
function digitValue1() returns the result, while digitValue2() passes the result through pointer 
parameter result. */

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
