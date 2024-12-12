#include<iostream>
using namespace std;
#include<cmath>

// function prototype
int BinaryLog(int);
int main() {

	//declare and initialize the local variables
	float number = 0;
	int answer = 0;

	//prompt user for an integer
	cout << "please enter a positive integer ";
	// store user's response
	cin >> number;
	// call the function 
	answer = BinaryLog(number);
	cout << "the binary logarithm of " << number
		<< " is " << answer << endl;

	// modification
	cout << number << " "<< number / 2 << " " << number / 4 << " " << number / 8 << "\n";

	
	cout << log10(number) / log10(2) << " " << endl; // verification


	return 0;
}

int BinaryLog(int num) {
	int count = 0;
	double quotient = num;
	while (quotient >= 2)
	{
		count++;
		quotient = quotient / 2;
	}
	return count;
}
