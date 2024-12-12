#include<iostream>
#include<fstream>


using namespace std;

int main() {

	//ofstream fout("tickets.txt", ios::app); // create output stream
	
	char name[100];
	double ticket_price;
	int count = 0;
	//cout << "enter in records(crtl + z to quit)\n";
	//cin >> count;
	//cin.ignore(1); // skip enter key
	//for (int i = 1; i <= count;++i) {
	//	cout << "enter name for ticket holder\n";
	//		cin.getline(name,100);
	//		cout << "enter is desired ticket price\n";
	//		cin >> ticket_price;
	//		fout << name << " " << ticket_price << endl;
	//		cin.ignore(1); // skip enter key
	//}
	//fout.close();
	
	ifstream fin("tickets.txt"); // create input stream
	string fname, lname;
	double revenue;
	while (fin >> fname >> lname >> ticket_price) {
		cout << fname << " " << lname << " " << ticket_price << endl;


	}
	fin.close();
	cout << "****Total rvenue"
}
