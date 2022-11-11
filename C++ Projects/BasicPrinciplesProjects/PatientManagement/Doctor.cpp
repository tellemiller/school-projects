//<Doctor.cpp> -- Class file for Doctor object. Provides defintions for header defined functions.
//CSIS 112-B01

#include "Doctor.h"

using namespace std;

Doctor::Doctor(string doctorName) {   //Public constructor
	name = doctorName;
	}

void Doctor::createPatient(string patientName) {   //Function to create new patient for Doctor object
	Patient patient(patientName);//Creates new Patient object
	patient.addReadings();       //Call to enter cholesterol readings for patient
	patients.push_back(patient); //Adds patient to list of doctor's patients
}

void Doctor::listPatients() {	//Prints all Patient data via iteration and Patient::printReadings() call
	for (int i = 0; i < getNumberOfPatients(); i++) {
		patients.at(i).printReadings();
	}
}

int Doctor::getNumberOfPatients() {  //Function to return number of doctor's patients
	return patients.size();
}