/*
==========================================
Problem Name : Hierarchical Inheritance
Language     : C++ Programming
Author       : Pushkar Alange
Description  : This program demonstrates hierarchical inheritance using one base class and two derived classes.
==========================================
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    cout << "Dog:" << endl;
    dog.eat();
    dog.bark();

    cout << "\nCat:" << endl;
    cat.eat();
    cat.meow();

    return 0;
}
