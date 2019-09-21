//
// Created by matth on 9/21/2019.
// Matthew Gerling
//msgering@dmacc.edu

#include <iostream>
using namespace std;

int main(){
    int perHour = 1, time2;
    double distance, speed;
    char answer = 'y';


    while(answer == 'y') {
        distance = 0;
        perHour = 1;


        cout << "Enter the speed of travel (miles per hour): " << endl;
        cin >> speed;
        cout << "Enter the length of time traveled (hours): " << endl;
        cin >> time2;


        cout << "Hour | Miles" << endl;
        while (time2 > 1 && speed > 0) {
            while (perHour <= time2) {
                distance = speed * perHour;
                cout << perHour << "   |  " << distance << endl;
                perHour++;
            }
            break;
        }

        cout << "Welcome to St. Louis" << endl;
        cout << "Go again? (y/n)" << endl;
        cin >> answer;
    }
}

