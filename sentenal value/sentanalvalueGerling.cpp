//
// Created by matth on 9/20/2019.
// Matthew Gerling
// msgerling@dmacc.edu

#include <iostream>
#include <iomanip>
using namespace std;


int main () {
    double average, totalPoints, possibleTotalPoints, maxPoints, points;
    int numberAssignments;

    cout << "Number of assignments: " << endl;
    cin >> numberAssignments;

    while(numberAssignments > 0){

        cout << "Enter points of the assignment and the total points :" << endl;
        cin >> points >> maxPoints;

        totalPoints = totalPoints + points;
        possibleTotalPoints = possibleTotalPoints + maxPoints;
        numberAssignments--;
    }

    average = (totalPoints / possibleTotalPoints) * 100;

    cout << "Your grade was: " << setprecision(2) << average << fixed << "%" << endl;
    cout << "The amount of total points was: " << setprecision(0) << possibleTotalPoints << fixed << endl;
}

