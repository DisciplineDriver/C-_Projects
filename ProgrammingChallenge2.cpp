void calcInterest(double p, double r, double t, double n) {
	// 1. include an assignment statement to calculate the amount of interest
	// 2. Include an assignment statement to show accumulated wealth over time t
	double interest = amount - p;
	// 3. Display the interest amount
	// 4. Display the amount accumulated over time
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
