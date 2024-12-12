#include <iostream>
using namespace std;

int main() {

	int a[] = { 5,6,7,8,9 }, b[] = { 1,2,3,4 };

	int odd = sizeof(a) / sizeof(a);
	int even = sizeof(b) / sizeof(b[0]);

	cout << "Odd value " << odd
		<< " middle value => " << a[odd / 2] << endl;

	cout << "Even value " << even
		<< " middle value => " << b[even / 2] + b[(even / 2) - 1] << endl;

	

}
