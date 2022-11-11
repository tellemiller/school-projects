//<InputOutput.cpp> -- Evaluates number of potential team arrangements, given a total of 18 people and teams of 3.
//CSIS 111-B01
//Include statements
#include <iostream>
#include <string>
using namespace std;
//Global declarations: Constants and type definitions only -- no variables

double e = 2.71828;
double pi = 3.14159;

//Function prototypes
double factorial(double input) {


	input = pow(input, -e) * pow(input, input) * sqrt(2 * pi * input); //Formula for calculating factorials: n! = e^-n * n^n * sqrt(2 * pi * n)

	return input;
}

int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Telle Miller -- Lab 2" << endl << endl;
	//Variable declarations

	double n = 18.0; // # of items in set
	double r = 3.0;  // # of items taken at a time

	//Program logic
	cout << "Number of teams of 3 possible, given a pool of 18 candidates: " << ((factorial(n) / factorial(r)) * factorial(n - r)) << endl << endl; //Calculates number of permutations using formula: (n!/r!)[(n-r)!]

	//Closing program statements
	system("pause");
	return 0;
}
//Function definitions

