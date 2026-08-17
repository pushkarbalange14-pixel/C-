/*
==========================================
Problem Name : Abstraction in C++
Language     : C++ Programming
Author       : Pushkar Alange
Description  : This program demonstrates abstraction using an abstract class.
==========================================
*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Rectangle : public Shape {
private:
    int length, width;

public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    void area() override {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() {
    Rectangle r;

    r.getData();
    r.area();

    return 0;
}
