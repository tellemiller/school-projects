//<Doctor.h> -- Header file for Doctor class
#pragma once
#include <vector>
#include <string>
#include "Patient.h"

class Doctor {
	public:
		Doctor(std::string);			//Public constructor
		void createPatient(std::string);//Creates patient object given last name
		void listPatients();			//Lists patients assigned to doctor and their assigned attributes
		int getNumberOfPatients();      //Returns number of patients assigned to doctor
	private:
		std::string name;
		std::vector<Patient> patients;
};

