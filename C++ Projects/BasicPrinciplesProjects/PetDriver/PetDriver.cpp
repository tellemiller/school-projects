//<PetDriver.cpp> -- Driver class for dynamically creating Pet objects

#include <iostream>
#include "Pet.h"

using namespace std;

int generateWeight(); //Method to generate random weight

int main()
{
	cout << "Telle Miller -- Assignment 6" << endl << endl;   //Mandatory assignment printout

	int numberOfPets, petWeight;		//Creating variables needed to hold and pass information to Pet objects
	string petName, petType;

	srand(100);            //Setting seed for rand() function to 100 as instructed

	cout << "How many pets do you have?" << endl;	//Prompting user for number of pets
	cin >> numberOfPets;		

	while (cin.fail() || numberOfPets <= 0) {
		if (cin.fail()) {
			cout << "You entered a value other than a number. You must enter a number. Please try again. " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');                                                              //Verifying user input is valid
		}
		else {
			cout << "The value you entered was zero or less. You must enter a positive number. Please try again. " << endl;
		}
		cout << "How many pets do you have?" << endl;
		cin >> numberOfPets;
	}

	Pet** pets = new Pet * [numberOfPets];             //Dynamically creating array of pointers to hold Pet object pointers

	for (int i = 0; i < numberOfPets; i++) {                   //Iterating loop to gather input for each Pet object
		cout << "What is the name of your pet?" << endl;       //Prompting user for name of Pet
		cin >> petName;
		while (cin.fail()) {
			if (cin.fail()) {
				cout << "You entered a value other than a string. You must enter a string. Please try again. " << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');                                                              //Verifying user input is valid
			}
			cout << "What is the name of your pet?" << endl;
			cin >> petName;
		}

		cout << "What type of pet is " << petName << "?" << endl;   //Prompting user for type of Pet
		cin >> petType;
		while (cin.fail()) {
			if (cin.fail()) {
				cout << "You entered a value other than a string. You must enter a string. Please try again. " << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');                                                              //Verifying user input is valid
			}
			cout << "What type of pet is " << petName << "?" << endl;
			cin >> petType;
		}

		Pet* pet = new Pet();                       //Dynamically creates new Pet object and stores pointer to object

		pet->setName(petName);                //Setting data members using inputted data and pointer reference 
		pet->setType(petType);
		pet->setWeight(generateWeight());     //Call to generateWeight() to randomly generate pet weight between 1 and 100
		pets[i] = pet;              //Adds Pet pointer for current Pet object to pets (array of pointers)
	}

	cout << "These are the pets you have:" << endl;

	for (int i = 0; i < numberOfPets; i++) {                    //Iterating loop to traverse pets array and display information for each object referenced
		cout << "Pet name:\t" << pets[i]->getName() << endl
			 << "Pet type:\t" << pets[i]->getType() << endl
			 << "Pet weight:\t" << pets[i]->getWeight() << endl << endl;
	}
	
	for (int i = 0; i < numberOfPets; i++) {                 //Iterating loop to traverse pets array and delete each object via the destructor
		pets[i]->~Pet();
		pets[i] = NULL;     //Setting pointer for Pet object to NULL
	}

	delete[] pets;             //Deleting pets array to clear memory before program exits
	pets = NULL;               //Setting pointer for pets array to NULL
	//Program now free to exit without memory leaks
}

int generateWeight() {       //Function to generate random weight for Pet object
	return rand() % 100 + 1;            //Random value formula = [rand() % max + min]
}
