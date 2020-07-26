#include <iostream>
// this program controls the temperature in a 3 zone dwelling
// Ashma Joseph. Module Programming
using namespace std;

int main()
{

	double temp1 = 9, temp2 = 9, temp3 = 9;
	double set1 = 12, set2 = 12, set3 = 12;
	int S1S2S3;


	cout << "Enter values of current temperture:    ";
	cin >> temp1 >> temp2 >> temp3;
	cout << endl;
	cout << "enter values of desired tempperture:   ";
	cin >> set1 >> set2 >> set3;
	cout << endl;

	cout << "The current tempertures are : " << temp1
		<< " for first floor ";
	cout << endl;
	cout << "The desired temperatures are : " << set1
		<< ", for first floor ";
	cout << endl;

	cout << "The current tempertures are : " << temp2
		<< " for second floor ";
	cout << endl;
	cout << "The desired temperatures are : " << set2
		<< " for second floor ";
	cout << endl;
	
	cout << "The current tempertures are : " << temp3
		<< " for third floor ";
	cout << endl;
	cout << "The desired temperatures are : " << set3
		<< " for third floor ";
	cout << endl;
	

	//1
	if (set1 <= temp1 && set2 <= temp2 && set3 <= temp3) {
		cout << "The logical circuity combination is 0 0 0" << endl;
		system("pause");
		return 0;
	}
	//2
	else if (set1 <= temp1 && set2 <= temp2 && set3 > temp3) {
		cout << "The logical circuity combination is 0 0 1" << endl;
		system("pause");
		return 0;
	}
	//3
	if (set1 <= temp1 && set2 > temp2 && set3 <= temp3) {
		cout << "The logical circuity combination is 0 1 0" << endl;
		system("pause");
		return 0;
	}
	//4

	else if (set1 > temp1 && set2 <= temp2 && set3 <= temp3) {
		cout << "The logical circuity combination is 1 0 0" << endl;
		system("pause");
		return 0;
	}
	//5
	if (set1 > temp1 && set2 > temp2 && set3 <= temp3) {
		cout << "The logical circuity combination is 1 1 0" << endl;
		system("pause");
		return 0;
	}
	//6
	else if (set1 > temp1 && set2 <= temp2 && set3 > temp3) {
		cout << "The logical circuity combination is 1 0 1" << endl;
		system("pause");
		return 0;
	}
	//7
	if (set1 <= temp1 && set2> temp2 && set3 > temp3) {
		cout << "The logical circuity combination is 0 1 1" << endl;
		system("pause");
		return 0;
	}
	//8
	else  {
		cout << "The logical circuity combination is 1 1 1" << endl;
		system("pause");
		return 0;
	}


	return 0;
}

