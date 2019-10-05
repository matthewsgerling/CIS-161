//
// Created by matth on 10/5/2019.
//Matthew Gerling
//msgerling@dmacc.edu

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void change (int add, double multiply, string phrase) {

    add = add + 10;
    multiply = multiply * 2;
    phrase = phrase + "ub";

    cout << "The int is " << add << endl;
    cout << "The double was " << multiply << endl;
    cout << "The string was " << phrase << endl;
}


int main(){

    int add;
    double multiply;
    string phrase;

    cout << "Enter an int, double, and a string." << endl;
    cin >> add >> multiply >> phrase;

    cout << "The int is " << add << endl;
    cout << "The double was " << multiply << endl;
    cout << "The string was " << phrase << endl;

    change(add, multiply, phrase);
}

