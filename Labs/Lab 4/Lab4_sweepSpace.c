#include <stdio.h>
#include <string.h>

char *sweepSpace(char *str);

int main(){
    char str[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);

    if (p=strchr(str,'\n')) *p = '\0';
    printf("sweepSpace(): %s\n", sweepSpace(str));

    return 0;
}


/*Need two pointers/indices: i for reading and j for writing
i scans through every character in the string
j only advances when we find a non-space character
When we find a non-space character, we copy it to position j and increment j
This effectively overwrites the original string, removing spaces
Finally add null terminator at position j to properly end the string
Return the modified string as required by function prototype
*/
char *sweepSpace(char *str){
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    return str;
}

