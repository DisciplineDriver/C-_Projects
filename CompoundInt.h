#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


class CompoundInt {
private:
    double principal;
    double rate;
    double time;
    int frequency;

public:
    // Constructor
    CompoundInt() : principal(0), rate(0), time(0), frequency(0) {}

    // Setters
    void setPrincipal(double p) { principal = p; }
    void setRate(double r) { rate = r / 100; }  // Convert percentage to decimal
    void setTime(double t) { time = t; }
    void setFrequency(int f) { frequency = f; }

    // Getters
    double getPrincipal() const { return principal; }
    double getRate() const { return rate; }
    double getTime() const { return time; }
    int getFrequency() const { return frequency; }

    // Member functions
    double computeCompoundAmount() const {
        return principal * pow(1 + (rate / frequency), frequency * time);
    }

    double computeInterest() const {
        return computeCompoundAmount() - principal;
    }

    void displayMenu() const {
        cout << "Select compounding frequency:\n"
            << "1. Annually (1)\n"
            << "2. Semi-Annually (2)\n"
            << "3. Quarterly (4)\n"
            << "4. Monthly (12)\n"
            << "5. Weekly (52)\n"
            << "6. Daily (360 or 365)\n";
    }
};
