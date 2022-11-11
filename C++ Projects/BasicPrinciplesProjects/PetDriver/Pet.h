#pragma once
#include <string>
#include <iostream>
class Pet
{
	public:
		Pet();  //Constructor
		~Pet(); //Destructor

		//Setters for data members
		void setName(std::string);      
		void setType(std::string);  
		void setWeight(int);

		//Getters for data members
		std::string getName() const;   
		std::string getType() const;
		int getWeight() const;

	private:
		//Data members
		std::string name, type;
		int weight;
};

