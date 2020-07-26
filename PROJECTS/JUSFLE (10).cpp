#include <iostream>

using namespace std;

//named constants
const double CREDIT_PERC = 0.05;

int main()
{
	//declear variables
	int Gross, NON_TAXABLE;
	int TAXABLE;
	double PRE_TAX, VENDOR_CREDIT, PEN_AND_INT, TAX_DUE;
	double LOCAL_TAX_RATE = 0.08875;
	//statements:
	cout << "Enter total paid for taxes...  ";
	cin >> TAX_DUE;
	cout << endl;

	cout << "Enter the amount of non-taxable sales...  ";
	cin >> NON_TAXABLE;
	cout << endl;

	cout << "What is the tax rate according to the jurisdiction?... ";
	cin >> LOCAL_TAX_RATE;
	cout << endl;

	cout << "Enter the vendor credit rate according to the state... ";
	cin >> VENDOR_CREDIT;
	cout << endl;

	cout << "Enter the penalties and interest paid at the time...";
	cin >> PEN_AND_INT;
	cout << endl;

	cout << "----------------------------------------------------------" << endl;

	cout << "Here is the summary of your Data Entry...." << endl;

	cout << " for total of taxes paid ****  " << TAX_DUE << endl;


	cout << " the amount of sales not subject to taxes is ++++  " << NON_TAXABLE << endl;

	cout << " the local tax rate of the jurisdiction is ****   " << LOCAL_TAX_RATE << endl;

	cout << " every vendor gets a credit based on the state rate of ++++  " << VENDOR_CREDIT << endl;

	cout << " The interest and penalties for late submision is -----  " << PEN_AND_INT << endl;

	cout << "------------------------------------------------------" << endl;
	Gross = (TAX_DUE + LOCAL_TAX_RATE * NON_TAXABLE - LOCAL_TAX_RATE * CREDIT_PERC * NON_TAXABLE - PEN_AND_INT) / ((1 - CREDIT_PERC) * LOCAL_TAX_RATE);
	cout << "THE GROSS SALES FOR THE PERIOD IN QUESTION WAS =  " << Gross << endl;
	cout << "*******************************************************" << endl;

	TAX_DUE = 77.45;
	NON_TAXABLE = 200;
	LOCAL_TAX_RATE = 0.08875;
	VENDOR_CREDIT = 0.05;
	PEN_AND_INT = 10;

	system("pause");
	return 0;
}