//<Rabbit.h> --- Header file for Rabbit class. Includes in-line implementations.
#pragma once
#include "Animal.h"

class Rabbit : public Animal {
public:
	//Constructor
	Rabbit(std::string name, int age) {
		Animal::setName(name);
		Animal::setAge(age);
		std::cout << "Invoking Rabbit 2-argument constructor\n";
	}
	//Destructor
	~Rabbit() {
		std::cout << "Invoking Rabbit destructor\n";
	}

	//Implementation of move() function from Animal class
	void move() {
		std::cout << "I hop.";
	}
};