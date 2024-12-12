#include <iostream>
using namespace std;
int main() {
	int noOfnum;
	int total = 0;
	int num;
	cout << "How many numbers you want\n";
	cin >> noOfnum;
	double num;
	cout << "How many numbers do you want to add ==> ";
	cin >> noOfnum;
	for (int i = 0; i < noOfnum; i++) {
		cout << "Enter a value # " << (i + 1) << " == >";
		cin >> num;
		total = total + num;
	}
	cout << "The total is ==> " << total << endl;
	cout << "Average of entries are " << total / noOfnum << endl;
}
