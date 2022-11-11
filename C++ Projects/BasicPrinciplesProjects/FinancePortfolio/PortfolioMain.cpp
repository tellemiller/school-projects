//<PortfolioMain.cpp> -- Controller file for instantiating a Portfolio object and accepting input from user.
//CSIS 112-B01
#include <iostream>
#include <string>
#include "Portfolio.h"

using namespace std;

int main()
{
	string portfolioName, menuSelection;

	cout << "Telle Miller -- Assignment 7" << endl << endl;     //Required assignment print out

	cout << "\tEnter a name for your portfolio:   ";       //Getting name for Portfolio
	getline(cin, portfolioName);

	Portfolio portfolio(portfolioName);      //Creating new Portfolio object

	while (true) {          //Loop to constantly gather input until exit code ('Q') is entered
		cout << "\n\n\t\tMain Menu\n\tS -- Purchase stock\n\tB -- Purchase bonds\n\tL -- List portfolio securities\n\tQ -- Quit";
		cout << "\n\n\tSelection:  ";
		cin >> menuSelection;

		if (menuSelection == "S") {      //Purchase a stock
			portfolio.purchaseStocks();
		}
		else if (menuSelection == "B") {	//Purchase a bond
			portfolio.purchaseBonds();
		}
		else if (menuSelection == "L") {        //List all stored securities
			portfolio.listSecurities();
		}
		else if (menuSelection == "Q") {         //Exit program
			cout << "Exiting..." << endl;
			system("pause");
			return 0;
		}
		else { cout << "\n\tInvalid menu option. Please enter one of the specified values."; }     //Error checking
	}
}
