#include <iostream>
using namespace std;

class Base {
public:
    
    virtual void display() {
        cout << "Base::display() called" <<endl;
    }
    
    
    virtual void pureVirtual() = 0;
};


class Derived : public Base {
public:
    
    void display() override {
        cout << "Derived::display() called" << endl;
    }

    
    void pureVirtual() override {
        cout << "Derived::pureVirtual() called" << endl;
    }
};

int main() {
    Base *basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

   
    basePtr->display();

    
    basePtr->pureVirtual();

    return 0;
}
