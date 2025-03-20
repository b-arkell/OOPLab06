#include "Shape.h"

// function to iterate through an array of shapes to calculate the total area
double getTotalArea(Shape* shape[ARRAY_SIZE]) {
	double totalArea = 0;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		totalArea += shape[i]->calcArea();
	}
	return	totalArea;
}