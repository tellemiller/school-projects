//<BattleShip.cpp> -- Simulates a game of battleship using user input.
//CSIS 111-B01
//Include statements
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
//Global declarations: Constants and type definitions only -- no variables
char game_map[25][25];
int hits, misses = 0;

//Function prototypes
void Fire(int x, int y);
void FleetSunk();
void printBoard();

int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Telle Miller -- Lab 8" << endl << endl;

	//Variable declarations
	int xCord, yCord;                     //Coordinates entered by user
	bool invalidInput = false;            //Flag variable to verify validity of user input

	//Program logic
	cout << "\n\nINSTRUCTIONS---\n\t1.) This is a game of battleship. The board is comprised of water (~) and ships (#). A hit is represented as an H and a miss is represented as an M.\n" <<
		"\t2.) You will be prompted for X and Y coordinates to attack. The range of these values are [0,24]. Below is a reference table to demonstrate how the coordinates work.\n" <<
		"\t3.) After an attack, you will be informed whether it was a HIT, MISS, or a HIT AGAIN. After all ships have been sunk, the game is over.\n" <<                               //Block of text to instruct user on proper use of program
		"\t4.) You can input \"-1\" for the X coordinate at any time to exit the program.\n\n";

	cout << "    0     1     2     3     4      5   ...\n" <<
		    "0 (0,0) (0,1) (0,2) (0,3) (0,4)  (0,5) ...\n" <<
			"1 (1,0) (1,1) (1,2) (1,3) (1,4)  (1,5) ...\n" <<                                               //Reference table of coordinate layout for user
		    "2 (2,0) (2,1) (2,2) (2,3) (2,4)  (2,5) ...\n" <<
		    "3 (3,0) (3,1) (3,2) (3,3) (3,4)  (3,5) ...\n" <<
		    "4 (4,0) (4,1) (4,2) (4,3) (4,4)  (4,5) ...\n" << 
		    "5 (5,0) (5,1) (5,2) (5,3) (5,4)  (5,5) ...\n\n";

	ifstream file("GameMap.txt");                             //Opens text file so that data can be read in
                        
	for (int i = 0; i < 25; i++) { 
		for (int j = 0; j < 25; j++) {                        //Reads in values from text file and assigns it to the 2D array     
			file >> game_map[i][j];
		}
	}

	do {
		cout << "\nEnter coordinates (X Y): ";                         //Prompts user for X,Y coordinates
		cin >> xCord >> yCord; 
		if (cin.fail()) {                                              //Catches bad input based on variable type    
			cin.clear(); cin.ignore();                                 //Clears stream of bad input
			cout << "\nYou have entered the coordinates incorrectly. Please restart the program and enter two integers [0 through 24] seperated by one whitespace.\n\n";            //Informs user of error
			system("pause");
			exit(0);
		}
		if (xCord == -1) {																		//If user entered -1 as x-coordinate, displays game stats/board and exits
			cout << "\nThanks for playing!\n\tHITS: " << hits << "\n\tMISSES: " << misses << "\n\n";               
			printBoard();
			system("pause");
			exit(0);
		}
		if ((xCord < 0 || xCord > 24) && xCord != -1) {
			cout << "\nThe entered x-coordinate is out of range. The range of acceptable values is [0,24], inclusive.\n";      //Verifies user x-coordinate input is within range
			invalidInput = true;
		}
		if (yCord < 0 || yCord > 24) {
			cout << "\nThe entered y-coordinate is out of range. The range of acceptable values is [0,24], inclusive.\n";	   //Verifies user y-coordinate input is within range
			invalidInput = true;
		}
		if (!invalidInput) {
			Fire(xCord, yCord);                                       //If user input was valid, calls Fire() function
		}
		else { invalidInput = false; }                              //If user input was invalid, resets flag variables and reprompts user

	} while (true);

	//Closing program statements
	system("pause");
	return 0;
}
//Function definitions
void Fire(int x, int y) {                                                //Function that checks if user entered a HIT, MISS, or HIT AGAIN
	if (game_map[x][y] == 'H') {
		cout << "\tHIT AGAIN";
	}
	else if (game_map[x][y] == '#') {
		game_map[x][y] = 'H';
		cout << "\tHIT";
		hits++;
	}
	else {
		game_map[x][y] = 'M';
		cout << "\tMISS";
		misses++;
	}
	FleetSunk();                                                  //Call to FleetSunk() to verify that game is not over
}
	
void FleetSunk() {
	bool shipAlive = false;

	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) { 
			if (game_map[i][j] == '#') {                         //Checks every position in 2D array to verify there is no remaining '#' to indicate an alive ship
				shipAlive = true;
			}
		}
	}
	if (!shipAlive) {
		cout << "\nThe fleet was destroyed!\n\tHITS: " << hits << "\n\tMISSES: " << misses << "\n\n";           //If there are no '#' remaining, end the game, display score and gameboard to user.
		printBoard();

		system("pause");
		exit(0);
	}
}

void printBoard() {                                                          //Function to print current board state
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			cout << game_map[i][j];
		}
		cout << endl;
	}
}