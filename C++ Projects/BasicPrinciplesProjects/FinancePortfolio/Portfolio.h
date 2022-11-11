//<Portfolio.h> -- Header file for Portfolio class. Includes inline functions.
#pragma once
#include <string>
#include <vector>
#include "Bond.h"
#include "Stock.h"
#include <iostream>
#include <algorithm>

class Portfolio {
public:
	Portfolio(std::string portfolioNameInput) {      //Constructor
		portfolioName = portfolioNameInput;
	}
	
	~Portfolio() {}         //Destructor

	void purchaseStocks() {    //Function to purchase Stocks
		//Variables to pass to constructor
		int m, d, y;
		char charDate[20];
		Date realDate;
		double totalPurchasePrice;
		int quantityPurchased;
		std::string tickerSymbol;
		int parValue;
		std::string stockType;
		int dividendsPerShare;

		//Gathering information for Stock
		std::cout << "\n\t\tPurchase Stocks\n\nPurchase date (mm/dd/yyyy):  ";
		std::cin >> charDate;
		std::cout << "\nTotal purchase price:  ";
		std::cin >> totalPurchasePrice;
		std::cout << "\nQuantity purchased:  ";
		std::cin >> quantityPurchased;
		std::cout << "\nTicker symbol:  ";
		std::cin >> tickerSymbol;
		std::cout << "\nPar value:  ";
		std::cin >> parValue;
		std::cout << "\nStock type (C for Common or P for Preferred):  ";
		std::cin >> stockType;
		std::cout << "\nDividends per share:  ";
		std::cin >> dividendsPerShare;
		
		//Tokenizing entered Date for formatting
		tokenizeDate(charDate, m, d, y);
		realDate.setDate(d, m, y);

		//Creating Stock object
		Stock purchasedStock(realDate,totalPurchasePrice,quantityPurchased,tickerSymbol,parValue,stockType,dividendsPerShare);

		//Adding Stock object to vector
		portfolioStocks.push_back(purchasedStock);
	}

	void purchaseBonds() {	//Function to purchase Bonds
		//Variables to pass to constructor
		int m, d, y;
		char charDate[20];
		Date realPurchaseDate;
		double totalPurchasePrice;
		int quantityPurchased;
		std::string issuer;
		int faceValue;
		double statedInterestRate;
		char maturityDate[20];
		Date realMaturityDate;

		//Gathering information for Bond
		std::cout << "\n\t\tPurchase Bonds\n\nPurchase date (mm/dd/yyyy):  ";
		std::cin >> charDate;
		std::cout << "\nTotal purchase price:  ";
		std::cin >> totalPurchasePrice;
		std::cout << "\nQuantity purchased:  ";
		std::cin >> quantityPurchased;
		std::cin.ignore();
		std::cout << "\nIssuer:  ";
		std::getline(std::cin,issuer);
		std::cout << "\nFace value:  ";
		std::cin >> faceValue;
		std::cout << "\nStated interest rate:  ";
		std::cin >> statedInterestRate;
		std::cout << "\nMaturity date (mm/dd/yyyy):  ";
		std::cin >> maturityDate;

		//Tokenizing entered Dates for formatting
		tokenizeDate(charDate, m, d, y);
		realPurchaseDate.setDate(d, m, y);

		tokenizeDate(maturityDate, m, d, y);
		realMaturityDate.setDate(d, m, y);

		//Creating Bond object
		Bond purchasedBond(realPurchaseDate, totalPurchasePrice, quantityPurchased, issuer, faceValue, statedInterestRate, realMaturityDate);

		//Adding Bond object to vector
		portfolioBonds.push_back(purchasedBond);
	}

	void sortStocks() {	//Function to sort Stocks stored in portfolioStocks vector. Relies on overloaded < operator.
		std::sort(portfolioStocks.begin(), portfolioStocks.end());
	}

	void sortBonds() {	//Function to sort Bonds stored in portfolioBonds vector. Relies on overloaded < operator.
		std::sort(portfolioBonds.begin(), portfolioBonds.end());
	}

	void listSecurities() {    //Function to list securities in a formatted and sorted order.
		std::cout << std::endl << "These are the STOCKS in your " << portfolioName << " portfolio:" << std::endl;
		sortStocks();
		for (int i = 0; i < portfolioStocks.size(); i++) {
			std::cout << portfolioStocks.at(i) << std::endl;
		}

		std::cout << std::endl << "These are the BONDS in your " << portfolioName << " portfolio:" << std::endl;
		sortBonds();
		for (int i = 0; i < portfolioBonds.size(); i++) {
			std::cout << portfolioBonds.at(i) << std::endl;
		}
		std::cout << std::endl;
	}

	void tokenizeDate(char* cDate, int& month, int& day, int& year) {    //Function to tokenize inputted Dates
		char seps[] = "/";
		char* token = NULL;
		char* next_token = NULL;
		
		token = NULL;
		next_token = NULL;

		// Establish string and get the tokens:   

		token = strtok_s(cDate, seps, &next_token);
		month = atoi(token);
		token = strtok_s(NULL, seps, &next_token);
		day = atoi(token);
		token = strtok_s(NULL, seps, &next_token);
		year = atoi(token);
	}

private:
	std::string portfolioName;
	std::vector<Stock> portfolioStocks;
	std::vector<Bond> portfolioBonds;
};