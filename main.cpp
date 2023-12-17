/*
 * This program was written by Alexander John for educational purposes.
 *
 * Inheritance allows us to create derived classes from a base class.
 * The derived classes inherit features of the base class.
 *
 * Suppose the same function is defined in both the derived class
 * and the base class. If we call this function using the object of
 * the derived class, the function of the derived class is executed.
 *
 * This is known as function overriding. The function in the derived
 * class overrides the function in the base class.
 *
 */
#include <iostream>

using namespace std;

class Base {
public:
    void print() {
        cout << "Base function" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived function" << endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Derived derived;
    derived.print();

    return 0;
}
