//<bagtestmain.cpp> -- Main runner file to test methods created in ABag.h and BDictionary.h
//CSIS 215-B01

/*
* File:   bagtestmain.cpp
* Author: Prof Sipantzi -- CSIS 215 -- Programming Assignment 1 -- Bag Dictionary
*
* Created on July 14, 2012, 11:45 AM
* Updated pointers to smart pointers in ABag and BDictionary on 12/14/2018
*/

#include <string>
#include <sstream>
#include "ABag.h"
#include "BDictionary.h"

using namespace std;

const size_t DICTIONARY_SIZE = 20;   //# of KV pairs allowed in our Dictionary

void PauseScreen(); //Used to pause screen output

/*
* Tests BDictionary with int and string objects only.
*/

int main(int argc, char** argv) {

	cout << "<Telle Miller> -- CSIS 215 Programming Assignment 1 -- Bag Dictionary" << endl << endl;  //Required student info printout

	BDictionary<int, string> myIntStrDict(DICTIONARY_SIZE);     //Creates int/string dictionary
	BDictionary<string, int> myStrIntDict(DICTIONARY_SIZE);     //Creates string/int dictionary

	// myIntStrDict tests
	// INSERT: myIntStrDict
	cout << "Testing dictionary with <int, string> KV Pair\n";
	for (int i = 1; i <= DICTIONARY_SIZE; i++) {           //Populates int/string dictionary
		stringstream sn;
		sn << "Beth " << i * 10;
		myIntStrDict.insert(i * 10, sn.str());
	}
	cout << "INSERT: Size of myIntStrDict is " << myIntStrDict.size() << endl;   //Displays size of int/string dictionary after population
	
	// REMOVEANY: myIntStrDict
	string strData;     //Empty string object to hold contents of removed Key
	if (myIntStrDict.removeAny(strData) == true) {           //Returns true if a value was removed from Dictionary
		cout << "REMOVEANY: My string data is " << strData << endl;
	}
	else {
		cout << "RemoveAny() failed -- dictionary is empty.\n";   
	}
	
	cout << "Size of myIntStrDict is " << myIntStrDict.size() << "\n";  //Prints dictionary size after removing a value

	// FIND: test for myIntStrDict.find
	int intKey = 40;
	if (myIntStrDict.find(intKey, strData) == true) {       //Searches for KVpair and returns true if found
		cout << "FIND: My data at key==" << intKey << " is: " << strData << "\n";  //Displays content of key
		cout << "Size of myIntStrDict is " << myIntStrDict.size() << "\n";
	}
	else {
		cout << "Could not find a record at " << intKey << "\n";
	}

	// REMOVE: myIntStrDict
	intKey = 60;
	if (myIntStrDict.remove(intKey, strData) == true) {        //Attempts to remove KVpair using integer key
		cout << "REMOVE: Removed key " << intKey << " which was " << strData << "\n";
	}
	else {
		cout << "Could not find key " << intKey << "\n";
	}
	cout << "Size of my dictionary is " << myIntStrDict.size() << "\n";

	// CLEAR: myIntStrDict
	myIntStrDict.clear();            //Empties int/string dictionary
	cout << "CLEAR: Size of myIntStrDict is " << myIntStrDict.size() << "\n\n";

	/* end myIntStrDict tests ---------------------------------------------*/

	// myStrIntDict tests
	// INSERT: myStrIntDict
	cout << "Testing dictionary with <string, int> KV Pair\n";
	myStrIntDict.insert("Terri", 57);            //Populates str/int dictionary
	myStrIntDict.insert("Beth", 53);
	myStrIntDict.insert("Jeremy", 19);
	myStrIntDict.insert("Nathan", 17);
	myStrIntDict.insert("Zipper", 2);
	myStrIntDict.insert("Button", 1);
	myStrIntDict.insert("Kiwi", 7);
	myStrIntDict.insert("Masoala", 10);

	cout << "INSERT: Size of myStrIntDict is " << myStrIntDict.size() << endl;    //Prints size of str/int dictionary

	// REMOVEANY: myStrIntDict
	int intData;   //Empty integer object to hold contents of removed Key
	if (myStrIntDict.removeAny(intData) == true) {
		cout << "REMOVEANY: My int data is " << intData << endl;
	}
	else {
		cout << "RemoveAny() failed -- dictionary is empty.\n";
	}
	
	cout << "Size of myIntStrDict is " << myStrIntDict.size() << "\n";

	// FIND: myStrIntDict.find
	string strKey = "Kiwi";
	if (myStrIntDict.find(strKey, intData) == true) {
		cout << "FIND: " << strKey << "\'s age is " << intData << endl;
		cout << "Size of myStrIntDict is " << myStrIntDict.size() << "\n";
	}
	else {
		cout << "Could not find a record at " << strKey << "\n";
	}

	// REMOVE: myStrIntDict
	strKey = "Button";
	if (myStrIntDict.remove(strKey, intData) == true) {
		cout << "REMOVE: Removed key " << strKey << " which was " << intData << "\n";
	}
	else {
		cout << "Could not find key " << strKey << "\n";
	}
	cout << "Size of my dictionary is " << myStrIntDict.size() << "\n";

	// CLEAR: myStrIntDict
	myStrIntDict.clear();
	cout << "CLEAR: Size of myStrIntDict is " << myStrIntDict.size() << "\n\n";

	/* end myStrIntDict tests ---------------------------------------------*/

	/* Demonstrate any Bag functions that were not used/demonstrated in the implemention 
	of your BDictionary and ABag using a Bag of KVpairs<int, string>. */

	ABag<KVpair<int, string>> myBag(5); //Used to test bag functions not previously demonstrated
		KVpair<int,string> testKey(1,"Test");     //Creates a key to add to Bag
		myBag.addItem(testKey);                     //Adds created test key to Bag
		cout << "ITEM IN TOP OF BAG: " << myBag.inspectTop(testKey);     //Verifies inspectTop() function works
		cout << "\nCAPACITY OF BAG: " << myBag.bagCapacity();            //Returns capacity of Bag

	PauseScreen();

	return 0;
}

//Used to pause the screen wherever desired
void PauseScreen()
{
	char ch;
	cout << "\nPress the Enter key to continue ... ";
	cin.get(ch);
}