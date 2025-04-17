///////// Student Info/////////
//
//           Your Name: Samarth Bhatia
//      Your NTU Email: samarth009@e.ntu.edu.sg
//
//
//

#include <iostream>
#include <cmath>  // For M_PI
#include <type_traits>  // Required for std::is_abstract

// Abstract base class
class Shape {
protected:
    double area;

public:
    // TO-DO: Please implement the constructor, the destructor and the calArea() function here 

    // Constructor
    Shape() {
        area = 0.0;
        std::cout << "Shape Constructor!" << std::endl;
    }
    
    // Destructor
    virtual ~Shape() {
        std::cout << "Shape Destructor!" << std::endl;
    }

    // Pure virtual function
    virtual void calArea() = 0;

    // Member function to get the area
    double getArea() const {
        return area;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    // TO-DO: Please implement the constructor, the destructor and OVERRIDE the calArea() function here 
    
    // Constructor
    Circle(double r) : radius(r) {
        std::cout << "Circle Constructor!" << std::endl;
    }
    
    // Destructor
    ~Circle() {
        std::cout << "Circle Destructor!" << std::endl;
    }
    
    // Override calArea function
    void calArea() override {
        area = M_PI * radius * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    // TO-DO: Please implement the constructor, the destructor and OVERRIDE the calArea() function here 
    
    // Constructor
    Rectangle(double w, double h) : width(w), height(h) {
        std::cout << "Rectangle Constructor!" << std::endl;
    }
    
    // Destructor
    ~Rectangle() {
        std::cout << "Rectangle Destructor!" << std::endl;
    }
    
    // Override calArea function
    void calArea() override {
        area = width * height;
    }
};


int main() {
    std::cout << std::boolalpha; 
    std::cout << "Is Shape abstract? " << std::is_abstract<Shape>::value << std::endl<< std::endl;

    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);
    std::cout<<std::endl;

    shape1->calArea();
    shape2->calArea();

    std::cout << "Area of Circle: " << shape1->getArea() << std::endl;
    std::cout << "Area of Rectangle: " << shape2->getArea() << std::endl;
    std::cout<<std::endl;

    // Clean up
    delete shape1;
    delete shape2;

    return 0;
}
