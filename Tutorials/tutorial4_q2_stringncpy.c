#include <stdio.h> 
#include <string.h> 

char *stringncpy(char *s1, char *s2, int n); 

int main(){
    char targetStr[40], sourceStr[40], *target, *p;
    int length;
    
    printf("Enter the string: \n"); 
    fgets(sourceStr, 40, stdin); 

    if (p=strchr(sourceStr,'\n')){
        *p = '\0';
    }

    printf("Enter the number of characters: \n"); 
    scanf("%d", &length);    

    target = stringncpy(targetStr, sourceStr, length); 

    printf("stringncpy(): %s\n", target); 

    return 0; 
}

/*copies not more than n characters (characters that follow a null character are not copied) from the array pointed to by s2 to 
the array pointed to by s1.  If the array pointed to by s2 is a string shorter than n characters, 
null characters are appended to the copy in the array pointed to by s1, until n characters in 
all have been written. The stringncpy() returns the value of s1.*/

char *stringncpy(char *s1, char *s2, int n){
    int k, h;

    for (k = 0; k < n; k++){
        if (s2[k] != '\n'){
            s1[k] = s2[k];
        } else
            break;
    }

    s1[k] = '\0';

    // to append '\0' after copying if s2 length is shorter than n
    for (h = k; h < n; h++){
        s1[h] = '\0';
    }

    return 0;
}