#include<iostream>
#include<string> // this is for getline

using namespace std;

double gbalance; //global variable (balance tracker)

//function defintions

void deposit(double val) {

	gbalance = gbalance + val;

}

void withdraw(double val) {

	gbalance = gbalance - val;
}

double simpleinterest(int rate, int years) {

	return gbalance * rate / 100 * years;
}

int main() {

	// local variables
	double balance = 0;

	string fname, lname;

	// get user full name info
	cout << "Enter in first name then last name\n";
	getline(cin, fname,'\n');
	getline(cin, lname,'\n');
	cin.ignore();// ignores enter key

	//get user deposit (call the function & pass the balance)
	cout << " Enter in your deposit for today\n";
	cin >> balance;
	deposit(balance);
	//get user withdraw amount (call functionn to pass balance)
	cout << "Enter in withdraw for today\n";
	cin >> balance;
	withdraw(balance);

	//display the ending balance
	double interest = simpleinterest(4, 1); // call function to obtain interest
	gbalance += interest; // add interest to balance

	cout << "Summary of your balance\n"
		<< fname << " " << lname << "\nAccount Balance: $"
		<< ::gbalance << endl;
	cout << " Interest earned for the period: $" << interest << endl;
}
