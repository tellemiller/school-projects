//<Circle.h> -- Header file for Circle class
#pragma once

class Circle {
	public:
		
		Circle(); 
		void setRadius(double);
		double getRadius() const;
		void showData() const;

	private:
		double radius;
		double calcCircumference() const;
		double calcArea() const;
};


