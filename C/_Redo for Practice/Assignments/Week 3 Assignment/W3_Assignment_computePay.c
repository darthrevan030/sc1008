#include <stdio.h> 

double computePay1(int noOfHours, int payRate); 
void computePay2(int noOfHours, int payRate, double *grossPay); 

int main() 
{ 
int noOfHours, payRate; 
double grossPay; 

printf("Enter number of hours: \n"); 
scanf("%d", &noOfHours); 
printf("Enter hourly pay rate: \n"); 
scanf("%d", &payRate); 
printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate)); 
computePay2(noOfHours, payRate, &grossPay); 
printf("computePay2(): %.2f\n", grossPay); 

return 0; 
}   

double computePay1(int noOfHours, int payRate) {
    int overtime;
    double overtimePay;
    double grossPay;

    if (noOfHours > 160) {
        overtime = noOfHours - 160;
        overtimePay = payRate * 1.5;
    
        grossPay = (overtime * overtimePay) + (160 * payRate);
        return grossPay;
    } else {
        grossPay = noOfHours * payRate;
        return grossPay;
    }


}

void computePay2(int noOfHours, int payRate, double *grossPay) {
    int overtime;
    double overtimePay;

    if (noOfHours > 160){
        overtime = noOfHours - 160;

        overtimePay = payRate * 1.5;

        *grossPay = (overtime * overtimePay) + (160 * payRate);
    } else {
        *grossPay = noOfHours * payRate;
    }
}