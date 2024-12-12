// Commission Application: Christian Rodriguez Programmer
#include <iostream>
using namespace std;
// preprocessing directive(s)

// place function prototype here
double Compute(int, double, double);

int main()
{
	// declare local variables
	char name[30];
	int num = 0; double commission = 0;
	double salary = 0; double sales = 0;
	char month(20);

	cout << "welcome to the commission application\n";

	// place call to the function here

	cout << "enter the employee name\n";
	cin.getline(name, 30);
	cout << "enter the employee id number \n";
	cin >> num;
	cout << "enter thee employee salary \n";
	cin >> salary;
	cout << "enter the employee sales \n";
	cin >> sales;
	cout << "enter the month of sales activity: \n";
	cin >> month;

	commission = Compute(num, salary, sales);

	cout << "comission  report for " << name << "\n";
	cout << "id number \t" << num << endl;
	cout << "monthly salary \t" << "$" << salary << endl;
	cout << "montly sales \t" << "$" << sales << endl;
	cout << "comission \t" << "$" << commission << endl;

	return 0;
}

// place function definition here
double Compute(int number, double salary, double gross_sales)
{
	cout << "comission report for employee " << number << endl;
	if (gross_sales > 15000)
		return gross_sales * 0.05;
	else
		return 200;
	
}
