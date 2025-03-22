///////// Student Info/////////
//
//           Your Name: Samarth Bhatia
//      Your NTU Email: samarth009@e.ntu.edu.sg
//
//
//

#include <iostream>
#include <limits>
using namespace std;

// Function to get a valid integer input
int getValidInt(){

    // TO-DO: Write your code here
    int value;
    while (true) {
        cin >> value;
        if (cin.fail()) {
            cout << "Invalid input! Please enter an integer: ";
            cin.clear();  // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear extra characters
            return value;
        }
    }
}


// Function to get a valid float input
float getValidFloat(){

    // TO-DO: Write your code here
    float value;
    
    while (true) {
        cin >> value;
        if (cin.fail()) {
            cout << "Invalid input! Please enter a valid float number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

int main(){
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
