#include<iostream>
#include<array>
#include<string>
#include<iomanip>
using namespace std;

int main() {
	// create a 2D array of our weekly schedule
	array<array<string, 7>, 5> scheduler = { {

		{"rise","back to sleep","possibly eat","sleep","Work"},
		{"rise","work", "eat","study","Chill"},
		{"rise","work", "eat","study","Chill"},
		{"rise","back to sleep", "eat","work","sleep"},
		{"rise","gym","shop","food","work","Chill"}

	} };

    // Display the entire 5-day schedule
    for (auto i = 0; i < scheduler.size(); i++) {  // Loop through rows
        cout << "Day " << (i + 1) << ": ";
        for (auto j = 0; j < scheduler[i].size(); j++) {  // Loop through columns
            if (!scheduler[i][j].empty())  // Skip empty entries
                cout << scheduler[i][j] << " ";
        }
        cout << endl;
    }

    // Query to find all occurrences of a particular task
    string target_activity = "gym";
    bool found = false;
    cout << endl;

    for (auto i = 0; i < scheduler.size(); i++) {  // Loop through rows
        for (auto j = 0; j < scheduler[i].size(); j++) {  // Loop through columns
            if (scheduler[i][j] == target_activity) {  // Check if activity matches
                if (!found) {
                    cout << "Found occurrences of '" << target_activity << "' on the following days: " << endl;
                }
                found = true;
                cout << "Day " << (i + 1) << ": " << scheduler[i][j] << endl;
            }
        }
    }

    // If no target activity found
    if (!found) {
        cout << "NO TARGET ACTIVITY FOUND FOR: " << target_activity << endl;
    }

    return 0;
}
