//<Security.h> -- Header file for Security class. Includes inline functions.
#pragma once
#include <string>
#include "Date.h"

class Security {
	public:
		Security() {}      //Constructor. Left empty as it is implemented in derived classes
		~Security() {}     //Destructor

		//Setter functions for member variables
		void setPurchaseDate(Date newDate) {  
			purchaseDate = newDate;
		}

		void setPurchasePrice(double newPurchasePrice) { 
			purchasePrice = newPurchasePrice;
		}

		void setQuantityPurchased(int newQuantityPurchased) {    
			quantityPurchased = newQuantityPurchased;
		}

		//Getter functions for member variables
		Date getPurchaseDate() const {          
			return purchaseDate;
		}

		double getPurchasePrice() const {
			return purchasePrice;
		}

		int getQuantityPurchased() const {
			return quantityPurchased;
		}

	private:
		Date purchaseDate;
		double purchasePrice;
		int quantityPurchased;
};