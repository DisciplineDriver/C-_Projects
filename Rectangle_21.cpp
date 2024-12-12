#include <iostream>
using namespace std;
class Rectangle { // define class
public:
	Rectangle() { length = 0; width = 0; } // constructor
	float getLength() { return length; } // return length
	float getWidth() { return width; } // return width
	float area() { return length* width; } // return area
	float perimeter() { return 2 * length + 2 * width; }
	void setValues(float, float);
private:
	float length, width;
};
void Rectangle::setValues(float len, float wid)
{
	if (len <= 0 || len >= 20) {
		cout << "Enter new value for length ";
		cin >> len;
	}
	length = len;
	if (wid <= 0 || wid >= 20) {
		cout << "Enter new value for width ";
		cin >> wid;
	}
	width = wid;
}
int main() {
	float length, width;
	Rectangle r;
	cout << "Enter a value for length and width between 0 and 20\n";
	cin >> length >> width;
	r.setValues(length, width);
	cout << "\nGiven the length of " << r.getLength()
		<< " and the width of "
		<< r.getWidth() << " \nyour area is " << r.area()
		<< " and your perimeter is "
		<< r.perimeter() << "\n\n";
	system("pause");
	return 0;
}
