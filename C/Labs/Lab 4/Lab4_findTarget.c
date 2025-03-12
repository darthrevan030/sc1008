#include <stdio.h>
#include <string.h>
#define SIZE 10
#define INIT_VALUE 999

void printNames(char nameptr[][80], int size);
void readNames(char nameptr[][80], int *size);
int findTarget(char *target, char nameptr[][80], int size);

int main(){
    char nameptr[SIZE][80], t[40], *p;
    int size, result = INIT_VALUE;   
    int choice;  

    printf("Select one of the following options: \n");
    printf("1: readNames()\n");      
    printf("2: findTarget()\n");
    printf("3: printNames()\n");
    printf("4: exit()\n");  
    
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                readNames(nameptr, &size);
                break;
            case 2:
                printf("Enter target name: \n");    
                scanf("\n");
                fgets(t, 80, stdin);
                
                if (p=strchr(t,'\n')){
                    *p = '\0';
                }  
                result = findTarget(t, nameptr, size);
                printf("findTarget(): %d\n",  result);   
                break;     
            case 3:
                printNames(nameptr, size);
                break;
            }
        } while (choice < 4);       
    return 0;
}

/*Simple loop to print each name with space separator*/
void printNames(char nameptr[][80], int size){
    int i;
    for (i = 0; i < size; i++) {
        printf("%s ", nameptr[i]);
    }
    printf("\n");
}

/*Get size first using pointer to return it
Handle input buffer issues with dummy character
Read names into 2D char array*/
void readNames(char nameptr[][80], int *size){
    int i;
    char dummychar;

    printf("Enter size: \n");
    scanf("%d", size);
    scanf("%c", &dummychar);
    printf("Enter %d names: \n", *size);
    
    for(i = 0; i < * size; i++){
        scanf("%s", nameptr[i]);
    }
}

/*Linear search through names array
Use strcmp for string comparison
Return index if found, -1 if not found*/
int findTarget(char *target, char nameptr[][80], int size){
    int i;
    for (i = 0; i < size; i++) {
        if (strcmp(nameptr[i], target) == 0) {
            return i;
        }
    }
    return -1;
}