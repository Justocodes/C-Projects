//Calculate the distance between 2 points if the coordinates are known

#include <iostream>
#include <cmath>
#include <string>

using namespace std;



int main()
{
	double point1X, point1Y;
	double point2X, point2Y;
	double distance;


	cout << "Enter the coordinates of two "
		<< "points in the X-Y plane: ";
	cin >> point1X >> point1Y >> point2X >> point2Y;
	cout << endl;

	distance = sqrt(pow(point2X - point1X, 2)
		+ pow(point2Y - point1Y, 2));

	cout << "The distance between the points "
		<< "(" << point1X << ", " << point1Y << ") and "
		<< "(" << point2X << ", " << point2Y << ") is: "
		<< distance << endl << endl;
	system("pause");
	return 0;
}