#include <stdio.h>

int main() {
    int salary, merit;
    char grade;
    
    printf("Enter the salary: \n");
    scanf("%d", &salary);
    printf("Enter the merit: \n");
    scanf("%d", &merit);
    
    if (salary >= 700 && salary <= 899) {
        if (salary < 800)
            grade = (merit >= 20) ? 'A' : 'B';
        else
            grade = 'A';
    }
    else if (salary >= 600 && salary <= 799) {
        if (salary < 650)
            grade = (merit >= 10) ? 'B' : 'C';
        else
            grade = 'B';
    }
    else if (salary >= 500 && salary <= 649) {
        grade = 'C';
    }
    
    printf("The grade: %c\n", grade);
    return 0;
}