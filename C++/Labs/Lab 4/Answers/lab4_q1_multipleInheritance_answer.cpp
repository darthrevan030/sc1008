///////// Student Info/////////
//
//           Your Name: Samarth Bhatia
//      Your NTU Email: samarth009@e.ntu.edu.sg
//
//
//
//
#include <iostream>
#include <string>
using namespace std;

// Base class: Sports
class Sports {
protected:
    string sport; // sport name
public:
    // TO-DO 1: Implement the constructor and descructor
    //
    //

    // Display sports information
    void displaySports() const {
        cout << "Sport: " << sport << endl;
    }
};

// Base class: Academics
class Academics {
protected:
    float gpa; // GPA
public:
    // TO-DO 2: Implement the constructor and destructor
    //
    //


    // Display academic information
    void displayAcademics() const {
        cout << "GPA: " << gpa << endl;
    }
};

// TO-DO 3: Implement the Derived class: StudentAthlete, which inherits from both Academics and Sports


int main() {
    //Create a StudentAthlete instance
    StudentAthlete stu("Basketball", 3.8, "Bob", 21, 1001);

    // Display all the information
    cout<<endl;
    stu.displayInfo();
    cout<<endl;
    
    // Test code to demonstrate multiple inheritances
    stu.displaySports();
    stu.displayAcademics();
    cout<<endl;
    
    return 0;
}
