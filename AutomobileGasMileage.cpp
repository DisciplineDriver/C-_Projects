#include <iostream>
#include<iomanip>
using namespace std;

//function prototype
void calcAverage();

int main() {

	//function call
	calcAverage();
}


//Function Definition
void calcAverage() {
	// using a list to store data
		string weekOf[4] = { "Feburary 4","Feburary 11","Feburary 18", "Feburary 25" };
	double milesPerWeek[4]{ 196, 182, 101, 133 };
	double gallonsPerWeek[4]{ 9.8, 9.5, 5.6, 7.5 };

	//using the list to get totals
	double totalGallons = gallonsPerWeek[0] + gallonsPerWeek[1] + gallonsPerWeek[2] + gallonsPerWeek[3];
	double totalMiles = milesPerWeek[0] + milesPerWeek[1] + milesPerWeek[2] + milesPerWeek[3];

	// using the variables above to find the average miles per gallons
	double averageMilesPerGallon = totalMiles / totalGallons;

	//display the table
	cout << "Week of				Miles				Gallons\n";
	cout << "____________			___________			_____________\n";
	cout << weekOf[0] << "			   " << gallonsPerWeek[0] << "				  " << milesPerWeek[0] << endl;
	cout << weekOf[1] << "			   " << gallonsPerWeek[1] << "				  " << milesPerWeek[1] << endl;
	cout << weekOf[2] << "			   " << gallonsPerWeek[2] << "				  " << milesPerWeek[2] << endl;
	cout << weekOf[3] << "			   " << gallonsPerWeek[3] << "				  " << milesPerWeek[3] << endl;

	// average miles per gallon, total gallons, total miles
	cout << "_____________________________________________________________________________________________\n";
	cout << "Total Gallons:" << totalGallons << "		Total miles:" << totalMiles << endl;
	cout << "Overall AverageMPG:" << setprecision(4) << averageMilesPerGallon << "\n";
}
