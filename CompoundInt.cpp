#include "CompoundInt.h"
#include<iostream>
using namespace std;


int main() {
    CompoundInt ci;

    
    double principal, rate, time;
    int frequency;

    // user input
    cout << "Enter principal amount: $";
    cin >> principal;

    cout << "Enter annual interest rate (%): ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    ci.displayMenu();
    cout << "Enter compounding frequency option: ";
    cin >> frequency;

    // Map user choice to compounding frequency
    if (frequency == 1) frequency = 1;
    else if (frequency == 2) frequency = 2;
    else if (frequency == 3) frequency = 4;
    else if (frequency == 4) frequency = 12;
    else if (frequency == 5) frequency = 52;
    else if (frequency == 6) frequency = 360;

    // Set values
    ci.setPrincipal(principal);
    ci.setRate(rate);
    ci.setTime(time);
    ci.setFrequency(frequency);

    // Compute results
    double compoundAmount = ci.computeCompoundAmount();
    double interest = ci.computeInterest();

    // Output results
    cout << fixed << setprecision(2);
    cout << "\nCompound Amount: $" << compoundAmount << "\n";
    cout << "Compound Interest: $" << interest << "\n";

    return 0;
}
