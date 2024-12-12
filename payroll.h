
#pragma once
#include <string>
// define class Payroll

class Payroll {

private:  // data members
	double grossPay;
	double netPay;
	std::string name;

public:  // function members
	/* calculate net pay
	take in gross return
	net pay */
	double calcNet(double gross) {

		grossPay = gross;
		netPay = gross - gross * .25;  // subtract taxes

		return netPay;
	}
	// set up constructor
	Payroll(std::string empName) {

		name = empName;
		
	

	}
	std::string getName() { return name; }
	double getGross() {
		return grossPay;
	}
};
