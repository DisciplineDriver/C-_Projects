/*
Calculate the salary over x number of years
and terminate salary calc when >=100000
*/

#include<iostream>

using namespace std;

int main() {

	double salary = 25000;
	double increase = .05;
	int year = 1;
	
	// set up while loop
	while (salary <= 100000) {

		if (salary > 100000) // reach the milestone!!!
			break;
		cout << "Year:	" << year << " Salary $"
			<< salary << endl;
		//salary *= 1.05
		salary = salary * (1 + increase); 
		year++;	//increment year var by 1 

	}

}
