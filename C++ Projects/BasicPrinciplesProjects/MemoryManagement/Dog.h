//<Dog.h> --- Header file for Dog class. Includes in-line implementations.
#pragma once
#include "Animal.h"

class Dog : public Animal {
public:
	//Constructor
	Dog(std::string name, int age) {
		Animal::setName(name);
		Animal::setAge(age);
		std::cout << "Invoking Dog 2-Argument constructor\n";
	}
	//Destructor
	~Dog() {
		std::cout << "Invoking Dog destructor\n";
	}

	//Implementation of move() function from Animal class
	void move() {
		std::cout << "I run.";
	}
};