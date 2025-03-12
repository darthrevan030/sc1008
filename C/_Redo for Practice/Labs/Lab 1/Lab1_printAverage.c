#include <stdio.h>

int main() {
    int lines;

    printf("Enter number of lines: \n");
    scanf("%d", &lines);
    
    for (int i = 0; i <= lines; i++){
        int num;
        int sum = 0;
        int count = 0;

        printf("Enter line %d (end with -1): \n", i);

        while(1){
            scanf("%d", &num);

            if (num == -1){
                break;
            }

            sum += num;
            count++;
        }
        
        double avg = (double)sum / count;
        printf("Average = %.2lf\n", avg);

        return 0;

    }

    return 0;
}