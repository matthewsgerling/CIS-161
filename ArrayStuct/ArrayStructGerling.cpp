/*
 *  msgerling@dmacc.edu
 *  matthew Gerling
 *      Author: matth
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


struct Budget {
    int Rent = 0;
    int Garbage = 0;
    double Gas = 0;
    double Water = 0;
    string Donation;
};

const int NUM = 4;
Budget month[NUM];

int main() {
    Budget b;
    int rent = 0;
    int garbage = 0;
    double gas = 0;
    double water = 0;
    double total = 0;
    string donation;
    int i = 0;

    while (i < 4) {
        cout << "Enter Rent, Garbage, Gas, Water and Donation for the " << i+1 << " Month" << endl;
        cin >> rent >> garbage >> gas >> water >> donation;

        month[i] = {rent, garbage, gas, water, donation};
        total = total + b.Water+ b.Rent + b.Garbage + b.Gas;
        i++;
    }

    cout  << total << setprecision(2) << fixed << endl;

}
