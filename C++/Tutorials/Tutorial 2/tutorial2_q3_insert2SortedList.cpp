
#include <iostream>
using namespace std;

// Node structure
struct Node{
    double value; // Can be any data type
    Node* next;
};


// Function to print the linked list
void printList(Node* head){
    Node* current = head;// Start at the head of the list

    while (current) { // Equivalent to "current != nullptr"
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}


void destroyList(Node*& head){
    Node *nodePtr = head;  // Start at head of list
    Node *garbage = nullptr;

    while (nodePtr != nullptr)
    {
        // garbage keeps track of node to be deleted
        garbage = nodePtr;
        // Move on to the next node, if any
        nodePtr = nodePtr->next;
        // Delete the "garbage" node
        delete garbage;
        garbage = nullptr;
    }
    head = nullptr;
}

void insertNode2ListEnd(Node*& head, double newValue){
    Node* newNode = new Node;
    newNode->value = newValue;
    newNode->next = nullptr;

    if (head == nullptr) { 
        head = newNode; 
        return; 
    }

    Node* temp = head;
    while (temp->next != nullptr) { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // Link last node to new node
}


void insertNode2SortedList(Node*& head, double number){
    // TO-DO: WRITE YOUR CODE HERE
    // Create a new node with the given value
    Node* newNode = new Node;
    newNode->value = number;
    newNode->next = nullptr;

    // Case 1: Empty list or insert at beginning (new value is smaller than head)
    if (head == nullptr || number < head->value) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Case 2: Find position to insert in the sorted list
    Node* current = head;
    // Traverse the list to find proper position
    while (current->next != nullptr && current->next->value < number) {
        current = current->next;
    }

    // Insert the new node after current
    newNode->next = current->next;
    current->next = newNode;
}



int main(){
    // Create the linked list
    Node* head = nullptr; // Start with an empty list

    // Insert values
    insertNode2ListEnd(head, 2.5);
    insertNode2ListEnd(head, 7.9);
    insertNode2ListEnd(head, 12.6);

    cout << "Original list: ";
    printList(head);

    insertNode2SortedList(head, 10.5);
    cout << "New list: ";
    printList(head);

    insertNode2SortedList(head, 1.5);
    cout << "New list: ";
    printList(head);

    destroyList(head);
    return 0;
}

