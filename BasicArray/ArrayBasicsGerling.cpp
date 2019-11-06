//
// Created by matth on 10/10/2019.
//Matthew Gerling
//msgerling@dmacc.edu

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 6;
int hours[ARRAY_SIZE];

int main(){
    for (int counter = 0; counter < ARRAY_SIZE; counter++) {
        cout << "Enter an integer for hour[" << counter << "] ";
        cin >> hours[counter];
        cout << "Number " << counter << " value in hour array is: " << hours[counter] << endl;
    }
}

