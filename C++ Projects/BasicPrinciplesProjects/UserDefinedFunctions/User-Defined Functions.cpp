//<User-Defined Functions.cpp> -- Reads input from text file, displays information in organized fashion. Displays name followed by calculated percentage with accompanying grade ranking.
//CSIS 111-B01
//Include statements
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;
//Global declarations: Constants and type definitions only -- no variables
//Function prototypes

string returnName(string name) {            //Returns name that was passed from Input.txt
	return name;
}

string returnScore(double score, double totalScore) {        //Function to calculate score totals and accompanying grade ranking
	
	double percentage;
	string gradeRanking;

	percentage = (score / totalScore) * 100;         //Calculates the score the student should receieve
	percentage = ceil(percentage);                   //Rounds score up to nearest whole value

	cout << " " << percentage << "% ";               //Displays calculated percentage score

	cout << fixed << setprecision(5);           //Configures output settings to correctly show 5 decimal places on floating-points

	//If blocks below determine ranking of the percentage grade
	if (percentage >= 90) { gradeRanking = "Excellent"; }
	else if (percentage < 90 && percentage >= 80) { gradeRanking = "Well Done"; }
	else if (percentage < 80 && percentage >= 70) { gradeRanking = "Good"; }
	else if (percentage < 70 && percentage >= 60) { gradeRanking = "Need Improvement"; }
	else { gradeRanking = "Fail"; }

	cout << (score / totalScore) << " ";      //Displays floating point score to the 5th decimal place
	cout << fixed << setprecision(0);         //Resets precision settings to correctly display score in next loop iteration

	return gradeRanking;                      //Passes grade ranking to main loop based off of percentage
}


int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Telle Miller -- Lab 4" << endl << endl;
	//Variable declarations
	string name;
	double score, total;

	//Program logic

	ifstream file("Input.txt");    //Opens text file so that data can be read in
	if (file.is_open())            //Verifies the text file was able to be opened
	{
		while (file >> name >> score >> total)      //Reads in values from text file and assigns to variables
		{
			cout << returnName(name);                          //Passes name variable to returnName() function and prints the returned value
			cout << returnScore(score, total) << "\n";         //Passes score values to returnScore() function and prints the returned value
		}
		file.close();                               //Closes stream that is reading in file data
	}

	//Error message for if file is not located or unreadable
	else cout << "File error.";
	return 0;

	//Closing program statements
	system("pause");
	return 0;
}