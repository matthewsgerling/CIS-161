//
// Created by matth on 9/27/2019.
// Matthew Gerling
//msgerling@dmacc.edu

#include <iostream>
#include <iomanip>
using namespace std;


double averageFourTemperatures(int temp1, int temp2, int temp3, int temp4){
    double average = (temp1 + temp2 + temp3 + temp4) / 4;
    return average;
}

int main(){
    int temp1, temp2, temp3, temp4;
    cout << "Enter four temperatures: " << endl;
    cin >> temp1 >> temp2 >> temp3 >> temp4;

    cout << "The average temperature was " << averageFourTemperatures(temp1, temp2, temp3, temp4) << " degrees." << endl;
    return 0;
}
