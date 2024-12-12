#include<iostream>

using namespace std;

void displayMenu() {

	cout << "Enter sales by menu items  to calc comission for the term\n"
		<< "1 : <1000 \n"
		<< "2 : >= 1000 < 10000 \n"
		<< "3 : >= 100000\n";

}

int main() {

	//declare variables
	double comission; double rate; 
	char sales;
	int answer = 0;

	do {
		displayMenu();
			cin >> sales;
		while  (!(sales >= '1' && sales < '4'))
		{
			displayMenu();
			cin >> sales;

		}




		switch (sales) {
		case 1 : 
			rate = .10;
			comission = 500 * rate;
			break;
		case 2 :
			rate = .15;
			comission = 1000 * rate;
			break;
		case 3:
			rate = .20;
			comission = 2000 * rate;
		default:
			comission = 0;

		};
		cout << " Total comission payout for term $" << comission << endl;
		cout << "continue? 1Y -1N\n";
		cin >> answer;

	} while (answer != -1);


	return 0;

}
