//
// Created by matth on 10/28/2019.
//msgerling@gmail.com
//Matthew Gerling

#include <iostream>
using namespace std;


int main(){

    const int NUM_ARRAY = 4;
    float floatArray[NUM_ARRAY] = {15, 30, 5, 10};
    float *Arrayptr = nullptr;
    float *floatArrayCopy = nullptr;




    for(int i = 0; i < NUM_ARRAY; i++) {
        if (floatArray[i] > floatArray[i + 1]) {
            cout << "Array [" << i << "] is greater than Array [" << i + 1 << "]" << endl;
        } else if (floatArray[i] < floatArray[i + 1]) {
            cout << "Array [" << i << "] is less than Array [" << i + 1 << "]" << endl;
        }

    }


    cout << endl;
    cout << endl;

    int temp = 0;

    for(int i = 8; i > NUM_ARRAY; i--) {
        Arrayptr = &floatArray[temp];

        if (*Arrayptr > floatArray[temp + 1]) {
            cout << "Array [" << temp << "] is greater than Array [" << temp + 1 << "]" << endl;
        } else if (*Arrayptr < floatArray[temp + 1]) {
            cout << "Array [" << temp << "] is less than Array [" << temp + 1 << "]" << endl;
        }
        temp++;
    }

    cout << endl;
    cout << endl;


    for(int i = 0; i < NUM_ARRAY; i++) {
        Arrayptr = &floatArray[i];
        floatArrayCopy = &floatArray[i];

        if (Arrayptr == floatArrayCopy) {
            cout << "Array pointer and floatArrayCopy have the same memory location." << endl;
        } else if (Arrayptr != floatArrayCopy) {
            cout << "Array pointer and floatArrayCopy do not have the same memory location." << endl;
        }
        temp++;
    }

}