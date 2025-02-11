#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getFrequency(int histogram[10], int n);
void printFrequency(int histogram[10]);

int main(){
    int frequencies[10];
    int total;

    printf("Please input the number of random numbers: ");
    scanf("%d", &total);

    srand(time(NULL));

    getFrequency(frequencies, total);
    printFrequency(frequencies);

    return 0;
}

void getFrequency(int histogram[10], int n){
    int count;
    
    for (count = 0; count < 10; count++){
        histogram[count] = 0;
    }
    for (count = 0; count < n; count++){
        histogram[(rand() % 100)/10]++;
    }
}

void printFrequency(int histogram[10]){

    int count, index;
    
    for (count =0; count < 10; count++)
    {
        printf("%2d--%2d  |", count*10, count*10+9);

        for (index = 0; index < histogram[count]; index++)
            putchar('*');
        
            putchar('\n');
    }
}