//
// Created by matth on 9/27/2019.
// Matthew Gerling
// msgerling@dmacc.edu

#include <iostream>
#include <iomanip>
using namespace std;

void averageTemperature(){
    int i = 0;
    double average, temp, final = 0;

    while (temp != -999) {
        cout << "Enter the Temperature and enter -999 to stop." << endl;
        cin >> temp;
        if (temp != -999) {
            average = average + temp;
            i++;
        }
    }

    final = average / i;
    cout << "The average temperature was " << setprecision(2) << final << fixed << " degrees." << endl;
}



int main() {
    averageTemperature();
    return 0;
}
