//********************************************************
//CIS 225 PRACTICING CONVERSION UNITS
//
//Program Conversion Measurements: This program converts
//measurements in bytes and bits into kilobits using
//the formula bits per byte 8 
//*******************************************************

//header file
#include <iostream>

using namespace std;

//name constants
const int BITS_PER_BYTE = 8;

int main()
{
	//declear variables
	int bytes, bits;
	int totalBits;
	int kilobits;

	//Statements: Step 1-Step 6
	cout << "Enter two integers, one for bytes and "
		<< "one for bits: ";                              //Step 1
	cin >> bytes >> bits;                                 //Step 2
	cout << endl;

	cout << "The numbers you entered are " << bytes
		<< " for bytes and " << bits
		<< " for bits" << endl;                         //Step 3
	totalBits = BITS_PER_BYTE * bytes + bits;      //Step 4

	cout << "The total number of bits = "
		<< totalBits << endl;                        //Step 5


	cout << "The number of kilobits = "
		<< totalBits/1000  << endl;                         //Step 6
	system("pause");

	return 0;
}