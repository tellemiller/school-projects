//<AnimalDriver.cpp> -- Driver file for creating five Animal objects and calling the correct constructor/destructor

#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Fish.h"
#include "Rabbit.h"
#include "Snake.h"

using namespace std;

int generateRandom() {
	return rand() % 20 + 1;     //returns random integer between 1 and 20
}

int main()
{
	int menuSelection;
	int petsCreated = 0;
	string petName;
	Animal* petArray[5];
	
	cout << "Telle Miller -- Assignment 8" << endl << endl;     //Required assignment print out

	srand(100);     //Settings seed for rand() function to 100

	cout << "\n\n\t\tMain Menu\n\n\t1 - Dog\n\n\t2 - Rabbit\n\n\t3 - Fish\n\n\t4 - Snake";      //Initial prompt for user input
	cout << "\n\n\tEnter selection:  ";
	cin >> menuSelection;

	while (petsCreated < 5) {          //Loop to constantly gather input until 5 pets have been created
		
		if ((menuSelection < 1 || menuSelection > 4) && !cin.fail()) { cout << "\nInvalid menu option. Please enter one of the specified values."; }     //Error checking for invalid menu option

		if (cin.fail()) {
			cout << "\nYou entered a value other than a number. You must enter a number. Please try again.";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');                                                              //Verifying user input is valid
		}

		if (menuSelection == 1) {     //Dog case
			cout << "\n\nEnter pet name: ";
			cin >> petName;
			Animal* petDog = new Dog(petName, generateRandom());    //Generates new Dog object using inputted name and randomly generated age. Stored to array as Animal*
			petArray[petsCreated] = petDog;
			petsCreated++;
		}
		else if (menuSelection == 2) {	     //Rabbit case
			cout << "\n\nEnter pet name: ";
			cin >> petName;
			Animal* petRabbit = new Rabbit(petName, generateRandom());
			petArray[petsCreated] = petRabbit;
			petsCreated++;
		}
		else if (menuSelection == 3) {       //Fish case
			cout << "\n\nEnter pet name: ";
			cin >> petName;
			Animal* petFish = new Fish(petName, generateRandom());
			petArray[petsCreated] = petFish;
			petsCreated++;
		}
		else if (menuSelection == 4) {            //Snake case
			cout << "\n\nEnter pet name: ";
			cin >> petName;
			Animal* petSnake = new Snake(petName, generateRandom());
			petArray[petsCreated] = petSnake;
			petsCreated++;
		}

		if (petsCreated != 5) {       //Checks to see if all 5 pets have been created before prompting user
			cout << "\n\n\t\tMain Menu\n\n\t1 - Dog\n\n\t2 - Rabbit\n\n\t3 - Fish\n\n\t4 - Snake";
			cout << "\n\n\tEnter selection:  ";
			cin >> menuSelection;
		}
	}

	cout << endl;        //Linebreak for formatting purposes

	for (int i = 0; i < 5; i++) {           //Loops through array of Animal* to print information of each object
		cout << "My name is " << petArray[i]->getName() << ", and I am " << petArray[i]->getAge() << " years old.\n";
		petArray[i]->move();
		cout << endl << endl;
	}

	for (int i = 0; i < 5; i++) {  //Loops through array of Animal* to call destructor of each object
		delete petArray[i];
	}
}
