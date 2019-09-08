//============================================================================
// Name        : RandomGerling.cpp
// Author      : Matthew Gerling
// Version     :
// Copyright   : Your copyright notice
// Description : Display a user-determined number of random numbers, then
//               display the value of RAND_MAX in C++, Ansi-style.
//============================================================================

#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int counter = 0;
    int numRandomNumbers;

    cout << "How many random numbers:" << endl;
    cin >> numRandomNumbers;

    // input numRandomNumbers from user
    while ( counter < numRandomNumbers )
    {
// output next random
        cout << rand() << endl;
        counter++;  // NOTE: use of unary increment operator
    }
// output the value of RAND_MAX
};
