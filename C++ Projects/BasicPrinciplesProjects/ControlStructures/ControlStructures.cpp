//<ControlStructures.cpp> -- Accepts two inputs from a file and outputs a final score and its appropriate ranking. 
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

int main()
{
	//In cout statement below SUBSTITUTE your name and lab number
	cout << "Telle Miller -- Lab 3" << endl << endl;
	//Variable declarations
	string gradeRanking;
	double score, total, percentage;

	//Program logic

	ifstream file("Input.txt");    //Opens text file so that data can be read in
	if (file.is_open())            //Verifies the text file was able to be opened
	{
		while (file >> score >> total)      //Reads in values from text file and assigns to variables
		{
			percentage = (score / total) * 100;         //Calculates the score the student should receieve

			cout << fixed << setprecision(5);           //Configures output settings to correctly show 5 decimal places on floating-points
			cout << score << " / " << total << " = " << percentage;        //Shows math behind calculating percentage

			percentage = ceil(percentage);                          //Rounds up final score to nearest whole number
			cout << "\nRounded result: " << percentage;             //Displays rounded result

			//If blocks below determine ranking of the percentage grade
			if (percentage >= 90) { gradeRanking = "Excellent";  }
			else if (percentage < 90 && percentage >= 80) { gradeRanking = "Well Done"; }
			else if (percentage < 80 && percentage >= 70) { gradeRanking = "Good"; }
			else if (percentage < 70 && percentage >= 60) { gradeRanking = "Need Improvement"; }
			else { gradeRanking = "Fail"; }

			cout << "% --- " << gradeRanking << "\n";        //Outputs grade ranking, "Excellent", "Well Done", etc.
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
//Function definitions

