//
// Created by matth on 9/15/2019.
// Matthew Gerling
//msgerling@dmacc.edu

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int score = 0, total = 0, finalTotal = 0;
    int i = 0;

    while (i < 10) {

        cout << "Enter ten scores between 0 and 10:" << endl;
        cin >> score;

        if (score <= 10 && score >= 0) {
            if (score == 10) {
                total = (total + score) * 2;
                } else if (score == 5) {
                total = (total + score) / 2;
            } else {
                total = total + score;
            }
        } else {
            return 0;
        }
        i++;
    }

    finalTotal = total / 10;

    cout << "Final total is : " << finalTotal << endl;

    if (total >= 100) {
        cout << "Test Warrior" << endl;
    } else if (finalTotal >= 60 && finalTotal < 100) {
        cout << "Good Job!" << endl;
    }
}