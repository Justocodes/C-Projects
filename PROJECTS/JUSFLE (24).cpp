#include <iostream>
#include <string>

using namespace std;
int main()
{
	int x = 25;
	int y = 3;
	int z = 12;
	int w = 4;

	switch (x == z) {
	case true:
		cout << "A. x==z " << "true" << endl;
		break;
	case false:
		cout << "A. x==z " << "false" << endl;
		break;
	}
	cout << endl;
	switch (y != z - 9) {

	case true:
		cout << "B. y != z-9 " << "true" << endl;
		break;
	case false:
		cout << "B. y != z - 9 " << "false" << endl;
		break;
	default:
		return 0;
	}

	cout << endl;
	switch (x - y == z + 10) {

	case true:
		cout << "C. x - y == z + 10 " << "true" << endl;
		break;
	case false:
		cout << "C. x- y == z + 10" << "false" << endl;
		break;

	}

	cout << endl;

	switch (!z < w) {

	case true:
		cout << "D. !z < w " << "true" << endl;
		break;
	case false:
		cout << "D. !z < w " << "false" << endl;
		break;

	}
	cout << endl;
	switch (w - y < x - 2 * z) {

	case true:
		cout << "E. w - y < x - 2 * z " << "true" << endl;
		break;
	case false:
		cout << "E. w - y < x - 2 * z " << "false" << endl;
		cout << endl;
		break;

	}

	cout << endl;
	system("pause");
	return 0;
 }