//<ControlStructuresLoops.cpp> -- Receives input as a text file, converts data from play time (seconds) to play time (minutes and seconds) and sorts accordingly.
//CSIS 111-B01
//Include statements
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
//Global declarations: Constants and type definitions only -- no variables
//Function prototypes

int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Telle Miller -- Lab 4" << endl << endl;

	//Variable declarations
	int value, minuteValue, timeLeft;   //variables for the value being read in and a placeholder value for calculating minutes given total seconds
	int totalTime = 0;        //counter variable for total run time
	int songCounter = 1;      //counter variable for song number
	
	//Program logic

	ifstream file("songs.txt");    //Opens text file so that data can be read in
	if (file.is_open()) {          //Verifies the text file was able to be opened

		cout << "Song               Song Time              Total Time\nNumber         Minutes  Seconds         Minutes  Seconds\n-------       --------  --------       --------  -------\n";   //Printing required headings/columns

		while (file >> value) {          //main while() loop, iterates over textfile and reads in every integer value
			minuteValue = value / 60;              //calculates number of minutes given total seconds
			totalTime += value;                    //records total time played

			cout << songCounter << "                " << minuteValue << "\t   " << value % 60 << "              " << totalTime / 60 << "   " << totalTime % 60 << "\n";             //prints song number, song time, and total time in proper formatting
			
			songCounter += 1;    //increases song count before end of loop
			
		}

		timeLeft = (80 * 60) - totalTime;        //Converts time left on CD into seconds for easier formatting.

		cout << "\nThere are " << timeLeft / 60 << " minutes and " << timeLeft % 60 << " seconds of space left on the 80-minute CD.";         //prints out time remaining on CD

		file.close();      //Closes stream that is reading in file data
	}

	//Error message for if file is not located or unreadable
	else cout << "File error.";
	return 0;

	//Closing program statements
	system("pause");
	return 0;
}