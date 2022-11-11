//<Circle.cpp> -- Class file for a Circle object. Uses radius to calculate Circle attributes.
//CSIS 112-B01

//Include statements
#include <iostream>
#include "Circle.h";

using namespace std;

const double pi = 3.14159265359;	//const global variable to be used in calculations

		//Public default constructor
		Circle::Circle() {
			radius = 0.0;
		}

		//Public member functions
		void Circle::setRadius(double rad) {	//Sets Circle radius to given value
			radius = rad;
		};

		double Circle::getRadius() const {      //Returns current Circle radius value
			return radius;
		};

		void Circle::showData() const {         //Displays current attributes of Circle object
			cout << endl << "RADIUS: " << getRadius() << endl
						 << "CIRCUMFERENCE: " << calcCircumference() << endl
						 << "AREA: " << calcArea() << endl << endl;
		};
	
		//Private variables
		double radius;
		
		//Private member functions
		double Circle::calcCircumference() const {         //Calculates circumference of Circle object
			return 2 * pi * radius;
		};

		double Circle::calcArea() const {                 //Calculates area of Circle object
			return pi * pow(radius, 2);
		};
