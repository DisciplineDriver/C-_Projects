#include<iostream>
using namespace std;

/* demostrate CALL BY REFERNCE*/

void swap(int a, int b, int& flg) {

	int temp = a;
	a = b;
	b = temp;
	cout << "INSIDE FUNC \n";
	cout << "a = " << a << " b = " << b << endl;


}

// demonstrate function OVERLOADING

void swap(int& a, int& b) {

	int temp = a;
	a = b;
	b = temp;


}

int main() {

	int x = 1, y = 2, int flg = 0;

	cout << "In main with flag: Before swap x = " << x << " y = " << y << endl;

	swap(x, y,flg);

	cout << "In main with flag: After swap " << x << " y = " << y << endl;

	cout << "Current flag setting " << flg << endl;

	cout << "In main with no flag: Before swap " << x << " y = " << y << endl;

	swap(x, y);

	cout << "In main with no flag: After swap " << x << " y = " << y << endl;


		return 0;

}
