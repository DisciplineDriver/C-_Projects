#include<iostream>

using namespace std;

class Rectangle {
private: 
	double length, width;
public:
	Rectangle() {
		length = width = 0;
	}
	double getLength() { return this-> length; }
	double getWidth() { return this->width; }
	void setLength(double len) { this->length = len; }
	void setWidth(double wid) { this->width = wid; }
	double area() { return this->length* this->width; }
	double perimeter() { return 2*this->length + 2 *this->width; }


};

int main() {

	double length, width;
	Rectangle rectObj;

	cout << "Please enter length and width for your box\n";
	cin >> length >> width;

	if (length <= 0){
		rectObj.setLength(0);
		cout << " Length Cannot go negative\n";
	}
	else
		rectObj.setLength(length);  // set updated length 

		if (width < 0){
		rectObj.setWidth(0);
		cout << " Width Cannot go negative\n";
	}
		else
			rectObj.setWidth(width);  // set updated width

		double area = rectObj.area();
		// process output area/perimeter
		cout << "Area = " << area << "\n"
			<< "Perimeter = " << rectObj.perimeter() << endl;

		// pricing
		switch ((int) area) {

		case 1:
			cout << "Cost is $500\n";
				break;
		case 2:
			cout << "Cost is $1000\n";
				break;
		default:
			cout << "Plot of land unavailable\n";



		}

}
