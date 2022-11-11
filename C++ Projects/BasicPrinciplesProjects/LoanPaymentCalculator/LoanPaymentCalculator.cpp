//<LoanPaymentCalculator.cpp> -- Receives and verifies user input for a principle amount, a loan term, and a credit score. Uses this information to calculate a monthly mortgage payment.
//CSIS 112-B01
//Include statements
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Function prototypes
double CalcPayment(double, int, double);

int main()
{
	cout << "Telle Miller -- Assignment 1\n" << endl << endl;
	
	//Variable declarations
	enum credit_ratings {EXCELLENT,GOOD,FAIR,BAD} customer_rating;
	double principle_amount;
	int credit_score;
	int loan_term;
	double interest_rate;
	
	//Program logic
	cout << "PRINCIPLE AMOUNT: ";
	cin >> principle_amount;										//Prompting user for a principle amount
	while (cin.fail() || principle_amount < 0) {                         
		if (cin.fail()) {
			cout << "You entered a value other than a number. You must enter a number. Please try again. " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');                                                              //Verifying user input is valid
		}
		else {
			cout << "The value you entered was negative. You must enter a positive number. Please try again. " << endl;
		}
		cout << "PRINCIPLE AMOUNT: ";
		cin >> principle_amount;
	}

	cout << "CREDIT SCORE: ";
	cin >> credit_score;											//Prompting user for a credit score					
	while (cin.fail() || credit_score < 0 || credit_score < 300 || credit_score > 850) {
		if (cin.fail()) {
			cout << "You entered a value other than a number. You must enter a number. Please try again." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');                                                              //Verifying user input is valid
		}
		else if(credit_score < 0) {
			cout << "The value you entered was negative. You must enter a positive number. Please try again. " << endl;
		}
		else if (credit_score > 0 && credit_score < 300) {
			cout << "ERROR: A loan cannot be offered to an applicant with a credit score lower than 300. The program will now exit." << endl;
			system("pause");
			return 0;
		}
		else if (credit_score > 850) {
			cout << "The entered credit score exceeds the possible 850. Please enter a valid credit score." << endl;
		}
		cout << "CREDIT SCORE: ";
		cin >> credit_score;
	}

	cout << "LOAN TERM: ";
	cin >> loan_term;											//Prompting user for a loan term		
	while (cin.fail() || (loan_term != 10 && loan_term != 15 && loan_term != 30)) {
		if (cin.fail()) {
			cout << "You entered a value other than a number. You must enter a number. Please try again." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');                                                              //Verifying user input is valid
		}
		else {
			cout << "You entered an invalid loan term. The available terms include 10-, 15-, and 30-year fixed loans. Please try again." << endl;
		}
		cout << "LOAN TERM: ";
		cin >> loan_term;
	}

	//Converting inputted credit score to an enumerated value using given table
	if (credit_score <= 850 && credit_score >= 720) { customer_rating = EXCELLENT; }
	if (credit_score <= 719 && credit_score >= 690) { customer_rating = GOOD; }
	if (credit_score <= 689 && credit_score >= 630) { customer_rating = FAIR; }
	if (credit_score <= 629 && credit_score >= 300) { customer_rating = BAD; }
	
	srand(time(0));                      //Preparing rand() function to generate an interest rate

	switch (customer_rating) {
		case EXCELLENT:
			interest_rate = 2.75 + (double)rand() * (4.00 - 2.75) / (double)RAND_MAX;
			break;
		case GOOD:
			interest_rate = 4.01 + (double)rand() * (6.50 - 4.01) / (double)RAND_MAX;
			break;																				//Switch to calculate interest rate based on enum value
		case FAIR:																				//Formula for calculating interest rate is: (min_val + rand() * (max_val - min_val) / RAND_MAX)
			interest_rate = 6.51 + (double)rand() * (8.75 - 6.51) / (double)RAND_MAX;
			break;
		case BAD:
			interest_rate = 8.76 + (double)rand() * (10.50 - 8.76) / (double)RAND_MAX;
			break;
	}

	cout << fixed << showpoint;													//Formatting output to show correct amount of decimal places for dollar values
	cout << "Your monthly payment would be $" << setprecision(2) << CalcPayment(principle_amount, loan_term, interest_rate) << endl;          //Calling CalcPayment() and outputting monthly payment for user

	//Closing program statements
	system("pause");
	return 0;
}

//Function definitions
double CalcPayment(double principle, int loan_term, double interest_rate) {              //Function to calculate a monthly mortgage payment
	loan_term *= 12;
	interest_rate /= 1200;                //Transforming loan_term and interest_rate to an annual setting with monthly pay periods

	return principle * ((interest_rate * pow(1 + interest_rate, loan_term)) / (pow(1 + interest_rate, loan_term) - 1));  //Calculates and returns monthly payment using given amoritization formula
}
