//<Snake.h> --- Header file for Snake class. Includes in-line implementations.
#pragma once
#include "Animal.h"

class Snake : public Animal {
public:
	//Constructor
	Snake(std::string name, int age) {
		Animal::setName(name);
		Animal::setAge(age);
		std::cout << "Invoking Snake 2-argument constructor\n";
	}
	//Destructor
	~Snake() {
		std::cout << "Invoking Snake destructor\n";
	}

	//Implementation of move() function from Animal class
	void move() {
		std::cout << "I slither.";
	}
};