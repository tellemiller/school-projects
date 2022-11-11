#include "Pet.h"

using namespace std;

Pet::Pet() {         //Pet constructor
	cout << "Creating new pet" << endl << endl;
}

Pet::~Pet() {       //Pet destructor
	cout << "In the pet destructor" << endl;
}

void Pet::setName(string newName) {        //Setter for name variable
	name = newName;
}

void Pet::setType(string newType) {        //Setter for type variable
	type = newType;
}

void Pet::setWeight(int newWeight) {        //Setter for weight variable
	weight = newWeight;
}

string Pet::getName() const {             //Getter for name variable
	return name;
}

string Pet::getType() const {             //Getter for type variable
	return type;
}

int Pet::getWeight() const {             //Getter for weight variable
	return weight;
}


