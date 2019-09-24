//
// Created by matth on 9/23/2019.
// Matthew Gerling
// msgerling@dmacc.edu

#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ifstream inputFile;
    ofstream outputFile;
    int number, temp = 0, average = 0, finalAvg = 0;

    inputFile.open("scores.txt");
    cout << "Start reading scores." << endl;

    if (inputFile) {
        while (inputFile >> number) {
            if (number != -999) {
                cout << number << endl;
                average = number + average;
                temp++;
            }
        }
    } else {
        cout << "Error opening the file.\n";
    }

    finalAvg = average/temp;
    cout << finalAvg << endl;
    inputFile.close();
    cout << "End reading scores." << endl;


    number = 0;

    inputFile.open("scores.txt");
    outputFile.open("scoresout.txt");
    cout << "Writing to scoresout." << endl;

    while (inputFile >> number) {
        if (number != -999) {
            outputFile << number + finalAvg << endl;
        }
    }
    inputFile.close();
    outputFile.close();
}