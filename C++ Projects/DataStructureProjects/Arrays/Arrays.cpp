//<Arrays.cpp> -- Accepts a weight and a planet as user input. Returns the weight adjusted for the indicated planet passed in by user.
//CSIS 111-B01
//Include statements
#include <iostream>
#include <string>
using namespace std;
//Global declarations: Constants and type definitions only -- no variables

enum planetType {Mercury,Venus,Earth,Moon,Mars,Jupiter,Saturn,Uranus,Neptune,Pluto};
double userWeight;
string desiredPlanet;

//Function prototypes

void GetUserInput();
planetType ConvertInputToPlanetType(string);
double OutputWeight(planetType);

int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Telle Miller -- Lab 7" << endl << endl;
	
	//Program logic
	GetUserInput();   //call to GetUserInput to start loop for accepting input.
          
	//Closing program statements
	system("pause");
	return 0;
}
//Function definitions

void GetUserInput() {                     //Receives user input in a loop
	double weight;                        //variable to hold calculated weight
	do {
	cout << "Enter your weight (lbs): ";
	cin >> userWeight;                                          //Accepts user input and assigns it to variables
	
	if (cin.fail()) { 
		cout << "\nERROR: Invalid weight. Please rerun the program and enter your weight as an integer or double.\n";    //Catches an additional error. If user did not enter a double for weight, they are informed of the error and the system exits.
		exit(0); }

	cout << "Enter desired planet: ";
	cin >> desiredPlanet;

	weight = OutputWeight(ConvertInputToPlanetType(desiredPlanet));               //Converts user input from string to enum and passes the enum value to the weight calculating method
	cout << "\nYour weight on " << desiredPlanet << " would be " << weight << " lbs.\n\n";           //Formats and outputs weight on a given planet
	} while (true);            //Loops program until exited. 
}

planetType ConvertInputToPlanetType(string desiredPlanet) {                //Method to convert user input to valid planet type

	if (desiredPlanet == "Mercury") { return Mercury; }
	else if (desiredPlanet == "Venus") { return Venus; }
	else if (desiredPlanet == "Earth") { return Earth; }
	else if (desiredPlanet == "Moon") { return Moon; }
	else if (desiredPlanet == "Mars") { return Mars; }                      //Converts userinput to enum planetType if it is a valid value
	else if (desiredPlanet == "Jupiter") { return Jupiter; }
	else if (desiredPlanet == "Saturn") { return Saturn; }
	else if (desiredPlanet == "Uranus") { return Uranus; }
	else if (desiredPlanet == "Neptune") { return Neptune; }
	else if (desiredPlanet == "Pluto") { return Pluto; }
	
	//if(desiredPlanet = "")
	cout << "\nERROR: Invalid planet type entered.\nPlease enter a valid planet with the first letter capitalized. Examples: Earth, Moon, Saturn, etc.\n\n";    //Warns user that they entered an incorrect planet type
	GetUserInput();                 //Resets loop if input error is performed
}

double OutputWeight(planetType planet) {               //Method to calculate weight for a given planet
	double multiplier = 0.0;                //Variable to store multiplier value for calculating weight

	switch (planet) {
		case Mercury:
			multiplier = 0.4155; break;
		case Venus:
			multiplier = 0.8975; break;
		case Earth:
			multiplier = 1.0; break;
		case Moon:
			multiplier = 0.166; break;
		case Mars:
			multiplier = 0.3507; break;                 //Switch block determines what value should be used to calculate the weight
		case Jupiter:
			multiplier = 2.5374; break;
		case Saturn:
			multiplier = 1.0677; break;
		case Uranus: 
			multiplier = 0.8947; break;
		case Neptune:
			multiplier = 1.1794; break;
		case Pluto:
			multiplier = 0.0899; break;
	}

	return userWeight * multiplier;             //Returns the weight adjusted to a specified planet

}
