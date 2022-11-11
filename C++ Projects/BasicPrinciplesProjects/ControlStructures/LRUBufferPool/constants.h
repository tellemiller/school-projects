//<constants.h> -- File to hold constants for improved readability and maintainability
//<CSIS 215-B01>

/*
 * File:   constants.hpp
 * Author: Prof Terri Sipantzi
 *
 * Created on August 25, 2012, 10:09 AM
 */

#ifndef CONSTANTS_H
#define	CONSTANTS_H

#include <iostream>
using namespace std;

static const int BLOCKSIZE = 4096;	//buffer blocksize
static const int POOL_SIZE = 5;   	//number of buffer block in the buffer pool

//common char functions
//create and initialize a char array and then return a pointer to it
void initializeCharArray(int size, char* ch) {
	for (int i = 0; i < size; i++) {
		ch[i] = (char)NULL;
	}
}

//get a new char array and initialize it
char* getCharArray(int size) {
	char* myChars = new char[size];
	initializeCharArray(size, myChars);
	return myChars;
}

//print out a string of chars
void printChars(char* ch, int size, int blkid) {
	cout << "\nMy data for block " << blkid << " is: \"";
	for (int i = 0; i < size; i++) {
		cout << ch[i];
	}
	cout << "\"\n";
}

#endif	/* CONSTANTS_H */

