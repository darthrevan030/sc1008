#include <stdio.h>

int octStrTodec(char *str);

int main(){
    char str[20],*sp;
    int num;

    printf("Enter an octal number: \n");
    scanf("%s",str);

    num=octStrTodec(str);

    printf("octStrTodec(): %d\n",num);

    return 0;
}

/*Similar to how we read decimal numbers but base 8 instead of 10
For each digit:
    Multiply current result by 8 (shift left by 3 bits)
    Add new digit (after converting from ASCII)
Convert ASCII to number by subtracting '0'
Only process valid octal digits (0-7)
Process string left to right*/

int octStrTodec(char *str){
    int result = 0;
    while (*str != '\0') {
        // Convert octal to decimal
        result = result * 8 + (*str - '0');
        str++;
    }
    return result;
}