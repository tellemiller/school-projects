//<LRUBufferPool.h> -- Implementation of BufferPoolADT.h
//<CSIS 215-B01>

/*
* File:   BufferPoolADT.h
* Author: Clifford A. Shaffer, Dept of CompSci, Virginia Tech
*         Page 286 of Data Structures and Algorithm Analysis
*         Edition 3.2 (C++ Version)
* Modified by Prof Terri Sipantzi, Dept of Computational Sciences,
*		   Liberty University, 3/28/2014
*
* Created on June 5, 2012
*/

#ifndef LRUBUFFERPOOL_H
#define	LRUBUFFERPOOL_H

#include "BufferBlock.h"
#include "BufferPoolADT.h"
#include <string>
#include <fstream>

using namespace std;

class LRUBufferpool : public BufferPoolADT {
private:
	BufferBlock LRUBufferPool[POOL_SIZE];
	fstream input;
	int mostRecentlyUsed; // Index variable for most recently used position
public:
	LRUBufferpool();  //Default constructor
	LRUBufferpool(string filename, int poolSize = 5, int blockSize = 4096); //Constructor to open file and fill in buffer blocks using given data

	virtual ~LRUBufferpool();  //Default destructor

	virtual void getBytes(char* space, int size, int pos) override;   //Copies x bytes from indicated position
	virtual void printBufferBlockOrder() override;  //Prints block ID numbers in order
	virtual int getLRUBlockID() override;     //Retrieves ID from block that was least recently used
};

LRUBufferpool::LRUBufferpool() {}   //Implementation of default constructor
LRUBufferpool::LRUBufferpool(string filename, int poolSize, int blockSize) {   //Implementation of main constructor
	char* set = new char[blockSize + 1];
	input.open(filename.c_str(), fstream::in | fstream::binary);    //Open the text file
	for (int i = 0; i < poolSize;) {
		input.read(set, blockSize);     //Read in data to fill block
		BufferBlock temp(set, blockSize); //Variable to hold block information
		LRUBufferPool[i].setBlock(temp.getBlock());  //Passing block data to permanent storage in BufferPool
		LRUBufferPool[i].setID(i);   //Set block ID to current index position
		i++;
		input.seekg(blockSize * (i));  //Sets next character to be extracted
	}
}

LRUBufferpool::~LRUBufferpool() { }  //Implemenation of the default destructor

void LRUBufferpool::getBytes(char* space, int size, int pos) {   //Implementation of getBytes method
	
	//Variables to get bytes from pool
	bool swapped = false; 
	bool isFound = false; 
	int start = pos % BLOCKSIZE;
	int section = pos / BLOCKSIZE;
	BufferBlock tempBlock;

	for (int i = 0; isFound == false && i < POOL_SIZE; i++) {
		if (LRUBufferPool[i].getID() == section) {    //If data is found, retreive it
			LRUBufferPool[i].getData(start, size, space);
			tempBlock.setBlock(LRUBufferPool[i].getBlock());
			tempBlock.setID(section);
			mostRecentlyUsed = i;
			isFound = true;
		}
	}

	if ((!isFound)) {   //If data not found, find data in file
		char* set = new char[BLOCKSIZE + 1]; 
		input.seekg(BLOCKSIZE * section);  //Navigate to right position
		input.read(set, BLOCKSIZE);   //Read in data
		BufferBlock temp(set, BLOCKSIZE);   //Send data to holding variable
		tempBlock.setBlock(temp.getBlock());  
		tempBlock.setID(section);             //Store data
		tempBlock.getData(start, size, space);
	}

	// Checks to ensure block is Least Recently Used
	if (tempBlock.getID() == LRUBufferPool[0].getID()) { swapped = true; }
	else if (isFound) {
		for (int j = mostRecentlyUsed; j > 0; j--) {
			LRUBufferPool[j].setBlock(LRUBufferPool[j-1].getBlock());
			LRUBufferPool[j].setID(LRUBufferPool[j-1].getID());
		}
		LRUBufferPool[0].setBlock(tempBlock.getBlock());
		LRUBufferPool[0].setID(tempBlock.getID());
		swapped = true;
	}
	if (swapped == false) { // If ID is a new number
		for (int k = POOL_SIZE - 1; k > 0; k--) {
			LRUBufferPool[k].setBlock(LRUBufferPool[k-1].getBlock());
			LRUBufferPool[k].setID(LRUBufferPool[k-1].getID());
		}
		LRUBufferPool[0].setBlock(tempBlock.getBlock());
		LRUBufferPool[0].setID(tempBlock.getID());
	}
}

void LRUBufferpool::printBufferBlockOrder() {      //Implementation of printBufferBlockOrder method
	cout << "My buffer block order from most recently used to LRU is: " << endl << "        ";
	for (int i = 0; i < POOL_SIZE; i++) {
		if (i != POOL_SIZE - 1) { cout << " " << LRUBufferPool[i].getID() << ","; }
		else { cout << " " << LRUBufferPool[i].getID() << ","; }
	}
	cout << endl;
}

int LRUBufferpool::getLRUBlockID() { return LRUBufferPool[POOL_SIZE].getID(); }  //Implementation of getLRUBlockID method
#endif