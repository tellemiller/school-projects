//<TemperatureDriver.cpp> -- Driver file to demonstrate a Temperature objects functions and variables.
//CSIS 112-B01

//Include statements
#include <iostream>
#include <string>
#include <fstream>
#include "Temperature.h"
using namespace std;

int main()
{
	cout << "Telle Miller -- Assignment 3" << endl << endl;       //Required name and assignment number print out

	//Variable declarations
	string fileName, monthName, year;
	int temperatureValue;

	//Program logic
	cout << "Enter the name of the temperature file: ";         //Prompts user for name of file to be read in

	getline(cin, fileName);                                     //Stores name of file using getline to avoid compatibility issues with file names containing spaces

	ifstream file(fileName);                                    //Attempts to open given file name

	if (file.is_open()) {                                       //Verifies file opened correctly
		getline(file, monthName);                               //Gets first line of file as month name
		getline(file, year);									//Gets second line of file as year
		Temperature temp(monthName, year);                      //Creates Temperature object using file data

		while (file >> temperatureValue || ( file.fail() && !(file.eof()) ) ) {       //Loops through every value in file until there are none remaining, unless a non-numeric value was discovered before the end of file
			if (file.fail()) {
				cout << "A non-numeric value was found in the file.\nPlease correct the problem and restart the application.\n";       //Informs user that the file may be corrupted and exits
				system("pause");
				file.close();
				return 0;
			}
			else { temp.addTemperature(temperatureValue); }
		}
		
		cout << temp.numberOfTemperatures() << " temperatures were recorded for this month.\n";             //Lists number of temperature values found in file
		cout << "\nStatistics\n" <<
			"Average:                          " << temp.averageTemperature() << endl <<                    //Prints average temperature value
			"Lowest temperature:               " << temp.findMinTemperature() << endl <<                    //Prints lowest temperature value
			"Highest temperature:              " << temp.findMaxTemperature() << endl << endl <<            //Prints highest temperature value
			"The temperatures for " << temp.getMonth() << " " << temp.getYear() << " are:\n";               //Formatting before printing sorted values
		temp.sortTemperatures();                                  //Call to sort temperature values
		temp.displayTemperatures();                               //Call to list all temperatures found
		file.close();                                             //Closes data file
	}
	else {
		cout << "The file was unable to open. Please check the spelling of the file name and verify access permissions are granted.\n";      //Prints error if file was not opened successfully.
		system("pause");
		return 0;
	}
}
