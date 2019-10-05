/*
 *
 *
 *  Created on: Oct 3, 2019
 *  msgerling@dmacc.edu
 *      Author: Matthew Gerling
 */
#include <iostream>
using namespace std;

// Prototype (Wait, what's this? Hmmm... how would you find out? )
double calculateBill(double memberRate, int months)
{
    return (memberRate * months);
}

int main()
{
    // local variables
    int numMonths = 10;
    double rate = 25.99;
    double total;

    // Perform a test for $25.99 membership.
    cout << "Calling the calculateBill function with arguments "<< endl;
    cout << rate << " and " << numMonths << "\n";
    cout << "Bill is " << calculateBill(rate, numMonths) << "\n";

    // Perform a test for 70.50 membership.
    numMonths = 5;
    rate = 70.50;
    cout << "Calling the calculateBill function with arguments " << endl;
    cout << rate << " and " << numMonths << "\n";
    total = calculateBill(rate, numMonths);
    cout << "Bill is " << calculateBill(rate, numMonths) << "\n";

    // Perform a test for $-5 membership.
    numMonths = 5;
    rate = -5;
    cout << "Calling the calculateBill function with arguments " << endl;
    cout << rate << " and " << numMonths << "\n";
    total = calculateBill(rate, numMonths);
    cout << "Bill is " << calculateBill(rate, numMonths) << "\n";

//// What should you add to your function now?

    // Perform a test for -10 months. Keep -5 to make sure you added that input validation
    numMonths = -10;
    rate = -5;
    cout << "Calling the calculateBill function with arguments " << endl;
    cout << rate << " and " << numMonths << "\n";
    total = calculateBill(rate, numMonths);
    cout << "Bill is " << calculateBill(rate, numMonths) << "\n";

//// What should you add to your function now?

    return 0;
}
