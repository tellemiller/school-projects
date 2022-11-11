//<Bond.h> -- Header file for Bond class. Includes inline functions.
#pragma once
#include "Date.h"
#include "Security.h"
#include <iomanip>

class Bond: public Security {

friend std::ostream& operator<<(std::ostream&, const Bond&);   //Friend function to overload << operator

public:
	Bond(Date realPurchaseDate, double totalPurchasePrice, int quantityPurchased, std::string issuer, int faceValue, double statedInterestRate, Date realMaturityDate) {   //Constructor to set member variables
		setPurchaseDate(realPurchaseDate);
		setPurchasePrice(totalPurchasePrice / quantityPurchased);
		setQuantityPurchased(quantityPurchased);
		setIssuer(issuer);
		setFaceValue(faceValue);
		setStatedInterestRate(statedInterestRate);
		setMaturityDate(realMaturityDate);
	}

	~Bond() {}     //Destructor
	
	//Setter functions for member variables
	void setIssuer(std::string newIssuer) {
		issuer = newIssuer;
	}

	void setFaceValue(int newFaceValue) {
		faceValue = newFaceValue;
	}

	void setStatedInterestRate(double newStatedInterestRate) {
		statedInterestRate = newStatedInterestRate;
	}

	void setMaturityDate(Date newMaturityDate) {
		maturityDate = newMaturityDate;
	}

	//Getter functions for member variables
	std::string getIssuer() const {
		return issuer;
	}

	int getFaceValue() const {
		return faceValue;
	}

	double getStatedInterestRate() const {
		return statedInterestRate;
	}

	Date getMaturityDate() const {
		return maturityDate;
	}


	double calcIncome() const {			//Function to calculate income from a given Bond
		return getQuantityPurchased() * faceValue * statedInterestRate;
	}
	
	bool operator<(const Bond& s) const {   //Member function to overload < operator. This function is used to sort Bonds by issuer in "Portfolio.h"
		return issuer.compare(s.issuer) < 0;
	}

private:
	std::string issuer;
	int faceValue;
	double statedInterestRate;
	Date maturityDate;
};

std::ostream& operator<<(std::ostream& output, const Bond& b) {          //Overloaded friend function for << operator. Provides formatting for Bond member variables
	output << "Issuer:\t\t\t" << b.issuer << std::endl;
	output << "Purchase Date:\t\t" << b.getPurchaseDate() << std::endl;
	output << "Quantity:\t\t" << b.getQuantityPurchased() << std::fixed << std::setprecision(2) << std::endl;
	output << "Total purchase price:\t" << b.getQuantityPurchased() * (double)b.faceValue << "\t\tFace value:\t" << (double)b.faceValue << std::endl;
	output << "Stated Interest Rate:\t" << b.statedInterestRate * 100 << "\t\tMaturity date:\t" << b.maturityDate << std::endl;
	output << "Interest Income:\t" << b.calcIncome() << std::endl;
	return output;
}