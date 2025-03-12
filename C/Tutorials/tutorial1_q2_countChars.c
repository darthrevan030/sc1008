#include <stdio.h>
/* reads in character by character from an input 
source, until ‘#’ is entered. The output of the program is the number of English letters 
and the number of digits that appear in the input. */

int main(){
    char ch;
    int dcount = 0, ccount = 0;
    
    printf("Enter your characters (# to end): ");
    scanf("%s", &ch);

    while(ch != '#'){
        if(ch >= '0' && ch <= '9'){
            dcount++;
        } else if((ch >= 'a' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
            ccount++;
        }
        scanf("%c", &ch);
    }

    printf("The number of digits: %d\n", dcount);
    rintf("The number of letters: %d\n", ccount);
    
    return 0;
}