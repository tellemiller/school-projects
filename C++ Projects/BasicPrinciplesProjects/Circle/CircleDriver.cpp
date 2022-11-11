//<CircleDriver.cpp> -- 
//CSIS 112-B01
//Include statements
#include <iostream>
#include <iomanip>

using namespace std;

//Function prototypes


int main()
{
	cout << "Telle Miller -- Assignment 2\n" << endl << endl;

	//Variable declarations
	Circle c;

	//Program logic
	while (cin.fail() || cin < -1) {
		if (cin.fail()) {																	//Verifying user input is valid
			cout << "You entered a value other than a number. You must enter a number. Please try again. " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');                                                              
		}
		if (cin < -1) {
			cout << "The value you entered was negative. You must enter a positive number. Please try again. " << endl;
		}
		if (cin == -1) { system("pause"); return 0; }

		cout << "INPUT RADIUS: ";
	}



	//Closing program statements
	system("pause");
	return 0;
}

//Function definitions
