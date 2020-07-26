//Calculate the volume of a Sphere if the radius is known

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const double PI = 3.1416;

int main()
{
	
	double sphereRadius;
	double sphereVolume;
	
	cout << "Enter the radius of the sphere:  ";
	cin >> sphereRadius;
	cout << endl;
	
	sphereVolume = (4.0/3) * PI * pow(sphereRadius, 3);

	cout << "The volume of the sphere is:  "
		<< sphereVolume << endl << endl;
	 
	system("pause");
	return 0;
}