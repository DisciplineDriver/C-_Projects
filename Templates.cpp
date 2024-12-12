#include <iostream>

using namespace std;

template<typename T>
T add(T a, T b) {
    if (a == 0) // Base case to stop recursion
        return b;

    return add(a - 1, b + 1); // Add b to the result
}

int main() {
    int i = add(5, 10);
    double d = add(5.5, 10.5);

    cout << "i = " << i << endl;
    cout << "d = " << d << endl;

    return 0; // Added return statement for main
}
