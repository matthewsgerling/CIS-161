// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.

// Matt Gerling

#include <iostream>
#include <iomanip>
#include <cmath> //needed for math functions like sqrt()
using namespace std;

int main()
{
	float a, b;	// the smaller two sides of the triangle 
	float hyp;	// the hypotenuse calculated by the program

	cout << "Please input the value of the two sides" << endl;
	cin >> a >> b;

	hyp = sqrt((a*a) + (b*b));

	// Fill in the assignment statement that determines the hypotenuse

	cout << "The sides of the right triangle are " << a << " and " << b << endl;

    cout << "The hypotenuse is " << hyp << setprecision(2) << fixed << endl;

	return 0;
}
