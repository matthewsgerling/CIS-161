//
// Created by matth on 9/15/2019.
// Matthew Gerling
//msgerling@dmacc.edu

#include <iostream>
using namespace std;

int main() {
    int option;
    cout << "Create a Camping Trip (1), Assign a Camper to a Trip (2), Create a Needed Food item (3), Assign a Camper to a Food item (4)" << endl;
    cin >> option;

    switch (option) {
        case 1:
            cout << "Creating a Camping Trip" << endl;
            break;
        case 2:
            cout << "Assigning Camper to Trip" << endl;
            break;
        case 3:
            cout << "Create a Needed Food item" << endl;
            break;
        case 4:
            cout << "Assign a Camper to a Food item" << endl;
            break;
        default:
            cout << "Invalid response." << endl;
    }
}