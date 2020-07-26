#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double kilograms;
	double pounds;


	cout << fixed << showpoint << setprecision(2) << endl;

	cout << " Enter weight of person in kilograms: ";
	cin >> kilograms;
	 cout << endl;

	pounds = 2.2 * kilograms;
	cout <<  " Weight of person in pounds = " << pounds << endl;
	system("pause");
	return 0;
}