//main.cpp

#include<iostream>
#include "Account.h"
using namespace std;



int main() {

	Account aobj; // create class instance (the calling of the constructor)
	double balance;  // local vars
	string name;
	int id;

	cout << "Welcome to the Bank of WCC!!\n";
	cout << "Please enter in your id ";
	cin >> id;

	if (id == aobj.getId())
		cout << "Balance currently = $" << aobj.getBalance() << endl;

	cout << "Thank you for being our cherished Account holder\n";

} //end main
