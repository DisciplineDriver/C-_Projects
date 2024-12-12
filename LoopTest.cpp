#include<iostream>

using namespace std;

int main() {
	int n = 10; // first n numbers
	int multiples;
	for (int j = 1; j <= n; j+=1) {
		//multiples = multiples * 2;
		cout << pow(2, j) << endl;
		//cout << multiples << endl; // print out multiples of 2 
	}
}
