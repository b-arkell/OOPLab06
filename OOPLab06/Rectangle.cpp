#include "Rectangle.h"

// function definitions 

Rectangle::Rectangle() {
	this->length = 0;
	this->width = 0;
}

// contructor to set L & W
Rectangle::Rectangle(int length, int width) {
	this->length = length;
	this->width = width;
}

//  function to calculate area of rectangle
double Rectangle::calcArea() {
	return this->length * this->width;
}

// function to draw the rectangle
void Rectangle::draw() {
	std::cout << "*********************************" << std::endl;
	std::cout << "*                               *" << std::endl;
	std::cout << "*                               *" << std::endl;
	std::cout << "*                               *" << std::endl;
	std::cout << "*                               *" << std::endl;
	std::cout << "*                               *" << std::endl;
	std::cout << "*********************************" << std::endl;
}
