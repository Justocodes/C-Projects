#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstname, lastname, shape_type;
	char shape;
	bool prog_run;
	double length, width, height, area;

	cout << "Please enter your first name: ";
	cin >> firstname;
	cout << "Please enter your last name: ";
	cin >> lastname;

	cout << endl << endl;
	prog_run = true;


	while (prog_run == true)
	{
		cout << "What type of geometric figure is it?" << endl;
		cout << "Please enter R-Rectangle     T-Triangle     Z-Trapeze: ";
		cin >> shape;
		cout << endl;

		if ((shape == 'r') || (shape == 't') || (shape == 'z') || (shape == 'R') || (shape == 'T') || (shape == 'Z'))
		{
			if (shape == 'r' || shape == 'R')
			{
				cout << "Please enter the length and width of the rectangle: ";
				cin >> length >> width;
				area = length*width;
				shape_type = "rectangle";
				prog_run = false;
			}

			if (shape == 't' || shape == 'T')
			{
				cout << "Please enter the base and heigth of the triangle: ";
				cin >> length >> height;
				area = (length*height) / 2;
				shape_type = "triangle";
				prog_run = false;
			}

			if (shape == 'z' || shape == 'Z')
			{
				cout << "Please enter the large base, small base and heigth of the trapeze: ";
				cin >> length >> width >> height;
				area = (length + width)*(height / 2);
				shape_type = "trapeze";
				prog_run = false;
			}
		}
		else
		{
			cout << "Invalid entry... The only options are R-Rectangle, T-Triangle or Z-Trapeze" << endl << endl;
			system("pause");
			system("cls");
		}
	}

	cout << endl << endl;
	cout << "Thank You " << firstname << " " << lastname << endl;
	cout << "The calculated area is " << area << " square ft" << endl;
	system("pause");
	return 0;
}