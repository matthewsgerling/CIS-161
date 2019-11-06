/*
 * Formattingoutputv2.cpp
 *
 *  Created on: Sep 6, 2019
 *  msgerling@dmacc.edu
 *      Author: Matthew Gerling
 */

#include <iostream>
#include <iomanip>
using namespace std;

int vals = 1;
int tempGrade = 0;
double GradePtr;
double finalGrade;


double averageScore(double grades[]){
    while(vals > 1) {
         finalGrade = GradePtr + grades[vals];
         vals--;
    }

    return finalGrade;
}


int main() {
    double grades[vals];

    cout << "Enter a grade to have the average of and type -999 to average them." << endl;
    cin >> tempGrade;

    while (tempGrade != -999) {
        if(tempGrade > 0) {
            grades[vals] = tempGrade;
            vals-1;
        }

        cout << "Enter a grade to have the average of and type -999 to average them." << endl;
        cin >> tempGrade;
    }

    cout << "The average Grade is " << averageScore(grades) << endl;

}
