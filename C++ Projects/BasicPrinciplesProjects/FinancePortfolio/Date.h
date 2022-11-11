//<Date.h> -- Header file for Date class. Includes inline functions.
#pragma once 

#include <iostream> 
#include <cstdlib> 
#include <cctype> 

class Date {

friend std::ostream& operator<<(std::ostream&, Date);  //Friend method to overload << operator

public:

	Date(int d = 0, int m = 0, int yyyy = 0) {      //Constructor
		setDate(d, m, yyyy);
	}

	~Date() {}      //Destructor

	void setDate(int  d, int m, int yyyy) {      //Setter for member variables
		day = d;
		month = m;
		year = yyyy;
	}

private:
	int day;
	int month;
	int year;
};

std::ostream& operator<<(std::ostream& output, Date d) {         //Overloaded function for << operator to output formatted Date
	output << d.month << "/" << d.day << "/" << d.year;
	return output;
}