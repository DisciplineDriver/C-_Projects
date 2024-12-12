#include <iostream>
using namespace std;	// preprocessing directive(s)
#include <iomanip>
class Depreciate		// class definition
{
private:			// data members
    char asset[20];
    double cost, rate, salvage, time, value, annualDepreciation;
    int life;
public:
    Depreciate() {	// class constructor
        cost = 0;
        rate = 0;
        value = 0;
        salvage = 0;
        time = 0;
        life = 0;
        annualDepreciation = 0;
    }
    void getInfo() {	// member functions
        cout << "enter the asset type\n";
        cin.getline(asset, 20);
        cout << "enter the asset cost\n";
        cin >> cost;
        cout << "enter the salvage value\n";
        cin >> salvage;
        cout << "enter the asset life\n";
        cin >> life;
        cout << "enter the time (in years)\n";
        cin >> time;
        // Calculate annual depreciation
        annualDepreciation = (cost - salvage) / life;

    }
    void Compute() {
        rate = (cost - salvage) / (cost * life);
        value = cost - cost * rate * time;
    }
    void Display() {
        cout << "the asset value after year " << time << " is ";
        cout << value << endl;
    }

    void showSchedule() {
        double accumulatedDepreciation = 0;
        double bookValue = cost;

        cout << fixed << setprecision(2);
        cout << "\tDepreciation Schedule for " << asset << ":\n";
        cout << "Year\tAnnual Depreciation\tAccumulated Depreciation\tBook Value\n";


        for (int i = 0; i <= life; i++) {
            cout << i << "\t";
            
            if (i == 0) {
                cout << "$0.00\t\t\t";
            }
            else {
                accumulatedDepreciation += annualDepreciation;
                bookValue -= annualDepreciation;
                cout << "$" << annualDepreciation << "\t\t\t";

            }

            cout << "$" << accumulatedDepreciation << "\t\t\t\t$" << bookValue << endl;
        }


    }

};
int main()
{
    // Depreciation Application: Sammy Student Programmer

    // instantiate a class object
    Depreciate x;

    // object calls member functions
    x.getInfo();
    x.Compute();
    x.Display();
    x.showSchedule();

    return 0;
}

