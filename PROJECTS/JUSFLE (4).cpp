//********************************************************
//CIS 225 PRACTICING CONVERSION UNITS
//
//Program Conversion Measurements: This program converts
//measurements in feet and inches into centimeters using
//the formula that 1 inch is equal to 2.54 centimeters.
//*******************************************************

    //header file
#include <iostream>

using namespace std;

    //name constants
const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;

int main()
{
	//declear variables
	int feet, inches;
	int totalInches;
	double centimeter;

	//Statements: Step 1-Step 7
	cout << "Enter two integers, one for feet and "
		<< "one for inches: ";                              //Step 1
	cin >> feet >> inches;                                 //Step 2
	cout << endl;

	cout << "The numbers you entered are " << feet
		<< " for feet and " << inches
		<< " for inches" << endl;                         //Step 3
	totalInches = INCHES_PER_FOOT * feet + inches;      //Step 4

	cout << "The total number of inches = "
		<< totalInches << endl;                        //Step 5

	centimeter = CENTIMETERS_PER_INCH * totalInches;   //Step 6

	cout << "The number of centimenters = "
		<< centimeter << endl;                         //Step 7
	system("pause");

	return 0;
}