//<Temperature.cpp> -- Class file for Temperature object. Provides defintions for header defined functions.
//CSIS 112-B01

//Include statements
#include <iostream>
#include <vector>
#include <algorithm>
#include "Temperature.h"

using namespace std;

 //Public two-argument constructor for creating Temperature object
Temperature::Temperature(string newMonth, string newYear) {
	month = newMonth;
	year = newYear;
}

//Public member functions
void Temperature::setMonth(string newMonth) {	//Setter for month var
	month = newMonth;
};

string Temperature::getMonth() const {          //Getter for month var
	return month;
};

void Temperature::setYear(string newYear) {     //Setter for year var
	year = newYear;
};

string Temperature::getYear() const {          //Getter for year var
	return year;
};

void Temperature::addTemperature(int newTemperature) {   //Function to add a temperature to end of vector
	temperatures.push_back(newTemperature);
};

void Temperature::displayTemperatures() const {     //Displays temperatures in vector via iteration
	for (int i = 0; i < temperatures.size(); i++)
		std::cout << temperatures.at(i) << '\n';
};

int Temperature::numberOfTemperatures() const {    //Function to get size of vector
	return temperatures.size();
};

double Temperature::averageTemperature() {        //Function to get average value in vector
	double sum = 0.0;
	for (int i = 0; i < temperatures.size(); i++) {
		sum += temperatures.at(i);                  //Iterating loop adds all values in vector to sum variable
	}
	double average = sum / numberOfTemperatures();  // MEAN = SUM OF DATA SET VALUES / # OF DATA SET VALUES
	return average;
};

void Temperature::sortTemperatures() {              //Function that uses C++ sort function to sort vector
	sort(temperatures.begin(), temperatures.end());
};

int Temperature::findMinTemperature() {            //Finds smallest value in vector
	int lowest = temperatures.at(0);
	for (int i = 1; i < temperatures.size(); i++) {
		if (temperatures.at(i) < lowest) {
			lowest = temperatures.at(i);
		}
	}
	return lowest;
};

int Temperature::findMaxTemperature() {            //Finds largest value in vector
	int highest = temperatures.at(0);
	for (int i = 1; i < temperatures.size(); i++) {
		if (temperatures.at(i) > highest) {
			highest = temperatures.at(i);
		}
	}
	return highest;
};

//Private variables
string month, year;                    //Month and year the temperature values were recorded
vector<int> temperatures;              //Vector containing temperature values