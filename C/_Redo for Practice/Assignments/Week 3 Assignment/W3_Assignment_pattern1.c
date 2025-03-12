#include <stdio.h>

int main() {
    int height;
    
    printf("Enter the height: \n");
    scanf("%d", &height);
    
    printf("The pattern is:\n");
    for (int i = 0; i < height; i++) {
        // Print spaces
        for (int j = 0; j < height - i - 1; j++)
            printf(" ");
            
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++)
            printf("*");
            
        printf("\n");
    }
    
    return 0;
}