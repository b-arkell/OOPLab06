#pragma once
///@file 
///@brief This is a Circle header file
/// 
/// this file contains the Circle class
#include "Shape.h"
#include <iostream>

#define M_PI 3.14159265358979323846 // define pi for circle area calculation

/// @brief This is a Cirlce class
///
/// The class is is a Shape of type Circle, 
/// and it had the ability to draw and calculate the area
/// @author Group 13
/// @date 19/03/2025
class Circle :public Shape, public Drawable
{
	int radius;
public:
/// @brief This function is used construct the circle
///
/// the function will construct a circle with default values
/// @param Void
/// @return Circle
/// @author Group 13
/// @date 19/03/2025
	Circle();
	
/// @brief This function is used construct the circle
///
/// the function will construct a circle with values from the parameters
/// @param radius (int)
/// @return Circle
/// @author Group 13
/// @date 19/03/2025
	Circle(int radius);

/// @brief This function is used to calculate the area of circle
///
/// the function will calculate the area based on the member values it currently has
/// @param Void
/// @return area (double)
/// @author Group 13
/// @date 19/03/2025
	double calcArea();

/// @brief This function is used to draw a circle
///
/// the function will print a circle to the screen with asteriks 
/// @param Void
/// @return Void
/// @author Group 13
/// @date 19/03/2025
void draw();
};

