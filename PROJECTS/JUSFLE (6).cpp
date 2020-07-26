//******************************************************
//CIS 225 PRACTICING CONVERSION UNITS
//Dr. Castillo Designs
//Program Calculates Sales Taxes Due:This Program Calculates
//the toltal due on sale taxes for a quater period of the year
//based on the sales and jurisdiction.
//*****************************************************

//header file
#include <iostream>

using namespace std;

//named constants
const double LOCAL_TAX_RATE = 0.08875;
const double CREDIT_PERC = 0.05;

int main()
{
	//declare variables
	int GROSS, NON_TAXABLE;
	int TAXABLE;
	double PRE_TAX, VENDOR_CREDIT, PEN_AND_INT, TAX_DUE;

	//Statements:
	cout << "Enter two integers, one for GROSS "
		<< "One for NONTAXABLE: ";                     //Step 1
	cin >> GROSS >> NON_TAXABLE;                       //Step 2
	cout << endl;
	cout << "Enter the penalties and interest due at this time:   ";
	cin >> PEN_AND_INT;
	cout << endl;

	cout << "The numbers you entered are " << GROSS
		<< " For GROSS SALES and " << NON_TAXABLE
		<< " SALES EXEMPT FROM TAXES. "
		<< " PENALTIES AND INTEREST " << PEN_AND_INT
		<< endl;                  //Step 3
	TAXABLE = GROSS - NON_TAXABLE;
	cout << "The Taxable Total of the Sales for this quater is = " << TAXABLE << endl;

		 PRE_TAX = TAXABLE * LOCAL_TAX_RATE;
	cout << "The PRE_TAX for this Quarter is = " << PRE_TAX << endl;

	VENDOR_CREDIT = PRE_TAX * CREDIT_PERC;
	cout << "The amount to be credited to vendor for this quarter is = " << VENDOR_CREDIT << endl;
	cout << "The FINAL CALCULATION of the SALES TAXES DUE for this quarter is = " << PRE_TAX + PEN_AND_INT - VENDOR_CREDIT << endl;

	system("pause");
	return 0;
}