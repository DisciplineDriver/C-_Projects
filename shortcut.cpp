#include<iostream>
using namespace std;

int main() {

	int b = 4, c = 2, d = 6;


	c += b; // same as c = c + b
	c = 4;

	cout << "c += b =>" << c << endl;

	c *= b + 2; // same as c = d * (b + 2) = 4 * (4 +2) = 24 !!

	cout << " c *= (b + 2) =>" << c << endl;

	c = 2;

	b *= d; // same as b = b * d = 4 * 6 = 24 !!
	c += b *= d;

	cout << "New b " << b <<  endl;
	cout << "New c " << c << endl;

	// a challenge 
	/* Give int j = 3, k=3
	what is out come of j +++k
	*/
	
	int j = 3, k = 3;
	j +++ k;
	cout << " j +++ k => " << (j +++ k);



	// proof !!

	j = k = 3; // reset

	cout << "(j++) + k  => " << (j++) + k << endl;

	j = k = 3; // reset


}
