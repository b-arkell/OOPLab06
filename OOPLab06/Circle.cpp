#include "Circle.h"

Circle::Circle() {
	this->radius = 0;
}

// contructor to set radius of circle
Circle::Circle(int radius) {
	this->radius = radius;
}

// function to calculate area of a circle
double Circle::calcArea() {
	return M_PI * (this->radius * this->radius); // pi (R^2) for area of circle
}

// function to draw a circle
void Circle::draw() {
	std::cout << "      * * * * " << std::endl;
	std::cout << "    *          *" << std::endl;
	std::cout << "  *              *" << std::endl;
	std::cout << " *                *" << std::endl;
	std::cout << "*                  *" << std::endl;
	std::cout << " *                *" << std::endl;
	std::cout << "  *              *" << std::endl;
	std::cout << "    *          *" << std::endl;
	std::cout << "       * * * *    " << std::endl;
}