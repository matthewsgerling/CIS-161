//
// Created by matth on 9/20/2019.
// Matthew Gerling
// msgerling@dmacc.edu

#include <iostream>
using namespace std;

int main () {

    char continueLoop = 'y';

    do {
        cout << "Would you like to look again (y/n)" << endl;
        cin >> continueLoop;
    } while(continueLoop == 'y');
}