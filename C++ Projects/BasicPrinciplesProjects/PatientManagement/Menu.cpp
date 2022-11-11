//<Menu.cpp> -- Provides a menu to access a records database for a given doctor's patients.

#include <iostream>
#include "Doctor.h"

using namespace std;

enum MENU_OPTIONS {A, L, Q, D} selectedItem; //enum to process user selection of menu item

int main()
{
	cout << "Telle Miller -- Assignment 4" << endl << endl;       //Required name and assignment number print out

	string menuOption;								//Variable to determine menu option to execute
	string doctorName;								
	string patientName;

	cout << "Enter a doctor's last name: ";
	
	cin >> doctorName;                             //Accepts user input. Assumes value is valid, no error-checking

	Doctor doctor(doctorName);                     //Creating Doctor object given inputted Doctor name

	cout << endl << "Please enter one of the menu options listed below." << endl << endl         //Printing initial menu options
		<< "\tA --- Add a patient record." << endl
		<< "\tL --- List all patient records." << endl
		<< "\tQ --- Quit the console and exit." << endl << endl;

	while (true) {                    //Loop to continuously receive user input until exit command entered

		cout << "MENU OPTION: ";             
		cin >> menuOption;					//Receiving user input for menu option

		while (cin.fail()) {
			if (cin.fail()) {																	//Verifying user input is valid
				cout << "You entered a value other than a character. You must enter a character. Please try again. " << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}
		if (menuOption == "A") { selectedItem = A; }
		else if (menuOption == "L") { selectedItem = L; }
		else if (menuOption == "Q") { selectedItem = Q; }
		else { selectedItem = D; }


		switch (selectedItem) {                //Switch for menu options
			case A:						 //Case for 'Adding Patient'
				if (doctor.getNumberOfPatients() < 3) {        //Checks doctor is not at max patients
					cout << endl << "Enter patient first name: ";
					cin >> patientName;              
					doctor.createPatient(patientName);         //Creates patient using doctor object
				}
				else {
					cout << endl << "NOTICE: The doctor cannot be assigned more than three patients." << endl << endl;
				}
				break;
				case L:						//Case for 'Listing Patients'
					if (doctor.getNumberOfPatients() == 0) {
						cout << endl << "There are no patients recorded." << endl << endl;
				} else { doctor.listPatients(); }
										
				break;
			case Q:						//Case for 'Exiting Program'
				cout << endl << "EXITING PROGRAM..." << endl;
				system("pause"); 
				return 0;
				break;
			case D:						//Default case to print if an invalid menu option was entered
				cout << endl << "You entered a menu option that is not supported. Please enter one of the three options listed below." << endl << endl
					<< "\tA --- Add a patient record." << endl
					<< "\tL --- List all patient records." << endl
					<< "\tQ --- Quit the console and exit." << endl << endl;
				break;
			}
		}
	}
