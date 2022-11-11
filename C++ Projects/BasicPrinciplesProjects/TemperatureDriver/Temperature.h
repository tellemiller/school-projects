//<Temperature.h> -- Header file for Temperature class
#pragma once
#include <vector>

class Temperature {
	public:

		Temperature(std::string,std::string);  
		void setMonth(std::string);            
		std::string getMonth() const;          
		void setYear(std::string);            
		std::string getYear() const;      
		void addTemperature(int);              
		void displayTemperatures() const;      
		int numberOfTemperatures() const;      
		double averageTemperature();
		void sortTemperatures();
		int findMinTemperature();
		int findMaxTemperature();

	private:
		std::string month, year;
		std::vector<int> temperatures;
};

