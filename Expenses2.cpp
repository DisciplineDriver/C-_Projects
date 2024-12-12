
#include<ctime>
#include<cstdlib>
#include<vector>
#include<sstream>
#include<iomanip>
#include<fstream>
#include<iostream>

using namespace std;
void generateExpenses() {
	ofstream out("expenses.txt");

	//step 1 generate random data to file

	vector<string> months = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	double totExpenses = 0;  // summate total expenses
	// write random data to file
	for (int i = 0; i < 50; i++) {
		int id = rand() % 10 + 1;  // ids  1-10
		double expense = (rand() % 100000) / 100; // between 0.00 and 999.99 
		if (i % 2 == 0)
			expense = -expense;
		out << months[rand() % 12] << " " << id << " " << expense << endl;
		totExpenses += expense;

	}
	out << "Total expenses = " << totExpenses << endl;
	//generateTime();
	out.close(); // close of file
}
void generateTime() {




}

void queryExpenses(string qvalue) {

 // create code to query by month and / or id any expenses requested by
 // allow loop to work record generations
 // include seekg(0) to reset pointer
 // all output or records should include month or id request

	ifstream out("expenses.txt");
	int record_ct = 0;
		string month, id;
		double expense;
		while (out >> month >> id >> expense)
		{
			if (qvalue == "positive" && expense > 0) {
				cout << month << "\t" << id << "\t" << expense << endl;
				record_ct++;
			}
		}
		out.close();


}


int main() {

	generateExpenses();
	queryExpenses("positive");


}
