#include <stdio.h>

int hexStrTodec(char *str);

int main(){
    char str[20],*sp;
    int num;

    printf("Enter an hexadecimal number: \n");
    scanf("%s",str);

    num = hexStrTodec(str);

    printf("hexStrTodec(): %d\n",num);

    return 0;
}

int hexStrTodec(char *str){

    int result = 0;

    while (*str != '\0'){
        result = result * 16;
        
        if (*str >= '0' && *str <= '9'){
            result = result + (*str - '0');
        } else if (*str >= 'A' && *str <= 'F'){
            result = result + (*str - 'A' + 10);
        } else if (*str >= 'a' && *str <= 'f'){
            result = result + (*str - 'a' + 10);
        }
        
        str++;
    }
    return result;
}