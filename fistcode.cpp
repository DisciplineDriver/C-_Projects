/*
Program to convert US coin
to any currency
*/

#include<iostream>//cin, cout

using namespace std;

int main() {

	//variable declaration and initialization
	double dollars, euro;
	dollars = euro = 0;

	//get information from user
	cout << "Enter your dollar amount to buy euros\n";
	cin >> dollars;

	//process data (convert euro to dollars)
	euro = .89534;

	//display data
	cout << "$" << dollars << " will have total euros amount "
		<< (dollars * euro) << endl;

}
