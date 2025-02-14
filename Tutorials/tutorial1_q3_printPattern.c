#include <stdio.h>

/*reads a positive number height between 1 and 9 
as its input value, and prints a triangular pattern according to height. Note that only 1, 2 
and 3 are used to generate the patterns. For example, when height = 3, it will print the 
following pattern: 
1 
22 
333 

while height = 7 will print the following pattern:  
1 
22 
333 
1111 
22222 
333333 
1111111*/

int main(){
    int height, row, col;
    int num = 0;

    printf("Enter the height: ");
    scanf("%d", &height);

    printf("Pattern:");
    for(row = 0; row < height; row++){
        for(col = 0; col < row + 1; row++){
            printf("%d", num + 1);
        }
    num = (num + 1) % 3;
    printf("\n");
    }

    return 0;
}