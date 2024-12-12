#include<iostream>
#include<string>
#include "payroll.h"
using namespace std;

int main() {

	Payroll emp1("JP"), emp2("LP"), emp3("KP");
	bool success = false;


	if(emp1.getGross() >= 1000)
	success = true;
	// pay employees
	cout << emp1.getName()<<"\t"<< emp1.calcNet(1000) <<"\t Message:"
		<< boolalpha <<( success ? "Bonus time! " : "No bonus this time :(")
		<< "\n" << emp2.getName() <<"\t" << emp2.calcNet(2000)
		<< "\n" << emp3.getName() <<"\t" <<emp3.calcNet(4000);

	return 0;
}
