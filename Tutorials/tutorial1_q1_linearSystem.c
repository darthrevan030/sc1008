#include <stdio.h>
#include <math.h>
/*computes the solutions for x and y in the linear 
system of equations: 

a1*x + b1*y = c1 
a2*x + b2*y = c2 

The solutions for x and y are given by: 
        x = ((b2 * c1) - (b1 * c2)) / ((a1 * b2) - (a2 * b1));
        y = ((a1 * c2) - (a1 * c1)) / ((a1 * b2) - (a2 * b1));

The program reads in a1, b1, c1, a2, b2 and c2, and then computes and prints the solutions. 
In your program, if the denominator (a1b2 - a2b1) of the above equations is zero, then it 
prints an error message “Unable to compute because the denominator is zero!”.*/

int main(){
    double a1, b1, c1, a2, b2, c2, x, y;

    printf("Enter the values for a1, b1, c1, a2, b2, c2: ");
    scanf("%lf%lf%lf%lf%lf%lf", &a1, &b1, &c1, &a2, &b2, &c2);

    if(abs((a1 * b2) - (a2 * b1)) >= 0.00001){
        x = ((b2 * c1) - (b1 * c2)) / ((a1 * b2) - (a2 * b1));
        y = ((a1 * c2) - (a1 * c1)) / ((a1 * b2) - (a2 * b1));

        printf("x = %.2f and y = %.2f\n", x, y);
    }
    else printf("Unable to compute because the denominator is zero!");

    return 0;
}