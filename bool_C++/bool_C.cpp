//
// Created by matth on 9/11/2019.
//

#include <iostream>
using namespace std;

int main() {
    bool anotherNumber;
    cout << "Do you want to enter another number?" << endl;
    cin >> anotherNumber; // Must must enter true or false?
    if (anotherNumber)
        cout << "True: " << anotherNumber << "!\n";
    else
        cout << "False: " << anotherNumber << "!\n";
    return 0;
}