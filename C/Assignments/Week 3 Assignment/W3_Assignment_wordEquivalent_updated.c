#include <stdio.h>

int main() {
    int num;
    char *words[] = {"zero", "one", "two", "three", "four", 
                     "five", "six", "seven", "eight", "nine"};
    
    printf("Enter the number: \n");
    scanf("%d", &num);
    
    printf("wordEquivalent(): ");
    if (num > 99)
        printf("Input exceeds 99");
    else {
        if (num == 0)
            printf("zero");
        else {
            int first = 1;
            while (num > 0) {
                if (!first)
                    printf(" ");
                printf("%s", words[num % 10]);
                first = 0;
                num /= 10;
            }
        }
    }
    printf("\n");
    
    return 0;
}