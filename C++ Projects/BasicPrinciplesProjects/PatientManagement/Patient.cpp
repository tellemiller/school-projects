//<Patient.cpp> -- Class file for Patient object. Provides defintions for header defined functions.
//CSIS 112-B01

#include "Patient.h"
#include <iostream>

using namespace std;

	Patient::Patient(string patientName) {  //Public constructor
		lastName = patientName;
	}

	void Patient::addReadings() {    //Function to add cholesterol readings for patient
		int loop = 1;        //Variables to control input
		int reading;
		cout << endl << "Up to five cholesterol readings can be entered. Enter -1 to halt logging of readings and exit." << endl;
		while (loop < 6) {  //Loop to allow up to 5 readings to be entered. Users can enter -1 to exit and enter less values
			cout << "\tEnter cholesterol reading #" << loop << ": ";
			cin >> reading;
			if (reading == -1) {   //Exit command for while loop
				break;
			}
			else {
				cholesterolReadings.push_back(reading); //Adds reading to list in Patient record
				loop++;
			}
		}
		cout << endl;
	}

	void Patient::printReadings() {       //Function to print Patient name and all cholesterol readings associated
		cout << endl << "Patient: " << lastName << endl << "\tCholesterol Readings---" << endl;  //Formatting for printing patient name
		for (int i = 0; i < cholesterolReadings.size(); i++) {
			cout << "\t\tReading #" << i + 1 << ": " << cholesterolReadings[i] << endl;
		}
		cout << endl;
	}
