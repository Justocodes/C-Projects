//To calculate the balance due on a credit card
//and the penalty to be added to your next month bill.

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	double creditCardBalance;
	double payment;
	double balance;
	double penalty;
	double INTEREST_RATE;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter balance due on credit card: ";
	cin >> creditCardBalance;
	cout << endl;

	cout << "Enter the payment: ";
	cin >> payment;
	cout << endl;

	cout << "Enter interest rate: ";
	cin >> INTEREST_RATE;
	cout << endl;

	balance = creditCardBalance - payment;

	if (balance > 0)
		penalty = balance * INTEREST_RATE;

	cout << "The balance is: $" << balance
		<< endl;
	cout << "The penalty to be added to your next month "
		<< "bill is: $" << penalty << endl;
	system("pause");
	return 0;
}