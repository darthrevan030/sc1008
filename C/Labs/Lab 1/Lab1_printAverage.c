#include <stdio.h>

int main() {
    int numLines;
    
    printf("Enter number of lines: \n");
    scanf("%d", &numLines);
    
    for (int i = 1; i <= numLines; i++) {
        int num;
        int sum = 0;
        int count = 0;
        
        printf("Enter line %d (end with -1): \n", i);
        
        while (1) {
            scanf("%d", &num);
            
            if (num == -1) {
                break;
            }
            
            sum += num;
            count++;
        }
        
        float average = (float)sum / count;
        printf("Average = %.2f\n", average);
    }
    
    return 0;
}