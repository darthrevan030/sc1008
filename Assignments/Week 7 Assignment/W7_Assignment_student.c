#include <stdio.h> 
#include <string.h> 
#define SIZE 50

typedef struct { 
    int id; 
    char name[50]; 
} Student;

void inputStud(Student *s, int size); 
void printStud(Student *s, int size); 
int removeStud(Student *s, int *size, char *target); 

int main(){ 
    Student s[SIZE]; 

    int size=0, choice; 
    char target[80], *p; 
    int result;    char dummy[80]; 

    printf("Select one of the following options: \n"); 
    printf("1: inputStud()\n");
    printf("2: removeStud()\n"); 
    printf("3: printStud()\n"); 
    printf("4: exit()\n");       
    
    do { 
        printf("Enter your choice: \n"); 
        scanf("%d", &choice); 
        switch (choice){ 
            case 1:            
                printf("Enter size: \n"); 
                scanf("%d", &size); 
                printf("Enter %d students: \n", size);    
                inputStud(s, size);  
                break; 
            case 2:  
                printf("Enter name to be removed: \n"); 
                fgets(dummy,80,stdin);
                fgets(target, 80, stdin);   
                
                if (p=strchr(target,'\n')) *p = '\0';  
                    printf("removeStud(): "); 
                result = removeStud(s, &size, target);         
                
                if (result == 0)  
                    printf("Successfully removed\n"); 
                else if (result == 1) 
                    printf("Array is empty\n"); 
                else if (result == 2) 
                    printf("The target does not exist\n"); 
                else 
                    printf("An error has occurred\n");         
                break; 
            case 3:  
                printStud(s, size); 
                break;          
        } 
    } while (choice < 4); 

    return 0; 
} 

void inputStud(Student *s, int size){
    int i;
    char *p;
    char dummy[80];

    for (i=0; i<size; i++){
        printf("Student ID: \n");
        scanf("%d", &(s[i].id));
        printf("Student Name: \n");
        fgets(dummy, 80, stdin);  
        fgets(s[i].name, 80, stdin);  
        if (p=strchr(s[i].name,'\n')) *p = '\0'; 
    }
}


void printStud(Student *s, int size)  
{ 
    int i;
    char *p;
    char dummy[80];
    
    for (i = 0; i < size; i++) {
        printf("Student ID: \n");
        scanf("%d", &(s[i].id));
        printf("Student Name: \n");
        fgets(dummy, 80, stdin);  // Clear the input buffer
        fgets(s[i].name, 80, stdin);  // Get the student name
        if ((p = strchr(s[i].name, '\n'))) 
            *p = '\0';  // Remove newline character
    }
} 

int removeStud(Student *s, int *size, char *target){ 
    int i, j;
    int found = 0;
    
    /* Check if array is empty */
    if (*size == 0)
        return 1;
    
    /* Search for the target name */
    for (i = 0; i < *size; i++) {
        if (strcmp(s[i].name, target) == 0) {
            found = 1;
            break;
        }
    }
    
    /* If target not found */
    if (!found)
        return 2;
    
    /* Remove the target by shifting elements */
    for (j = i; j < *size - 1; j++) {
        s[j] = s[j + 1];
    }
    
    /* Decrement size after removal */
    (*size)--;
    
    return 0;
} 