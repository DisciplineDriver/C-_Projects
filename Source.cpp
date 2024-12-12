/* calculate gross off of differential
vs. fixed pay*/

#include<iostream>
#include<iomanip> // used for set precision

using namespace std;

int main() {

	char choice = '\o'; // for f or d choice

	double gross = 0, rate = 0;

	int totalPieces = 0;

	do {
		cout << "Enter f or d for pay \n";
		cin >> choice;
		if (choice == 'f') {
			cout << "Enter flat rate of pay / piece\n";
			cin >> rate;
			cout << "Enter total pieces\n";
			cin >> totalPieces;

			gross = rate * totalPieces;
		}
		else if (choice == 'd') {

			//calculate based on the following range
			/*
			1-99 -> .10/p (tier 1)
			100-199 -> .20/p ( tier 2)
			>199 -> .30/p (tier 3)
			*/
			cout << "Enter total pieces\n";
			cin >> totalPieces;
			if (totalPieces < 100) // tier 1 
				gross + totalPieces * .10;

			//onto tier 2 (100 - 199)
			if (totalPieces >= 100 ||  )
				gross + totalPieces * .20;

			//onto tier 3 
			


		}


		/* PRINT OUT GROSS PAY OUTCOME WHETHER f or d*/

		cout << setprecision(2) << setiosflags(ios :: fixed | ios :: showpoint) 
			<<"Gross pay = " << gross << endl;
		cout << boolalpha << "Fixed rate? " << (choice == 'f' << 1 << 0) <<endl;



	} while (choice == 'f' || choice == 'd');
}
