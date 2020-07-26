#include <iostream>
#include <string>
using namespace std;

int main()
{
	char input;
	int num, count, check, counter;
	string input_string[20], output_string[20];
	bool runprog;

	count = 0;
	runprog = true;

	while (runprog == true)
	{
		cout << "Please enter a character ";
		cin >> input;
		num = static_cast<int>(input)-static_cast<int>('A');
		count = count + 1;

		if (num >= 32 && num < 58)
		{
			num = num - 32;
		}

		if (num >= 18 && num <= 24)
		{
			num = num - 1;
		}
		else if (num == 25)
		{
			num = num - 2;
		}

		check = num / 3;

		if (num == -30)
		{
			check = 50;
		}

		switch (check)
		{
		case 0: cout << "The corresponding number is 2" << endl << endl;
			input_string[count] = input;
			output_string[count] = "2";
			break;
		case 1: cout << "The corresponding number is 3" << endl << endl;
			input_string[count] = input;
			output_string[count] = "3";
			break;
		case 2: cout << "The corresponding number is 4" << endl << endl;
			input_string[count] = input;
			output_string[count] = "4";
			break;
		case 3: cout << "The corresponding number is 5" << endl << endl;
			input_string[count] = input;
			output_string[count] = "5";
			break;
		case 4: cout << "The corresponding number is 6" << endl << endl;
			input_string[count] = input;
			output_string[count] = "6";
			break;
		case 5: cout << "The corresponding number is 7" << endl << endl;
			input_string[count] = input;
			output_string[count] = "7";
			break;
		case 6: cout << "The corresponding number is 8" << endl << endl;
			input_string[count] = input;
			output_string[count] = "8";
			break;
		case 7: cout << "The corresponding number is 9" << endl << endl;
			input_string[count] = input;
			output_string[count] = "9";
			break;
		case 50: cout << "The dialer is terminated" << endl << endl;
			runprog = false;
			break;
		default: cout << "The input is not valid" << endl << endl;
			count = count - 1;
			break;

			input_string[count] = input;
			count = count + 1;
		}
	}

	counter = count;
	count = 0;
	cout << "The character inputs were:   ";
	while (count <= counter)
	{
		cout << " " << input_string[count];
		count = count + 1;
	}

	counter = count;
	count = 0;

	cout << endl << "The corresponding number was:";
	while (count <= counter)
	{
		cout << " " << output_string[count];
		count = count + 1;
	}
	cout << endl;

	system("pause");
	return 0;
}