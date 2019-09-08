/*
 * Formattingoutputv2.cpp
 *
 *  Created on: Sep 6, 2019
 *  msgerling@dmacc.edu
 *      Author: matth
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double total, tax = 0.05, price = 19.97, shipping = 2.34;
    int cartWeight = 210, boxWeight = 17, boxNumb;

    cout << "Enter Number of boxes" << endl;
    cin >> boxNumb;

    price = price * boxNumb;
    tax = price *.05;
    total = static_cast<int>(price + tax);
    total << setprecision(2) << endl;
    cout << "Total Price: " << total << endl;


}
