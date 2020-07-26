// This programn illustrates how input, ignore and output statements work

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char text1, text2;

	cout << "Enter now a sentence   ";


	cin >> text1;
	cin.ignore(5, '.');
	cin >> text2;


	cout << "the values assigned to text1 and text2 are   ";
	cout << text1 << "  " << "and" << "  " << text2;
	cout << endl;
	cout << "========================================";
	cout << endl;

	system("pause");
	return 0;
}