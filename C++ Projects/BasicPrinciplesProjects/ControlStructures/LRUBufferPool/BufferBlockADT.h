//<BufferBlockADT.h> -- Template for creating a buffer block ADT
//<CSIS 215-B01>

/*
 * File:   BufferBlock.hpp
 * Author: Professor Terri Sipantzi
 *
 * Created on August 25, 2012, 8:49 AM
 */

#ifndef BUFFERBLOCKADT_H
#define	BUFFERBLOCKADT_H

#include <iostream>
#include <string>

using namespace std;

class BufferblockADT {
private:
	//Instance variables:
	//	int blockID;
	//	char* block;

public:

	//size is the size of the character array data
	//points to.
	BufferblockADT() {}
	BufferblockADT(char* data, int size = 4096) {}
	virtual ~BufferblockADT() {}

	//read the block from pos to pos + size-1 (or to the end of the block)
	virtual void getData(int pos, int size, char* data) = 0;

	//setID
	virtual void setID(int id) = 0;

	//getID
	virtual int getID() const = 0;

	//getBlocksize
	virtual int getBlocksize() const = 0;

	//return the block
	virtual char* getBlock() const = 0;

	//set the block
	virtual void setBlock(char* blk) = 0;
};


#endif	/* BUFFERBLOCKADT_H */

