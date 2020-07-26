#include <iostream>
#include <iomanip>
// This program uses the switch, and break commands
using namespace std;

int main()
{
	double firstnumber, secondnumber;
	char mathoperator;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter two numbers: ";
	cin >> firstnumber >> secondnumber;
	cout << endl;

	cout << "Enter operator: + (addition), - (subtraction),"
		<< " * (multiplication), / (division): ";
	cin >> mathoperator;
		cout << endl;

		cout << firstnumber << " " << mathoperator << " " << secondnumber << " = ";

		switch (mathoperator)
		{
		case '+':
			cout << firstnumber + secondnumber << endl;
			break;
		case '-':
			cout << firstnumber - secondnumber << endl;
			break;
		case '*':
			cout << firstnumber * secondnumber << endl;
			break;
		case '/':
			if (secondnumber != 0)
				cout << firstnumber / secondnumber << endl;
			else
				cout << "ERROR \nCannot divide by zero" << endl;
			break;
		default:
			cout << "Illegal operation" << endl;
		}
		system("pause");
		return 0;
}