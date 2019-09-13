//
// Created by matth on 9/12/2019.
//

#include "ConditionalOperator.h"
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score(1-6): " << endl;
    cin >> score;

    if (1 > score or score > 6 )
        cout << "Your score is not one through six." << endl;
    else
        if (score >= 5)
            cout << "The test score of " << score << " is passing." << endl;
        else
            cout << "The test score of " << score << " is not passing." << endl;
    return 0;
}
