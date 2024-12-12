/* bin packer program*/

#include<iostream>

using namespace std;

int main() {

	//set up variables
	int gtot, ltot, mtot, stot;
	int n;
	//set up constants
	int gsize = 50, lsize = 25, msize = 10, ssize = 1;
	//get user input
	cout << " Give me number of items to ship:\n";
	cin >> n;
	//process containers
		gtot = n / gsize;
		ltot = n % gsize / lsize;
		mtot = n % lsize / msize;
		stot = n % lsize % msize / ssize;
	//display total containments
		cout << "Totals:\n"
			<< "Giants\t" << gtot << endl
			<< "Larges\t" << ltot << endl
			<< "Mediums\t" << mtot << endl
			<< "Smalls\t" << stot << endl;

		return 0;

}
