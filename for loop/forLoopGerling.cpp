//
// Created by matth on 9/20/2019.
// Matthew Gerling
// msgerling@dmacc.edu

#include <iostream>
using namespace std;

int main () {
    int score;

    for( int a = 1; a <= 10; a = a + 1 ) {
        cout << "Enter Test score " << endl;
        cin >> score;

        cout << "Test #" << a << " score is " << score << "%" << endl;
    }
}

