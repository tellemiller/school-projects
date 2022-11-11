//<Circle.cpp> -- 
//CSIS 112-B01
//Include statements
#include <iostream>
#include <iomanip>

using namespace std;

const double pi = 3.14159265358979323846;

class Circle {
	public:

		//Public default constructor
		Circle() {
			radius = 0.0;
		}

		//Public member functions
		void setRadius(double rad) {
			radius = rad;
		};

		double getRadius() const {
			return radius;
		};

		void showData() const {
			cout << "RADIUS: " << getRadius() << endl 
			     << "CIRCUMFERENCE: " << calcCircumference() << endl
			     << "AREA: " << calcArea() << endl;
			
			//use GetRadius()
		};

	private:
	
		//Private variables
		double radius;
		
		//Private member functions
		double calcCircumference() const {
			return 2 * pi * radius;
		};

		double calcArea() const {
			return pi * pow(radius, 2);
		};

};