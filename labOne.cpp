#include <iostream>
using namespace std;
//pre - processing directive(s)
int main() {
	// Christian Student, Programmer
  // Program that computes the area of a trapezoid
	// declare and initialize the variables	 
	double area = 0, base1 = 0,base2, height = 0;
	// [Input] request and receive variable values
	cout << "\nplease enter the base 1   ";
	cin >> base1;
	cout << "\nplease enter the base 2   ";
	cin >> base2;
	cout << "\nplease enter the height   ";
	cin >> height;
	// [Process] perform any required variable assignment
	area = 0.50 * height * (base1 + base2);
	// [Output] display values to the program user
	cout << "\nA trapezoid with short base " << base1;
	cout << ", a long base " << base2;
	cout << " and a height " << height;
	cout << "\n";
	cout << "\n has an area of " << area;
	cout << " square units." << endl << endl;
	cout << "press [Enter] to close this window\n";
	system("pause"); // Windows command
	return 0;
}
