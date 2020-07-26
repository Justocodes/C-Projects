 // This program illustrates how input, ignore and output statements work

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int basenum, powerof, result1, result2;

	cout << "Enter two number, base first then enter power to  ";



	cin >> basenum;
	cin >> powerof;
	result1 = pow(basenum, powerof);
	result2 = sqrt(basenum);

	cout << "the result of taking the basenum to powerof is  ";
	cout << result1;
	cout << endl;
	cout << "the extraction of the square root of basenum is ";
	cout << result2;
	cout << endl;
	cout << "***********************************";
	cout << endl;

	system("pause");
	return 0;
}