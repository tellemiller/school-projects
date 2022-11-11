//<Animal.h> --- Header file for Animal class. Includes in-line implementations.
#pragma once
#include <string>
#include <iostream>

class Animal {
public:
	//Constructors
	Animal() {
		age = 0;
		std::cout << "Invoking the default Animal constructor\n";
	}

	Animal(int enteredAge, std::string enteredName) {
		name = enteredName;
		age = enteredAge;
		std::cout << "Invoking the 2-argument Animal constructor\n";
	}

	//Destructors
	virtual ~Animal()  {
		std::cout << "Invoking the default Animal destructor\n";
	}

	//Getters
	std::string getName() { return name; }
	int getAge() { return age; }

	//Setters
	void setName(std::string newName) { name = newName; }
	void setAge(int newAge) { age = newAge; }

	//Purely virtual move() function to be implemented by derived classes
	virtual void move() = 0;

private:
	std::string name;
	int age;
};