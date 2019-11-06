//
// Created by matth on 10/27/2019.
//Matthew Gerling
//msgerling@dmacc.edu
//
#include "InLineFunctionGerling.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;


inline int Final(){
    return rand() % 20 + 1;
}

string Final(string title){
    int goodProject = rand() % 10 + 1;

    goodProject = rand() % 10 + 1;

    if (goodProject >= 5) {
        return title + " is";
    } else {
        return title + " is not";
    }
}

int main(){
    string answer;

    cout << "Do you prefer a final exam or final project? (enter exam or project)" << endl;
    cin >> answer;

    if (answer != "exam" || answer != "project"){
        if (answer == "exam"){
            cout << "You should study for " << Final() << " hours." << endl;
        } else if (answer == "project") {
            string title;
            cout << "Enter an idea for a final project." << endl;
            cin >> title;

            cout << Final(title) << " a good project idea.";

        }
    }


}


