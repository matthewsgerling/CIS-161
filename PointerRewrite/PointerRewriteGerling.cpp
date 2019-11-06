//
// Created by matth on 10/27/2019.
// Matthew Gerling
// msgerling@dmacc.edu

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int x = 10;
    int *y = &x;

    int temp = x;
    x = temp * temp;
    y = &x;
    int *var = x + y;
    cout << var <<endl;
}

