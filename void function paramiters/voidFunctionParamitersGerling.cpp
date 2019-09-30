//
// Created by matth on 9/27/2019.
//Matthew Gerling
//msgerling@dmacc.edu

#include <iostream>
#include <iomanip>
using namespace std;


void averageFourTemperatures(int temp1, int temp2, int temp3, int temp4){
    double average = (temp1 + temp2 + temp3 + temp4) / 4;
    cout << "The average temperature was " << setprecision(2) << average << fixed << endl;

}

int main(){
    int temp1, temp2, temp3, temp4;
    cout << "Enter four temperatures: " << endl;
    cin >> temp1 >> temp2 >> temp3 >> temp4;

    averageFourTemperatures(temp1, temp2, temp3, temp4);
    return 0;
}
