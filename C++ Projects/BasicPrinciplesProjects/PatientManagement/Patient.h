//<Patient.h> -- Header file for Patient class
#pragma once

#include <string>
#include <vector>

class Patient {
	public:
		Patient(std::string);//Public constructor
		void addReadings();  //Function to add cholesterol readings to patient
		void printReadings();//Prints cholesterol readings and name of patient
	private:
		std::string lastName;
		std::vector<int> cholesterolReadings;
};

