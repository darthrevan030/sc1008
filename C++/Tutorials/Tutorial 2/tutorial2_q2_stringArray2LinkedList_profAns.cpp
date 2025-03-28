#include <iostream>
#include <string>
using namespace std;

// Define the structure of a linked list node
struct StringNode{
    string name;
    StringNode* next;
};

// Function to print the linked list
void printList(StringNode* head){
    StringNode* temp = head;
    cout << "Linked list: ";
    while (temp) {
        cout << temp->name << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to free allocated memory
void deleteList(StringNode*& head){
    while (head) {
        StringNode* temp = head;
        head = head->next;
        delete temp;
    }
    head = nullptr;
}

// Function to create a linked list from an array of strings
void arrayToLinkedList(const string* arr, int size, StringNode*& head){
    // TO-DO: WRITE YOUR CODE HERE
    if (size <= 0){ // Handle empty array case
        head = nullptr;  // Initialize head to nullptr to return list with no nodes
        return;
    } 
    
    // Initialise head with the first element
    head = new StringNode;
    head->name = arr[0];
    head->next = nullptr; // First node is special as it points to a nullptr
    
    // Insert the rest of the elements behind the head
    for (int i = 1; i < size; i++) {
        // Create a new node
        StringNode* newNode = new StringNode;
        newNode->name = arr[i];
        newNode->next = head; // New node points to the current head
        head = newNode; // Head now points to the new node
    }
}

int main(){
    // Case 1
    string students[] = {"Alice", "Bob", "Charlie", "David"};
    int size = sizeof(students) / sizeof(students[0]);
    StringNode* head1 = nullptr;
    arrayToLinkedList(students, size, head1);
    printList(head1);

    // Case 2
    string companyNames[] = {"Microsoft", "Google", "Tencent", "Alibaba", "HP"};
    size = sizeof(companyNames) / sizeof(companyNames[0]);
    StringNode* head2 = nullptr;
    arrayToLinkedList(companyNames, size, head2);
    printList(head2);

    deleteList(head1);
    deleteList(head2);
    return 0;
}
