/*
 * Casting.cpp
 *
 *  Created on: Sep 6, 2019
 *      Author: matth
 */
#include <limits>
#include <cstddef>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int value;
    double number = 16.23;

    value = static_cast<int>(number);
    cout << setprecision(2) << value << endl;

    return 0;
}