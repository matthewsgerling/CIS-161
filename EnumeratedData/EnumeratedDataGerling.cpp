//
// Created by matth on 11/4/2019.
// Matthew Gerling
// msgerling@dmacc.edu


#include <iostream>
#include <string>
using namespace std;


enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};


int main(){

    string goAgain = "y";
    int dayInt;
    Day today, tomorrow, yesterday;

    while(goAgain != "no"){
        cout << "Enter the Day Today. (1-7)" << endl;
        cin >> dayInt;

        for(int i = 0; i < 3, i++;) {
            switch (dayInt) {
                case 1:
                    today = SUNDAY;
                    tomorrow = MONDAY;
                    yesterday = SUNDAY;
                    break;
                case 2:
                    today = MONDAY;
                    tomorrow = TUESDAY;
                    yesterday = SUNDAY;
                    break;
                case 3:
                    today = TUESDAY;
                    tomorrow = WEDNESDAY;
                    yesterday = MONDAY;
                    break;
                case 4:
                    today = WEDNESDAY;
                    tomorrow = THURSDAY;
                    yesterday = TUESDAY;
                    break;
                case 5:
                    today = THURSDAY;
                    tomorrow = FRIDAY;
                    yesterday = WEDNESDAY;
                    break;
                case 6:
                    today = FRIDAY;
                    tomorrow = SATURDAY;
                    yesterday = THURSDAY;
                    break;
                case 7:
                    today = SATURDAY;
                    tomorrow = SUNDAY;
                    yesterday = FRIDAY;
                    break;
            }
        }

        cout << "The day is " << today << endl;
        cout << "Tomorrow is " << tomorrow << endl;
        cout << "Yesterday was " << yesterday << endl;
        cout << "Go Again" << endl;
        cin >> goAgain;
    }

}