//<SelfOrganizingLists.cpp> - Driver file for testing the functionality of the self-ordered list
//<CSIS 215-B01> Telle Miller

#include <string>
#include <fstream>
#include <iostream>

#include "CountSOL.h"
#include "TransposeSOL.h"
#include "MoveToFrontSOL.h"

using namespace std;

enum Mode { COUNT, MOVETOFRONT, TRANSPOSE };

void testSOL(Mode mode, SelfOrderedListADT<char>* SOL);
void testSOL(Mode mode, SelfOrderedListADT<string>* SOL);

int main() {
	
	cout << "Telle Miller -- Assignment #4" << endl << endl;

	// Testing the characters
	cout << "\t--CHARACTER TESTS--\n" << endl;
	testSOL(COUNT, new CountSOL<char>);
	testSOL(MOVETOFRONT, new MoveToFrontSOL<char>);
	testSOL(TRANSPOSE, new TransposeSOL<char>);

	// Testing the strings (from text file)
	cout << "\n\t--STRING TESTS--\n" << endl;
	testSOL(COUNT, new CountSOL<string>);
	testSOL(MOVETOFRONT, new MoveToFrontSOL<string>);
	testSOL(TRANSPOSE, new TransposeSOL<string>);

	system("pause");
	return 0;
}

void testSOL(Mode mode, SelfOrderedListADT<char>* SOL) {
	if (mode == MOVETOFRONT) {
		cout << "Move to Front Heuristic:\t";
	}
	else if (mode == COUNT) {
		cout << "Count Heuristic:\t";
	}
	else if (mode == TRANSPOSE) {
		cout << "Transpose Heuristic:\t";
	}

	for (int i{65}; i < 73; i++) { SOL->add(i); }  // Adding characters (A through H) to list
	
	// Searching list using given character values
	SOL->find('F');
	SOL->find('D');
	SOL->find('F');
	SOL->find('G');
	SOL->find('E');
	SOL->find('G');
	SOL->find('F');
	SOL->find('A');
	SOL->find('D');
	SOL->find('F');
	SOL->find('G');
	SOL->find('E');
	SOL->find('H');
	SOL->find('I');

	cout << "Size of list: " << SOL->size() << endl;
	cout << "Number of compares: " << SOL->getCompares() << endl;
	cout << "List members with associated frequencies:\n";
	SOL->printlist();

	cout << "\n" << endl;
}

void testSOL(Mode mode, SelfOrderedListADT<string>* SOL) {

	// I/O handling to read in values from test.txt
	string word;
	ifstream file;
	file.open("test.txt");

	if (mode == MOVETOFRONT) {
		cout << "Move to Front Heuristic:\t";
	}
	else if (mode == COUNT) {
		cout << "Count Heuristic:\t";
	}
	else if (mode == TRANSPOSE) {
		cout << "Transpose Heuristic:\t";
	}

	while (file) { // Reading in values from file
		file >> word;
		SOL->find(word); //Using find() function to pass in values
	}
	file.close(); //Safely exiting after values have been parsed

	cout << "Size of list: " << SOL->size() << endl;
	cout << "Number of compares: " << SOL->getCompares() << endl;
	cout << "List members with associated frequencies:\n";
	SOL->printlist(10);

	cout << "\n" << endl;
}