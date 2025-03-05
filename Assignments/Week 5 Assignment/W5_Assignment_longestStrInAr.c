#include <stdio.h> 
#include <string.h> 
#define N 20 

char *longestStrInAr(char str[N][40], int size, int *length); 

int main(){ 

    int i, size, length;   
    char str[N][40], first[40], last[40], *p, *result; 
    char dummychar;   

    printf("Enter array size: \n"); 
    scanf("%d", &size); 
    scanf("%c", &dummychar); 

    for (i=0; i<size; i++) { 
        printf("Enter string %d: \n", i+1); 
        fgets(str[i], 40, stdin); 
        if (p=strchr(str[i],'\n')){
            *p = '\0';   
        }
    }  

    result = longestStrInAr(str, size, &length); 
    printf("longest: %s \nlength: %d\n", result, length);         

    return 0; 
}

char *longestStrInAr(char str[N][40], int size, int *length) { 
    int i;
    int maxLen = strlen(str[0]);  // Initialize with the length of the first string
    char *longest = str[0];       // Pointer to the longest string

    for (i = 1; i < size; i++) {
        int len = strlen(str[i]);
        if (len > maxLen) {
            maxLen = len;
            longest = str[i];  // Update pointer to the new longest string
        }
    }

    *length = maxLen;  // Set the length via pointer parameter
    return longest;    // Return the longest string
}