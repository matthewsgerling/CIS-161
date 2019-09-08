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
    double total, tax, price = 19.97, shipping = 2.34, shippingCost;
    int cartWeight = 210, boxWeight = 17, fullWeight, boxNumb;

    cout << "Enter the weight of the cart :" << endl;
    cin >> fullWeight;

    double tempWeight = fullWeight - cartWeight;
    boxNumb = static_cast<int>(tempWeight / boxWeight);

    price = price * boxNumb;
    shippingCost = shipping * boxNumb;
    tax = price * 0.05;
    total = static_cast<double>(price + tax + shippingCost);

    cout << "-----------------------------------------------" << endl;
    cout << "Cost of " << boxNumb << " Units: $" << setprecision(2) << fixed << price << endl;
    cout << "Sales tax (5%): $" << setprecision(2) << fixed << tax << endl;
    cout << "Shipping Cost: $" << setprecision(2) << fixed << shippingCost << endl;
    cout << "Total Price: $" << setprecision(2) << fixed << total << endl;
    cout << "-----------------------------------------------" << endl;
}
