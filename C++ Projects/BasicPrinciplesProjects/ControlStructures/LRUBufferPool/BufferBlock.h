//<BufferBlock.h> -- Implementation of BufferBlockADT.h
//<CSIS 215-B01>

#ifndef BUFFERBLOCK_H
#define	BUFFERBLOCK_H

#include <string>
#include <iostream>
#include "constants.h"
#include "BufferBlockADT.h"

using namespace std;

class BufferBlock : public BufferblockADT {
private:
	
	char* block;
	int blockID;

public:

	BufferBlock() {}  //Default constructor
	BufferBlock(char* data, int size = 4096) {   // size variable is size of block in bytes
		block = new char[size];
		for (int i = 0; i <= size - 1; i++) {
			block[i] = data[i];
		}
		block[size] = '\0';		// Setting final character to null
	}

	virtual ~BufferBlock() {}  //Default destructor

	// Necessary getters and setters
	virtual void setID(int id) override;
	virtual int getID() const override;
	virtual int getBlocksize() const override;
	virtual char* getBlock() const override;
	virtual void setBlock(char* blk) override;
	virtual void getData(int pos, int size, char* data) override;
};

	//Implementation of class getters/setters

void BufferBlock::setID(int ID) { blockID = ID; }

int BufferBlock::getID() const { return blockID; }

char* BufferBlock::getBlock() const { return block; }

int BufferBlock::getBlocksize() const { return strlen(block); }  //Leverage strlen() method to easily determine block size

void BufferBlock::setBlock(char* blk) {
	block = new char[BLOCKSIZE];
	for (int i = 0; i < BLOCKSIZE; i++) { block[i] = blk[i]; }
}

void BufferBlock::getData(int pos, int size, char* data) {
	int index = 0;
	for (int i = pos; i <= (pos + (size - 1)); i++) {      // Loop out the data into data[index]
		data[index] = block[i];
		index++;
	}
}


#endif	/* BUFFERBLOCKADT_H */