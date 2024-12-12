/*
1. Write a program that prints the numbers from 1 to 100.
2. For each number that is a multiple of 3, the program should print "Fizz" instead of the
number.
3. For each number that is a multiple of 5, the program should print "Buzz" instead of the
number.
4. For each number that is a multiple of both 3 and 5, the program should print "FizzBuzz"
instead of the number.

*/

#include<iostream>

using namespace std;

int main() {
	/*
	Start a for loop in main (loop for 100x)
Using the loop counter variable (ex. i)
Check for the following conditions
if the remainder of i / 3 = 0 and i / 5 = 0
print "FizzBuzz”
if the remainder of i / 3 = 0
print "Fizz”
if the remainder of i / 5 = 0
print "Buzz”
else print i
	*/
	int i = 1; // i represents a counter

	while (i <= 100)
	{
		cout << i << " ";
		if (i % 3 == 0)
			cout << "Fizz";
		if (i % 5 == 0)
			cout << "Buzz ";
		cout << endl;
		i++;
	} // end while
} // end main
