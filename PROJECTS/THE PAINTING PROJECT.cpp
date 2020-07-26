#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() {

	int bedroom1, bedroom2, basement;
	int window1, window2, window3, window4;
	int length;
	int width;
	int height;
	int total_area_room1, total_area_room2, total_area_basement;
	int total_area;
	int count, counter, rooms;
	double gallons_needed = 50;
	float company1_price_per_gallon, company2_price_per_gallon, company3_price_per_gallon;
	float total_expenses_paint_company1, total_expenses_paint_company2, total_expenses_paint_company3;
	float labor1, labor2, labor3;
	float grand_total_expenses_company1, grand_total_expenses_company2, grand_total_expenses_company3;
	float min;
	string firstname, lastname;


	system("mode 150");
	cout << "                                  BUILDERS QUALITY INC" << endl;
	cout << "                                  1011 AVE QUEENS NY, 70333" << endl;
	cout << "                                    BUILDERSINC@YOURMAIL.com" << endl;
	cout << "                                     TEL: (233)-633-366" << endl << endl << endl;



	cout << fixed << setprecision(2) << endl;

	cout << "Date: " << __DATE__ ;
	cout << endl;
	cout << "Please enter first name : ";
	cin >> firstname;
	cout << "Please enter last name: ";
	cin >> lastname;
	cout << endl;

	{

		cout << "Please enter the length, width, and height for bedroom 1:  " << endl;
		cin >> length >> width >> height;
		bedroom1 = 2 * height*(length + width);

		cout << "Bedroom 1 = " << bedroom1 << endl;
		cout << endl;

		cout << "Please enter the length and width for window 1:  " << endl;
		cin >> length >> width;
		window1 = length * width;
		cout << "Window 2 = " << window1 << endl;
		cout << endl;

		total_area_room1 = bedroom1 - window1;

		cout << "The total area for bedroom 1 is equal to " << total_area_room1 << endl;
		cout << endl;
	}
	//Bedroom 2
	cout << "Please enter the length, width, and height for bedroom2:  " << endl;
	cin >> length >> width >> height;
	bedroom2 = 2 * height*(length + width);

	cout << "Bedroom 2 = " << bedroom2 << endl;
	cout << endl;
	cout << endl;

	cout << "Please enter the length and width for window2:  " << endl;
	cin >> length >> width;
	window2 = length * width;
	cout << "Window 2 = " << window2 << endl;
	cout << endl;

	cout << "Please enter the length and width for window3:  " << endl;
	cin >> length >> width;
	window3 = length * width;
	cout << "Window 3 = " << window3 << endl;
	cout << endl;

	total_area_room2 = bedroom2 - window2 - window3;
	cout << "The total area for bedroom 2 is equal to " << total_area_room2 << endl;
	cout << endl;

	//Basement
	cout << "Please enter the length, width, and height for basement:  " << endl;
	cin >> length >> width >> height;
	basement = 2 * height*(length + width);

	cout << "Basement = " << basement << endl;
	cout << endl;
	//window 4
	cout << "Please enter the length and width for window4:  " << endl;
	cin >> length >> width;
	window4 = length * width;
	cout << "Window 4 = " << window4 << endl;
	cout << endl;

	//Total Area fot Basement
	total_area_basement = basement - window4;
	cout << "The total area for basement is equal to " << total_area_basement << endl;
	cout << endl;

	//Total area all 3 rooms
	total_area = total_area_room1 + total_area_room2 + total_area_basement;

	cout << "The Total Area for all rooms is equal to " << total_area << endl;
	cout << endl;
	//Galons needed
	gallons_needed = total_area / gallons_needed;
	cout << "Total amount of gallons to be used to paint the three rooms are " << gallons_needed << endl;
	cout << endl;
	//companies price per gallon
	cout << "What is Company 1's price per gallon?" << endl;
	cin >> company1_price_per_gallon;

	cout << "What is Company 2's price per gallon?" << endl;
	cin >> company2_price_per_gallon;

	cout << "What is Company 3's price per gallon?" << endl;
	cin >> company3_price_per_gallon;
	cout << endl;

	//total paint expenses
	total_expenses_paint_company1 = company1_price_per_gallon * gallons_needed;
	cout << "The total paint expenses for company 1 are " << total_expenses_paint_company1 << endl;
	cout << endl;

	total_expenses_paint_company2 = company2_price_per_gallon * gallons_needed;
	cout << "The total paint expenses for company 2 are " << total_expenses_paint_company2 << endl;
	cout << endl;

	total_expenses_paint_company3 = company3_price_per_gallon * gallons_needed;
	cout << " The total paint expenses for company 3 are " << total_expenses_paint_company3 << endl;
	cout << endl;

	cout << "Please enter the cost of Labor for company 1: " << endl;
	cin >> labor1;
	cout << "Please enter the cost of Labor for company 2: " << endl;
	cin >> labor2;
	cout << "Please enter the cost of Labor for company 3: " << endl;
	cin >> labor3;
	cout << endl;

	grand_total_expenses_company1 = total_expenses_paint_company1 + labor1;
	cout << "Company 1's grand total of expenses is equal to " << grand_total_expenses_company1 << endl;

	grand_total_expenses_company2 = total_expenses_paint_company2 + labor2;
	cout << "Company 2's grand total of expenses is equal to " << grand_total_expenses_company2 << endl;

	grand_total_expenses_company3 = total_expenses_paint_company3 + labor3;
	cout << "Company 3's grand total of expenses is equal to " << grand_total_expenses_company3 << endl;

	if (grand_total_expenses_company1 < grand_total_expenses_company2 && grand_total_expenses_company1 < grand_total_expenses_company3){
		min = grand_total_expenses_company1;
		cout << "The minimum offer is made by Company 1 for a grand total of " << grand_total_expenses_company1 << endl;
	}
	else if (grand_total_expenses_company2 < grand_total_expenses_company1 && grand_total_expenses_company2 < grand_total_expenses_company3){
		min = grand_total_expenses_company2;
		cout << "The minimum offer is made by Company 2 for a grand total of " << grand_total_expenses_company2 << endl;
	}
	else {
		min = grand_total_expenses_company3;
		cout << "The minimum offer is made by Company 3 for a grand total of " << grand_total_expenses_company3 << endl;
	}

	system("pause");

	return 0;


}