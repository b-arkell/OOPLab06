#include "Drawable.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Mazda.h"
#include "Bmw.h"
#include <iostream>

int main(void) {
	Circle circle1(3);
	Circle circle2(7);
	Rectangle rectangle1(2, 4);
	Rectangle rectangle2(7, 11);
	Mazda mazda;
	Bmw BMW;
	Shape* shapes[ARRAY_SIZE] = { &circle1, &circle2, &rectangle1, &rectangle2 }; // add shapes to array

	// test getTotalArea
	std::cout << "test get total area (area of circle and rectangle): " << std::endl;
	double totalArea = getTotalArea(shapes);
	std::cout << "Total area: " << totalArea << std::endl;
	std::cout << std::endl;

	// test draw function
	std::cout << "test passing all types to draw: " << std::endl;
	draw(circle1);
	draw(rectangle1);
	draw(mazda);
	draw(BMW);
	std::cout << std::endl;

	// test both cars driving
	std::cout << "test all cars driving: " << std::endl;
	drive(mazda);
	drive(BMW);

	return 0;
}