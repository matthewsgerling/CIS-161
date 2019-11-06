//
// Created by matth on 10/10/2019.
//Matthew Gerling
//msgerling@dmacc.edu

#include <iostream>
#include <iomanip>
using namespace std;

const int ARRAY_SIZE = 5;
int soctest[ARRAY_SIZE];

int main() {
    double finalAvr = 0, avr = 0, score = 0;
    int i = 0;
    cout << "Enter an 5 grades for soctest[]" << endl;
    cin >> soctest[0] >> soctest[1] >> soctest[2] >> soctest[3] >> soctest[4];

    while (i < ARRAY_SIZE) {
        if (soctest[i] >= 0 && soctest[i] <= 100) {
            score = soctest[i];
            avr = avr + score;
        }else{
            return 0;
        }
        i++;
    }


    finalAvr = avr / i;
    cout << "The average of the five grades was " << setprecision(2) << finalAvr << fixed << "%" << endl;
    return 0;

}