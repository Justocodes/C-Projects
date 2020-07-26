#include <iostream>
// This program illustrates how data in the variables are
//manipulated.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num1, num2;
	double sale;
	char first;
	string str;
	string newstr;

	num1 = 4;
	cout << "num1 = " << num1 << endl;

	num2 = 4 * 5 - 11;
	cout << "num2 = " << num2 << endl;

	sale = 0.02 * 1000;
	cout << "sale = " << sale << endl;
	first = 'D';
	cout << "first = " << first << endl;

	str = "It is a sunny day.";
	cout << "str = " << str << endl;
	cout << "Enter now a new string" << newstr << endl;
	cin >> newstr;
	cout << "The new string you entered is " << newstr << endl;
	system("pause");
	return 0;
}