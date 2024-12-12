/* using while loop */
#include<iostream>
#include<cmath> // power function 

using namespace std;

void calcInterest(double p, double r, double t, double n) {
	// 1. include an assignment statement to calculate the amount of interest
	double amount = p * pow((1 + (r / (n))), (n * t));
	// 2. Include an assignment statement to show accumulated wealth over time t
	double interest = amount - p;

	cout << "Per.\tInterest\tAccum" << endl;
	cout.precision(2);
	cout.setf(ios::fixed);

		for (int per = 1; per <= t * n; per++) {
			// 3.Finish up  Display the interest amount
			cout << "Intrerest = " << interest << endl;
			// 4. Display the amount accumulated over time
			cout << "accumulation of wealth " << amount;
		}
}
int main() {
	double p, r, t, n;
	cout << "Enter principal amount: ";
	cin >> p;
	cout << "Enter rate of interest: ";
	cin >> r;
	cout << "Enter time period in years: ";
	cin >> t;
	cout << "Enter number of times interest is compounded per year: ";
	cin >> n;
	
	calcInterest(p, r, t, n);
	
	return 0;
}
