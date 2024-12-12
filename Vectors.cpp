/*
Simulate x num of die rolls
and give stats pn roll die results
1. Outcome of 2 dice the same
2. Show Total rolls processed
3. Display last roll outcome
*/

#include<vector>
#include<iostream>
#include<ctime>

using namespace std;

int main() {
	srand(time(NULL));

	//Initialize of a 2 x 2 vectors for rolls
	vector<vector<int>> dieRolls(2, vector<int>(2));

	//number of rolls
	const int NUM_ROLLS = 1000;
	int matches = 0;
	// gather random rolls
	for (int i = 0; i < NUM_ROLLS; ++i) {
		for (int row = 0; row < 2; row++) {
			for (int col = 0; col < 2; col++) {
				dieRolls[row][col] = rand() % 6 + 1;
			}
		}

		// if statement to compare SAME value on each die roll
		if (dieRolls[0][0] == dieRolls[0][1] &&
			dieRolls[0][0] == dieRolls[1][0] &&
			dieRolls[0][1] == dieRolls[1][1])
			matches++;
	
	}

	//display freq responses


	// display outcomes
	cout << "Total matches " << (double)matches / NUM_ROLLS * 100 << " % " << endl;

	for (auto& row : dieRolls)
		for (int vals : row)
			cout << vals << endl;



}
