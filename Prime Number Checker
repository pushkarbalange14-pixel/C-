/*
==========================================
Problem Name : Prime Number Checker
Language     : C++ Programming
Author       : Pushkar Alange
Description  : This program checks whether a given number is prime or not.
==========================================
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
        prime = false;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << num << " is a Prime Number." << endl;
    else
        cout << num << " is not a Prime Number." << endl;

    return 0;
}
