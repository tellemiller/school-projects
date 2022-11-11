//<BDictionary.h> -- File that inherits dictionaryADT to create Dictionary ADT and implement basic functions
//CSIS 215-B01

/*
* File:   BDictionary.h -- implement a dictionary use an array-based bag
* Author: Prof Terri Sipantzi
*
* You may use this template to implement your Dictionary
*/

#ifndef BDICTIONARY_H
#define	BDICTIONARY_H

#include "ABag.h"
#include "dictionaryADT.h"
#include "kvpair.h"

template <typename Key, typename E>
class BDictionary : public Dictionary<Key, E> {
public:
	// constructors/destructor
	BDictionary(int size) {          //Constructor for creating BDictionary and assigning it an ABag ADT
		dictionary = new ABag<KVpair<Key, E>>(size);
	}

	// methods: clear, insert, remove, removeAny, find, size, etc.
	void clear() { dictionary->emptyBag(); }           //Clears dictionary

	bool insert(const Key& k, const E& e) {      //Inserts a KVpair to Bag
		KVpair<Key, E> myKey(k, e);               //Intermediary key to add to Bag
		return dictionary->addItem(myKey);        //Adds 'myKey' to Bag
	}

	bool remove(const Key& k, E& rtnVal) {      //Removes a KVpair from bag
		KVpair<Key, E> myKey(k, rtnVal);         //Intermediary key to search for in bag
		return dictionary->remove(myKey);        //Sends intermediary key to bag to see if it is present. If it is, the KVpair is removed.
	}
	
	bool removeAny(E& returnValue) {        //Removes an "arbitrary" key from Bag
		KVpair<Key, E> myKey;                 //Intermediary key to pass out value associated with key removed
		bool removed = dictionary->removeTop(myKey);    //Attempts to remove top value in Bag
		if (removed) returnValue = myKey.value();       //Passes value associated with removed key via '&returnValue' to calling function
		return removed;
	}
	
	bool find(const Key& k, E& returnValue) const {       //Searches for specific KVpair in Bag
		KVpair<Key, E> myKey(k, returnValue);              //Intermediary key to search for in Bag
		return dictionary->find(myKey);                    //Searches for key and returns results
	}

	int size() { return dictionary->size(); }     //Returns current size of Dictionary

private:
	//Pointer to a ABag object.  You'll need to instantiate the bag in your constructor:
	// dictionary = new ABag<KVpair<Key, E>>(size) or something similar depending on how
	// you've implemented your ABag constructor(s).
	//This pointer gives you access to the bag which stores your data and provides the 
	//functions you need to build your dictionary.
	ABag<KVpair<Key, E>>* dictionary;
};

#endif	/* BDICTIONARY_H */

