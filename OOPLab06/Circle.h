#pragma once
#include "Shape.h"
#include "Drawable.h"
#include <iostream>

#define M_PI 3.14159265358979323846 // define pi for circle area calculation

/// @brief This is a Circle class
///
/// This class inherits Shape and Drawable, and it has the ability to both draw and calculate the area.
/// it contains an int value as the radius.
/// @author Group 13
/// @date 19/03/2025
class Circle :public Shape, public Drawable
{
	int radius;
public:
/// @brief This function is used construct the circle
///
/// the function will construct a circle with a default radius of 0.
/// @param Void
/// @return Circle
/// @author Group 13
/// @date 19/03/2025
	Circle();
	
/// @brief This function is used construct the circle with parameters.
///
/// the function will construct a circle setting the radius value using the parameters.
/// @param radius (int)
/// @return Circle
/// @author Group 13
/// @date 19/03/2025
	Circle(int radius);

/// @brief This function is used to calculate the area of the circle.
///
/// the function will calculate the area based on the radius it currrently holds.
/// @param Void
/// @return area (double)
/// @author Group 13
/// @date 19/03/2025
	double calcArea();

/// @brief This function is used to draw the circle.
///
/// the function will print a circle to the screen using asteriks.
/// @param Void
/// @return Void
/// @author Group 13
/// @date 19/03/2025
void draw();
};

