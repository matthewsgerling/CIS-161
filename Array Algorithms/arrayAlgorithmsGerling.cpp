//
// Created by matth on 10/10/2019.
//Matthew Gerling
//msgerling@dmacc.edu

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ARRAY_SIZE = 100;
int hotel[ARRAY_SIZE];


int main() {
    int i = 0;
    const int MAX = 100, MIN = 0;

    unsigned seed = time(0);

    srand(seed);

    while(i < 100) {
        hotel[i] = (rand() % (MAX - MIN + 1)) + MIN;
        if(hotel[i] >= 75) {
            cout << hotel[i] << endl;
        }
        i++;
    }
}