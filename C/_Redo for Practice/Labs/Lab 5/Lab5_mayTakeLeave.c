#include <stdio.h> 
#define INIT_VALUE 1000 

typedef struct { 
   int id;             /* staff identifier */ 
   int totalLeave;    /* the total number of days of leave allowed */ 
   int leaveTaken;   /* the number of days of leave taken so far */ 
} leaveRecord; 

int mayTakeLeave(leaveRecord list[], int id, int leave, int n); 
void getInput(leaveRecord list[], int *n); 
void printList(leaveRecord list[], int n); 

int main(){ 
    leaveRecord listRec[10]; 

    int len; 
    int id, leave, canTake=INIT_VALUE; 
    int choice; 

    printf("Select one of the following options: \n");
    printf("1: getInput()\n");
    printf("2: printList()\n"); 
    printf("3: mayTakeLeave()\n"); 
    printf("4: exit()\n");  
    
    do { 
        printf("Enter your choice: \n"); 
        scanf("%d", &choice); 
        
        switch (choice) { 
            case 1:   
                getInput(listRec, &len); 
                printList(listRec, len); 
                break; 
            case 2:   
                printList(listRec, len); 
                break; 
            case 3:   
                printf("Please input id, leave to be taken: \n"); 
                scanf("%d %d", &id, &leave); 
                
                canTake = mayTakeLeave(listRec, id, leave, len); 
                
                if (canTake == 1) 
                    printf("The staff %d can take leave\n", id); 
                
                else if (canTake == 0) 
                    printf("The staff %d cannot take leave\n", id);  
                
                else if (canTake == -1) 
                    printf("The staff %d is not in the list\n", id);  
                
                else 
                    printf("Error!"); 
                break;
        } 
    } while (choice < 4);

    return 0; 
}

void printList(leaveRecord list[], int n){
    printf("The staff list:\n");

    for (int i = 0; i < n; i++){
        printf("id = %d, totalleave = %d, leave taken = %d\n", list[i].id, list[i].totalLeave, list[i].leaveTaken);
    }
} 

void getInput(leaveRecord list[], int *n){

    printf("Enter the number of staff records: \n");
    scanf("%d", n);

    for (int i = 0; i < *n; i++){
        printf("Enter id, totalleave, leavetaken: \n");
        scanf("%d", &list[i].id);
        scanf("%d", &list[i].totalLeave);
        scanf("%d", &list[i].leaveTaken);
    }
}

int mayTakeLeave(leaveRecord list[], int id, int leave, int n){

    for (int i = 0; i < n; i++){
        if (id == list[i].id){
            int found = 1;
            if (list[i].leaveTaken + leave <= list[i].totalLeave){
                return 1;
            } else {
                return 0;
            }
        }
    }
    return -1;
}