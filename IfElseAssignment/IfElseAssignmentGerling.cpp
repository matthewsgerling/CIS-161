//
// Created by matth on 9/12/2019.
//

#include "IfElseAssignmentGerling.h"
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score:" << endl;
    cin >> score;
    if (score >= 7)
        cout << "The test score of " << score << " is passing." << endl;
    else
        cout << "The test score of " << score << " is not passing." << endl;
    return 0;
}
