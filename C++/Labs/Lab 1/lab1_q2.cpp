///////// Student Info/////////
//
//           Your Name: Samarth Bhatia
//      Your NTU Email: samarth009@e.ntu.edu.sg
//
//
//

#include <iostream>
#include <cmath>
using namespace std;

bool isZero(float num, float epsilon = 1e-6) {
    return fabs(num) < epsilon;  // Check if num is very close to 0
}

// TO-DO: Write your code here
template <typename T>
T calculate(T a, T b, char opr) {
    switch (opr) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (fabs(b) < 1e-6) ? 0 : a / b;
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }
}


int main() {
    cout << "Addition (10 + 5): " << calculate(10, 5, '+') << endl;
    cout << "Subtraction (10.5 - 3.2): " << calculate(10.5, 3.2, '-') << endl;
    cout << "Multiplication (4 * 2): " << calculate(4, 2, '*') << endl;
    cout << "Division (10 / 2): " << calculate(10, 2, '/') << endl;
    cout << "Division (10.6 / 0.0): " << calculate(10.6, 0.0, '/') << endl;
    cout << "Division by zero (10 / 0): " << calculate(10, 0, '/') << endl;
    return 0;
}
