 // Functions peek and putback

#include <iostream>

using namespace std;

int main()
{
	char ch;

	cout << "Line 1: Enter a string:  ";                   //Line 11
	cin.get(ch);                                           //Line 12
	cout << endl;                                          //Line 13
	cout << "Line 4: After first cin.get(ch); "             
		<< "ch = " << ch << endl;                          //Line 15

	cin.get(ch);                                           //Line 17
	cout << "Line 6: After second cin.get(ch); "
		<< "ch = " << ch << endl;                         //Line 19

	cin.putback(ch);                                     //Line 21
	cin.get(ch);                                        //Line 22
	cout << "Line 9: After putback and then "
		<< "cin.get(ch); ch = " << ch << endl;       //Line 24

	ch = cin.peek();                               //Line 26
	cout << "Line 11: After cin.peek(); ch = "
		<< ch << endl;                           //Line 28

	cin.get(ch);                                 //Line 30
	cout << "Line 13: After cin.get(ch); ch = "
		<< ch << endl;                            //Line 32

	cin.get(ch);                                     //Line 34
	cout << "Line 14: After cin.get(ch); ch = "
		<< ch << endl;                                //Line 36

	cin.get(ch);                                     //Line 38
	cout << "Line 16: After cin.get(ch); ch = "
		<< ch << endl;                                //Line 40

	cin.putback(ch);                                //Line 42
	cin.get(ch);                                    //Line 43
	cout << "line 18: After putback and then "
		<< "cin.get(ch); ch = " << ch << endl;         //Line 45

	ch = cin.peek();                                 //Line 47
	cout << "line 11: After cin.peek(); ch = "
	    << ch << endl;                                //Line 49



	cin.putback(ch);                               //Line 53
	cin.get(ch);                                   //Line 54
	cout << "Line 21: After putback and then "
		<< "cin.gt(ch); ch = " << ch << endl;     //Line 56

	system("pause");
	return 0;

}

