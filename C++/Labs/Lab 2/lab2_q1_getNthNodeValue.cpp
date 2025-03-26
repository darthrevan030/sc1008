///////// Student Info/////////
//
//           Your Name: Samarth Bhatia
//      Your NTU Email: samarth009@e.ntu.edu.sg
//
//
//


#include <iostream>
using namespace std;

struct MarkNode{
    int mark; // Changed to int
    MarkNode* next;
};

// Function to insert a node at the end of the linked list
void insertNode2ListEnd(MarkNode*& head, int newValue){
    MarkNode* newNode = new MarkNode;
    newNode->mark = newValue;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    MarkNode* temp = head;
    while (temp->next != nullptr) { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // Link last node to new node
}

void destroyList(MarkNode*& head){
    MarkNode *nodePtr = head;  // Start at head of list
    MarkNode *garbage = nullptr;

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

// Function to get the value of the n-th node
int getNthNodeValue(const MarkNode* head, int n){
    // TO-DO: WRITE YOUR CODE HERE
    // Check if the list is empty
    if (head == nullptr) {
        return -1;  // Return -1 for empty list
    }
    
    // Initialize the current node and a position counter
    const MarkNode* current = head;
    int position = 1;  // Starting at position 1
    
    // Traverse until we reach the nth node or the end of the list
    while (current != nullptr && position < n) {
        current = current->next;
        position++;
    }
    
    // If we've reached the end of list before the nth position
    if (current == nullptr) {
        return -1;  // The position exceeds the length of the list
    }
    
    // Return the value of the nth node
    return current->mark;
}

int main(){
    MarkNode* head = nullptr; // Initialize an empty linked list

    // Insert nodes into the linked list
    insertNode2ListEnd(head, 10); // Insert 10
    insertNode2ListEnd(head, 20); // Insert 20
    insertNode2ListEnd(head, 30); // Insert 30
    insertNode2ListEnd(head, 40); // Insert 40

    // Test cases
    cout << getNthNodeValue(head, 1) << endl; // Output: 10
    cout << getNthNodeValue(head, 2) << endl; // Output: 20
    cout << getNthNodeValue(head, 4) << endl; // Output: 40
    cout << getNthNodeValue(head, 5) << endl; // Output: -1 (exceeds length)
    cout << getNthNodeValue(nullptr, 1) << endl; // Output: -1 (empty list)

    // Clean up memory 
    destroyList(head);
    return 0;
}


