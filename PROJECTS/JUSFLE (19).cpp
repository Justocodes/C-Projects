#include <iostream>
// this program uses if and else statements
using namespace std;

int main()
{

	double num;

	cout << "Enter a positive or negative number, or enter 0  :   ";
	cin >> num;
	cout << endl;
	cout << "The number you just entered is " << num
		<< ", and for your info this is a ";

	if (num == 0)
		cout << "zero which means lack of value" << endl;
	else if (num > 0)
		cout << "positive number, greater than zero" << endl;
	else
		cout << "negative number or less than zero" << endl;
	system("pause");
	return 0;
}