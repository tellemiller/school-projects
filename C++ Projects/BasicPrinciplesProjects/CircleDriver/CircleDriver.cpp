//<CircleDriver.cpp> -- Controller file for instantiating a Circle object and accepting input of radius from user.
//CSIS 112-B01

//Include statements
#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	cout << "Telle Miller -- Assignment 2\n" << endl << endl;

	//Variable declarations
	Circle c;
	double radius;

	//Program logic
	
	cout << fixed << showpoint;    //Formatting floating point output for readability

	while (true) {

		cout << "INPUT RADIUS: ";
		cin >> radius;

		while (cin.fail() || radius < 0) {
			if (cin.fail()) {																	//Verifying user input is valid
				cout << "You entered a value other than a number. You must enter a number. Please try again. " << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			if (radius < -1) {																//Verifies value is positive
				cout << "The value you entered was negative. You must enter a positive number. Please try again. " << endl;
			}
			if (radius == -1) {																//Exit condition if -1 is entered
				cout << endl << "EXITING..." << endl;
				system("pause"); return 0;
			}
			cout << "INPUT RADIUS: ";
			cin >> radius;
		}

		c.setRadius(radius);				//Sets c.radius to user entered radius value
		c.showData();						//Outputs data from Circle object
		
	}
}