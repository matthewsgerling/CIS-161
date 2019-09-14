//
// Created by matth on 9/13/2019.
//

#include "boxWidth.h"
#include <iostream>
using namespace std;

int main() {
    double width, height, length, volume, surfaceArea;

    cout << "Enter the length, width and height. " << endl;
    cin >> width >> height >> length;

    volume = width * length * height;
    surfaceArea = 2*(width * height) + 2*(length * height) + 2*(width * length);

    cout << "The volume of the box is: " << volume << "\nThe surface area is: " << surfaceArea << endl;
}
