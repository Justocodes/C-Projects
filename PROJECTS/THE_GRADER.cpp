#include<iostream>
#include <string>
#include <iomanip>


using namespace std;

int main() {
	int total_points_accumalated;
	string Final_Grade;

	cout << "Enter the Total Amount of points accumalated by student  ";
	cin >> total_points_accumalated;
	cout << endl;

	if (total_points_accumalated <= 5 && total_points_accumalated >= 0) {
		Final_Grade = "F";
		cout << "Final Grade =  " << Final_Grade;
		cout << endl;
	}
	else if (total_points_accumalated == 6) {
		Final_Grade = "D";
		cout << "Final Grade =  " << Final_Grade;
		 cout << endl;
	}
	else if (total_points_accumalated == 7) {
		Final_Grade = "C";
		cout << "Final Grade =  " << Final_Grade;
		 cout << endl;
	}

	else if (total_points_accumalated == 8) {
		Final_Grade = "B";
		cout << "Final Grade =  " << Final_Grade;
		 cout << endl;
	}

	else if (total_points_accumalated == 9) {
		Final_Grade = "A";
		cout << "Final Grade =  " << Final_Grade;
		 cout << endl;
	}

	else if (total_points_accumalated == 10) {
		Final_Grade = "A+";
		cout << "Final Grade = " << Final_Grade;
		 cout << endl;
	}

	else if (total_points_accumalated < 0 || total_points_accumalated > 10) {

		cout << "Invalid Entry ";
		cout << endl;
	}

	else {
		cout << "Invalid Entry ";
		cout << endl;

	}
	system("pause");
	return 0;
}