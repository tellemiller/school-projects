//<Fish.h> --- Header file for Fish class. Includes in-line implementations.
#pragma once
#include "Animal.h"

class Fish : public Animal {
public:
	//Constructor
	Fish(std::string name, int age) {
		Animal::setName(name);
		Animal::setAge(age);
		std::cout << "Invoking Fish 2-argument constructor\n";
	}
	//Destructor
	~Fish() {
		std::cout << "Invoking Fish destructor\n";
	}

	//Implementation of move() function from Animal class
	void move() {
		std::cout << "I swim.";
	}
};