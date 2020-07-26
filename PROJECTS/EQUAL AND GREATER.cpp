#include<iostream>
#include <string>
#include <iomanip>


using namespace std;

int main() {
	int num1, num2, num3;

	cout << "Please Enter Values For Num1, Num2, and Num3  ";
	cin >> num1 >> num2 >> num3;
	cout << endl;

	if (num1 > num2 && num1 > num3)
	{
		cout << "Num1 is the greatest ";
		if (num3 == num2){
			cout << "and Num3 and num2 are equal";
			cout << endl;
		}

	}

	else if (num2 > num1 && num2 >num3) {
		cout << "Num2 is the greatest";
		if (num3 == num1){
			cout << " and Num1 and num3 are equal";
			cout << endl;
		}
	}

	else if (num3 > num1 && num3 >num2)  {
		cout << "Num3 is the greatest";
		if (num2 == num1){
			cout << " and Num1 and num2 are equal "; 
			cout << endl;
		}
	}

	else if (num1 == num2 && num1 == num3) {

		cout << "All three are equal ";
		cout << endl;

	}

	else if (num2 == num1){
		cout << "Num1 and num2 are equal "; 
		cout << endl;
	}

	else if (num3 == num1){
		cout << "Num1 and num3 are equal "; 
		cout << endl;
	}

	else if (num2 == num3){
		cout << "Num2 and num3 are equal "; 
		cout << endl;
	}

	else {
		cout << "Invalid entry "; 
		cout << endl;
	}

	system("pause");


	return 0;
}

