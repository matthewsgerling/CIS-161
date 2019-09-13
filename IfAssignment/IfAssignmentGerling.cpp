//
// Created by matth on 9/12/2019.
//

#include "IfAssignmentGerling.h"
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score:" << endl;
    cin >> score;
    if (score >= 7)
        cout << "The test score of " << score << " is passing." << endl;
    return 0;
}
