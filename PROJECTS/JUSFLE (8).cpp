// This Program  illustrated how mixed programs are evaluated.

#include <iostream>

using namespace std;

int main()

{
	cout << " 3x2 / 2x2 + 5.5x2 = " << 3 * 2 / 2 * 2 + 5.5 * 2 << endl;
	cout << "This mixed expression is evaluated in order of operations and resulting an integer" << endl;
	cout << " 15.6x2 / 2x2 + 5x2 = " << 15.6 * 2 / 2 * 2 + 5 * 2 << endl;
	cout << "Resulting in a floating point operant of a set of order of operation expression" << endl;
	cout << " 4x2 + 5x2 / 2.0x2 = " << 4 * 2 + 5 * 2 / 2.0 * 2 << endl;
	cout << " The order of operations evaluated and expressing a result of an integer" << endl;
	cout << "4x2 x 3x2 + 7x2 / 5x2 - 25.5x2 = " << 4 * 2 * 3 * 2 + 7 * 2 / 5 * 2 - 25.5 * 2 << endl;
	cout << "The order of operations including *, + of integers and - of floating point operant resulting in an integer" << endl;
	system("pause");
	return 0;
}
