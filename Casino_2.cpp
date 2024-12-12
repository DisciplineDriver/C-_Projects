
#include<iostream>
using namespace std;


// func prototypes
int card();
double playerScore(int);


int main() {

	// play 21
	int cardValue, dealCard = 1;

	while (!dealCard) {

		dealCard = card(); // call function
		cardValue = playerScore(dealCard);
		cout << "Card Value total " << cardValue << endl;
		cout << "Do you want to continue or Hold? 0)Nay 1)Yahy\n";
		cin >> dealCard;
	}




}
//function definitions
int card() {

	return rand() % 11;  // 1 - 11 outcomes where 11 is Ace

}
// tracl score with playerScore function
double playerScore(int value) {

	static int count = value;

	count += value;

	return count;
}
