///////// Student Info/////////
//
//           Your Name:__________
//      Your NTU Email:__________
//
//
//

#include <iostream>
using namespace std;

// Function to get a valid integer input
int getValidInt() {

    // TO-DO: Write your code here
    //
    //


}

// Function to get a valid float input
float getValidFloat() {

    // TO-DO: Write your code here
    //
    //


}

int main() {
    char name[50];  // Student name
    int studentID;  // Student ID
    float mathMark; // Math mark

    while (true) {
        // Get student name
        cout << "Enter student name (or enter '#' to exit): ";
        cin.getline(name, 50);

        // Check if user wants to exit
        if (strcmp(name, "#") == 0) {
            break;
        }

        // Get student ID
        cout << "Enter student ID (integer): ";
        studentID = getValidInt();

        // Get math mark
        cout << "Enter math mark (float): ";
        mathMark = getValidFloat();

        // Display student information
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Math Mark: " << mathMark << endl;
        cout << "-------------------------\n";
    }

    cout << "Program exited successfully." << endl;
    return 0;
}
