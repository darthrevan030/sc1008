#include <iostream>
using namespace std;

struct ListNode{
    int value;
    ListNode* next;
};

// TO-DO: You need to implement this function
int getListLen(const ListNode* head){
    // TO-DO: WRITE YOUR CODE HERE
    if (head == nullptr) {
        return 0;
    }
    const ListNode* current = head; // Use const pointer to maintain const-correctness, ensuring the function does not modify the input list while traversing it.
    int count = 0;
    
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    
    return count;
}

int main(){
    // Creating a simple linked list: 10 -> 20 -> 30 -> 40
    ListNode* head = new ListNode;
    head->value = 10;
    head->next = nullptr;
    cout << "Length of the linked list: " << getListLen(head) << endl;

    head->next = new ListNode;
    head->next->value = 20;
    head->next->next=nullptr;
    cout << "Length of the linked list: " << getListLen(head) << endl;

    head->next->next=new ListNode;
    head->next->next->value = 30;
    head->next->next->next = nullptr;
    cout << "Length of the linked list: " << getListLen(head) << endl;

    head->next->next->next=new ListNode;
    head->next->next->next->value = 40;
    head->next->next->next->next = nullptr;
    cout << "Length of the linked list: " << getListLen(head) << endl;

    // Free allocated memory
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    head = nullptr;

    return 0;
}


