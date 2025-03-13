#include <stdio.h> 
#include <string.h> 

struct account {    
    struct{   
        char lastName[10]; 
        char firstName[10]; 
    } 
    names; 
    int accountNum; 
    double balance; 
}; 

void nextCustomer(struct account *acct); 
void printCustomer(struct account acct); 

int main(){    
    struct account record; 
    int flag = 0; 

    do {   
        nextCustomer(&record); 
        if ((strcmp(record.names.firstName, "End") == 0) && (strcmp(record.names.lastName, "Customer") == 0)) 
            flag = 1; 
        if (flag != 1)           
            printCustomer(record); 
    } while (flag != 1); 
}

void nextCustomer(struct account *acct){   

}

void  printCustomer(struct account acct){   

    }