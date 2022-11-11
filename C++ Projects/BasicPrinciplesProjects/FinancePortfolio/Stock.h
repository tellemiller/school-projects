//<Stock.h> -- Header file for Stock class. Includes inline functions.
#pragma once
#include <iostream>
#include "Security.h"
#include "Date.h"

class Stock: public Security {

friend std::ostream& operator<<(std::ostream&, const Stock&);	//Friend function to overload << operator

public:
	enum stock_types { Common, Preferred };   //enum variable to store type of Stock

	Stock(Date purchaseDate, double totalPurchasePrice, int quantityPurchased, std::string tickerSymbol, int parValue, std::string enteredStockType, int dividendsPerShare) {    //Constructor to set member variables
		setPurchaseDate(purchaseDate);
		setPurchasePrice(totalPurchasePrice / quantityPurchased);
		setQuantityPurchased(quantityPurchased);
		setTickerSymbol(tickerSymbol);
		setParValue(parValue);
		if (enteredStockType == "C") { setStockType(Common); }      //Determines correct enum type to assign based on inputted data. Defaults to Preferred.
			else { setStockType(Preferred); }
		setDividendPerShare(dividendsPerShare);
	}

	~Stock() {}     //Destructor

	//Setter functions for member variables
	void setTickerSymbol(std::string newTickerSymbol) {
		tickerSymbol = newTickerSymbol;
	}

	void setParValue(int newParValue) {
		parValue = newParValue;
	}

	void setStockType(stock_types newStockType) {
		stockType = newStockType;
	}

	void setDividendPerShare(double newDividendPerShare) {
		dividendsPerShare = newDividendPerShare;
	}
	
	//Getter functions for member variables
	std::string getTickerSymbol() const {
		return tickerSymbol;
	}

	int getParValue() const {
		return parValue;
	}

	stock_types getStockType() const {
		return stockType;
	}

	double getDividendsPerShare() const {
		return dividendsPerShare;
	}

	double calcIncome() const {	//Function to calculate income from a given Stock
		return dividendsPerShare * getQuantityPurchased();
	}
	
	bool operator<(const Stock& s) const {	//Member function to overload < operator. This function is used to sort Stocks by ticker symbol in "Portfolio.h"
		return tickerSymbol.compare(s.tickerSymbol) < 0;
	
	}
private:
	std::string tickerSymbol;
	int parValue;
	stock_types stockType;
	double dividendsPerShare;
};

std::ostream& operator<<(std::ostream& output, const Stock& s) {	//Overloaded friend function for << operator. Provides formatting for Bond member variables
	std::string typeOfStock;
	switch (s.getStockType()) {           //Switch to transfer enum type to string for formatting
	case Stock::Common:
		typeOfStock = "Common";
		break;
	case Stock::Preferred:
		typeOfStock = "Preferred";
		break;
	}
	output << "Ticker symbol:\t\t" << s.tickerSymbol << std::endl;
	output << "Purchase Date:\t\t" << s.getPurchaseDate() << std::fixed << std::setprecision(2) << std::endl;
	output << "Total price:\t\t" << s.getQuantityPurchased() * s.getPurchasePrice() << std::endl;
	output << "Quantity of shares:\t" << s.getQuantityPurchased() << "\t\tPrice per share:\t" << s.getPurchasePrice() << std::endl;
	output << "Par value:\t\t" << s.parValue << "\t\tType:\t\t\t" << typeOfStock << std::endl;
	output << "Dividends per share:\t" << s.getDividendsPerShare() << std::endl;
	output << "Dividend Income:\t" << s.calcIncome() << std::endl;
	return output;
}
