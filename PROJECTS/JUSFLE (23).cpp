#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int s, t, r, u;

	cout << "Please enter the following values: a value for s, a value for t, a value for r, and a value for u: ";
	cin >> s >> t >> r >> u;
	cout << endl;
	cout << "you entered " << s << " for s" << endl;
	cout << "you entered " << t << " for t" << endl;
	cout << "you entered " << r << " for r" << endl;
	cout << "you entered " << u << " for u" << endl;

	switch (s > t && r < u) {
	case true:
		cout << " The expression ( s > t && r < u ) evaluates to true.";
		break;
		cout << endl;
	case false:
		cout << " The expression ( s > t && r < u ) evaluates to false.";
		break;
		cout << endl;
	}


	switch (!s - u < t + r) {
	case true:
		cout << " The expression (!s-u < t + r) evaluates to true.";
		break;
		cout << endl;
	case false:
		cout << " The expression (!s-u < t + r) evaluates to false.";
		break;
		cout << endl;
	}

	system("pause");
	return 0;


}
