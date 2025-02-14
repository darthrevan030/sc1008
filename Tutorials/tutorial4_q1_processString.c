#include <stdio.h> 
#include <string.h> 

void processString1(char *str, int *totVowels, int *totDigits); 

int main(){ 
    
    char str[50], *p;
    int totVowels, totDigits;
    
    printf("Enter the string: \n");
    fgets(str, 50, stdin);
    
    if (p = strchr(str,'\n')){
        *p = '\0';
    }
    
    processString1(str, &totVowels, &totDigits);

    printf("Total vowels = %d\n", totVowels); 
    printf("Total digits = %d\n", totDigits); 
return 0; 
} 

/*accepts a string str and returns the total number of vowels totVowels and digits totDigits 
in that string to the caller via call by reference.*/

// Version 1
void processString1(char *str, int *totVowels, int *totDigits){ 
    
    int i = 0;
    int size = 0;

    *totVowels =0;
    *totDigits = 0;

    while (str[i] != '\0'){
        size++;
        i++;
    }

    for(i = 0; i < size; i++){
        if  (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                (*totVowels)++;
        } else if (str[i] >= '0' && str[i] <= '9'){
            (*totDigits)++;
        }
    }
}

// Version 2 using pointer arithmetic
void processString2(char *str, int *totVowels, int *totDigits){ 
    
    int i = 0;
    int size = 0;

    *totVowels =0;
    *totDigits = 0;

    while (str[i] != '\0'){
        size++;
        i++;
    }

    for (i = 0; i < size; i++){
        if  (str + i == 'a' || str + i == 'e' || str + i == 'i' || str + i == 'o' || str + i == 'u' || str + i == 'i' || str + i == 'o' || str + i == 'u' || 
            str + i == 'A' || str + i == 'E' || str + i == 'I' || str + i == 'O' || str + i == 'U'){
                (*totVowels)++;
        } else if ( *(str + i) >= '0' && *(str + i) <= '9'){
            (*totDigits)++;
        }
    }
} 