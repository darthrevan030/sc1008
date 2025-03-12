#include <stdio.h>
#include <string.h>
#define N 20

void findLongShortStr(char str[N][81], char *longStr, char *shortStr, int size);

int main(){
    char str[N][81],longStr[81],shortStr[81],*p;
    int i,size;
    char dummy;

    printf("Enter number (size) of strings: \n");
    scanf("%d", &size);
    scanf("%c",&dummy);
    for (i=0; i<size; i++){
        printf("Enter string %d: \n", i+1);
        fgets(str[i],81,stdin);
        if ( p=strchr(str[i],'\n') ){
            *p = '\0';
        }
    }
    findLongShortStr(str, longStr, shortStr, size);
    printf("longest string: %s %d\n",longStr,strlen(longStr));
    printf("shortest string: %s %d\n",shortStr,strlen(shortStr));
return 0;
}

void findLongShortStr(char str[N][81], char *longStr, char *shortStr, int size){
    int i;
    int maxLen, minLen;
    
    // Initialize with first string's length
    maxLen = strlen(str[0]);
    minLen = strlen(str[0]);
    
    // Copy first string to both long and short
    strcpy(longStr, str[0]);
    strcpy(shortStr, str[0]);
    
    // Iterate through remaining strings
    for(i = 1; i < size; i++) {
        int currentLen = strlen(str[i]);
        
        // Check for longer string
        if(currentLen > maxLen) {
            maxLen = currentLen;
            strcpy(longStr, str[i]);
        }
        
        // Check for shorter string
        if(currentLen < minLen) {
            minLen = currentLen;
            strcpy(shortStr, str[i]);
        }
    }
} 
