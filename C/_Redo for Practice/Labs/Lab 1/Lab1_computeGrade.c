#include <stdio.h>

int main() {
    int marks;
    int studentID;


    while(1){
        printf("Enter Student ID: \n");
        scanf("%d", &studentID);

        if(studentID == -1){
            break;
        }

        printf("Enter Mark: \n");
        scanf("%d", &marks);

        if(75 <= marks && marks <= 100){
            printf("Grade = A\n");
        } else if(65 <= marks && marks <= 74){
            printf("Grade = B\n");
        } else if(55 <= marks && marks <= 64){
            printf("Grade = C\n");
        } else if(45 <= marks && marks <= 54){
            printf("Grade = D\n");
        } else if(0 <= marks && marks <= 44){
            printf("Grade = F\n");
        }
    }
    
    return 0;
}