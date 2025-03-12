#include <stdio.h>
/*Write a C program that computes the value of e x according to the following formula:

    e^x = 1 + (x/1!) + ((x^2)/2!) + ((x^3)/3!) + ... + ((x^10)/10!)
*/

int main(){
    int n, denominator = 1;
    double x, result = 1.0, numerator = 1.0;

    printf("Enter x: \n");
    scanf("%lf", &x);

    for(n = 1; n<= 10; n++){
        denominator *= n;
        numerator *= x;
        result += numerator/denominator;
    }

    printf("Result = %.2f\n", result);
    
    return 0;
}