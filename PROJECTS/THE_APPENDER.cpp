#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	char line;
	cout << " Enter name to be decrypted ";

	cin.get(line);
	cout << line;

	cin.get(line);
	cout << line;

	cin.putback(line);
	cin.get(line);
	cout << line;


	cin.putback('M');
	cin.get(line);
	cout << line;


	cin.putback('i');
	cin.get(line);
	cout << line;



	cin.get(line);
	cout << line;

	cin.putback('M');
	cin.get(line);
	cout << line;

	cin.get(line);
	cout << line;



	cin.putback(line);
	cin.get(line);
	cout << line;

	cin.putback(line);
	cin.get(line);
	cout << line;


	cin.get(line);
	cout << line;


	cin.putback('i');
	cin.get(line);
	cout << line;

	cin.get(line);
	cout << line;
	cout << endl;

	system("pause");

	return 0;


}
