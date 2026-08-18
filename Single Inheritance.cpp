/*
==========================================
Problem Name : Single Inheritance Example
Language     : C++ Programming
Author       : Pushkar Alange
Description  : This program demonstrates single inheritance using Student and Result classes.
==========================================
*/

#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentData() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Result : public Student {
private:
    float marks;

public:
    void getResult() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\n--- Student Result ---" << endl;
        cout << "Name      : " << name << endl;
        cout << "Roll No   : " << rollNo << endl;
        cout << "Marks     : " << marks << endl;
    }
};

int main() {
    Result student;

    student.getStudentData();
    student.getResult();
    student.display();

    return 0;
}
