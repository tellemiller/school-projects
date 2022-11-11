//<ABag.h> -- File that inherits bagADT to create Bag ADT and implement basic functions
//CSIS 215-B01

/*
* File:   ABag.h
* Author: Prof Terri Sipantzi
*
* You may use this template to implement your ABag. 
*/

#ifndef ABAG_H
#define	ABAG_H

#include "book.h"
#include "bagADT.h"

template <typename E>
class ABag : public Bag<E> {
public:
	// constructors/destructor
	ABag() {      //Empty constructor
		
	}

	ABag(int size) {       //Constructor when given Bag size
		data = new E[size];
		used = 0;
		capacity = size;
	}
	
	// bag methods: addItem, remove, operator+=, size, etc.
	bool addItem(const E& item) {      //Adds item to Bag ADT
		if (used == capacity) { return false; }   //If bag is full, don't add item
		data[used++] = item;       //Assigns item to last slot of data[] and increments used member variable
		return true;
	}

	bool remove(E& item) {           //Removes item from bag
		for (int i = 0; i < capacity; i++) {     //Searches bag for value that matches item to find
			if (data[i] == item) {               //If a match is found...       
				item = data[i];                  //Returns the item it found via &
				data[i] = data[used - 1];        //Takes item in last spot of array and moves it to current index
				used--;                          //Decrements 'used' to shorten array for removed value
				return true;
			}
		}
		return false;              //Returns false if item was not found
	}

	bool removeTop(E& returnValue) {      //Removes top item from bag 
		if (used == 0) { return false; }      //If the bag is empty, a value cannot be removed
		returnValue = data[used - 1];         //Sets top item in bag (one added most recently) to 'returnValue'
		used--;                               //Decrements 'used' to shorten array to "remove" value
		return true;
	}

	bool find(E& returnValue) const {        //Finds specific item in bag
		for (int i = 0; i < used; i++) {      //Searches for item in bag
			if (data[i] == returnValue) {     
				returnValue = data[i];        //If item is found, pass it to calling function via '&returnValue'
				return true;
			}
		}
		return false;             //Return false if item could not be found
	}

	bool inspectTop(E& item) const {     //Check and see what item in top of bag is
		if (used == 0) { return false; }      //If bag is empty, there is no item in top of bag
		item = data[used - 1];                //Return item added most recently, aka top item in bag
		return true;
	}

	void emptyBag() { used = 0; }       //"Empties" bag by setting 'used' to 0
	
	bool operator +=(const E& addend) { return addItem(addend); }      //Overloads += operator to add item to bag
	
	int size() const { return used; }     //Returns how many items are in bag

	int bagCapacity() const { return capacity; }      //Returns max elements allowed in bag

private:
	E *data;            // an array of items
	int used;           // number of items the data array currently holds
	int capacity;       // the number of items the bag can hold (size of array)
};

#endif	/* ABAG_H */

