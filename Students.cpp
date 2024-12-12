#include<iostream> 
#include<algorithm> // sorts, searches
#include<vector>
#include<string>
#include<set>

using namespace std;


class Student {

public:
	// data members
	string name;
	int id;
	float gpa;

	//function members
	Student(string name, int id, float gpa) {
		this->name = name;
		this->id = id;
		this->gpa = gpa;
	}
	// operator overload
	bool operator<(Student& other) {
		return gpa > other.gpa;  // rank highes GPA
	}

};
int bsearch(vector<Student>& students, float gpa)
{
	int left = 0;
	int right = students.size() - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		cout << "Mid point value " << students[mid].gpa << endl;
		if (students[mid].gpa == gpa) {
			return mid;
		}
		if (students[mid].gpa < gpa)
			right = mid + 1;  // shift right
		else
			left = mid - 1; // shift left
	}
	return -1;
}

int main() {
	// declare 
	vector<Student> students = {
		Student("Alice",100, 3.8),
		Student("Chris",101, 3.90),
		Student("Will",10, 1.7),
		Student("Alex", 11 , 4.0),
		Student("Andre",13, 4.0)
	};
	// sort the students
	sort(students.begin(), students.end());

	// print sort outcome

	for (Student studs : students) {

		cout << studs.name << "\t" << studs.id << "\t" << studs.gpa << endl;
	}
	int result = bsearch(students, 4.0);
	cout << "Function call? " << result << endl;
	// search for highest GPA
	if (result > -1) {
		cout << "Congratulations!!! You are the winner of granted tuition fees\n";
		cout << students.at(result).name << "\t" << students.at(result).id << "\t" << students.at(result).gpa << endl;
	}
	else
		cout << "No 4.0 GPA students";


}
