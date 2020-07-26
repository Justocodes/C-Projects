#include <iostream>

#include <iomanip>

using namespace std;

int main()

{
	int height;
	int radius;
	double volume;
	double surface;

	cout << " Enter value for height and radius: ";
	cin >> height >> radius;
	cout << endl;

	volume = 3.14 * pow(radius, 2) *height;
	cout << "Volume is equal to: " << volume 
    << endl;

	surface = 2 * 3.14 * radius * height + 2 * 3.14 *pow(radius, 2);
	cout << "Surface is equal to: " << surface 
	<< endl;

	system("pause");
	return 0;

}