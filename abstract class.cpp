#include <iostream>
using namespace std;

class Shape {
public:
   
    virtual void draw() = 0;

    
    void display() {
        cout << "This is a shape." << endl;
    }
};


class Circle : public Shape {
public:
    
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};


class Rectangle : public Shape {
public:
    
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    

    Circle circle;
    Rectangle rectangle;

    circle.draw();
    circle.display();

    rectangle.draw();
    rectangle.display();

    return 0;
}
