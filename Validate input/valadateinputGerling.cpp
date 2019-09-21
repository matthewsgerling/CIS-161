//
// Created by matth on 9/20/2019.
// Matthew Gerling
// msgerling@dmacc.edu


#include <iostream>
using namespace std;

int main() {
    int number, guess;

    number = rand() % 100;

    while (guess != number) {
        cout << "Enter a number." << endl;
        cin >> guess;
    }
}