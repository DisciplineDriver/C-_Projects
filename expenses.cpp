// (1) write the preprocessing directives
#include <iostream>	// cin, cout, endl
#include <cstring>	// string variables 
#include <fstream>	// file processing
#include <conio.h>	// clear screen
#include <ctime> 
using namespace std;


// (2) open the scope of the main() method
int main() {
	
	// (3) declare and initialize the variables 
	static char chrName[100];	// employee name
	double myExpenses,totalExpenses = 0;		// individual expense 
	char myLabels[100];		// expense label
	int index = 0;			// loop control variable
	int number = 0;			// number of expense items
	ofstream fout;			// file stream output

	// (4) file variable initialization
	fout.open("data.txt");

	// (5) clear the screen ( for Windows users )
	system("CLS");

	// (6) request the employee name
	cout << "enter the employee name: " << endl;
	cin.getline(chrName, 100);

	// (7) request the number of expense items
	cout << "enter the number of expense items: " << endl;
	cin >> number;
	cin.ignore(); // skip [Enter] entry from keyboard;

	// (8) open the looping structure
	while (index < number)
	{

		index++;

		// (9) request the user for an expense item
		cout << "enter the type of expense: " << endl;
		cin.getline(myLabels, 100);
		cout << "enter the amount of expense: " << endl;
		cin >> myExpenses;
		cin.ignore();

		// (10) write the data to a text file
		fout << chrName << ":" << myLabels
			<< ":" << myExpenses << endl;

		totalExpenses += myExpenses; // Update total expenses


		// (11) close the scope of the while() loop
	}

	// Add total, and author
	fout << "Total Expenses:" << totalExpenses << endl;
	fout << "Report Author: " << chrName<< endl;

	// Add timestamp

 // Declare time variables
	time_t tt;
	struct tm ti;

	// Get current time
	time(&tt);

	// Use localtime safely
#ifdef _WIN32
	localtime_s(&ti, &tt);  // Safe version for Windows
#endif

	// Use asctime_s to format time safely
	char buffer[26]; // Fixed size for asctime_s
	asctime_s(buffer, sizeof(buffer), &ti);

	cout << "Current Day, Date, and Time is: " << buffer;
	
	// (12) close, i.e. dismiss, the file object
	fout.close();

	// (13) close the scope of the main() method
	return 0;
}


