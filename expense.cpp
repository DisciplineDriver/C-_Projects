/*
Program to process expense report data
Have user query month to gather expenses
Randomly generate report data to a file
Then read data per user request
Reset file pointer for next query
*/
#include<ctime>
#include<cstdlib>
#include<vector>
#include<sstream>
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;


void generateExpenses() {
	 ofstream out("expenses.txt");

	 //step 1 generate random data to file
	 vector<string> months = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	 double totExpenses = 0;


	 //write random data to file
	 for (int i = 0; i < 50; i++) {
		 int id = rand() % 10 + 1; // ids 1-10
		 double expense = (rand() % 1000) / 100; // between 0.00 and 999.99
		 out << months[rand() % 12] << " " << id << " " << expense << endl;
		 totExpenses += expense;

	 }
	 out << "Total expenses = " << totExpenses;


}
void queryExpenses() {


}
int main() {

	generateExpenses();


}
