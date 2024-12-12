#include<vector>
#include<algorithm> //next_premutation, sort
#include<iostream>
using namespace std;


class Talent {
public:
	
	string name;
	int talentLevel;

	Talent(string n , int t) : name(n) , talentLevel(t) {}

};

bool compareDec(Talent a, Talent b) {
	return a.talentLevel > b.talentLevel;
}

int main() {

	vector<Talent> people = {
		Talent("Christian", 11),
		Talent("Alexis", 8),
		Talent("Andres", 9),
		Talent("Wilfred", 10),
		Talent("Justin" , 99)




	};

	//sort top dogs
	sort(people.begin(), people.end(), compareDec);
	for (auto &person : people) // for range loop
		cout << "Person " << person.name << " rank " << person.talentLevel << endl;

}
