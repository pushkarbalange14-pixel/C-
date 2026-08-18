/*
==========================================
Problem Name : Multiple Inheritance
Language     : C++ Programming
Author       : Pushkar Alange
Description  : This program demonstrates multiple inheritance using two base classes.
==========================================
*/

#include <iostream>
using namespace std;

class Student {
public:
    void studentInfo() {
        cout << "Student Information" << endl;
    }
};

class Sports {
public:
    void sportsInfo() {
        cout << "Sports Information" << endl;
    }
};

class Result : public Student, public Sports {
public:
    void display() {
        cout << "Result Information" << endl;
    }
};

int main() {
    Result obj;

    obj.studentInfo();
    obj.sportsInfo();
    obj.display();

    return 0;
}
