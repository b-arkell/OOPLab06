#pragma once
#include "shape.h"
#include "Drawable.h"
#include <iostream>

/// @brief This is a Circle class
///
/// This class inherits Shape and Drawable, and it has the ability to both draw and calculate the area.
/// It contains two int values, for length and width.
/// @author Group 13
/// @date 19/03/2025
class Rectangle :public Shape, public Drawable
{

	int length;
	int width;
public:
/// @brief This function will construct a Rectangle.
///  
/// This function is used construct a Rectangle with a default length and width of 0.
/// @param Void
/// @return rectangle
/// @author Group 13
/// @date 19/03/2025
	Rectangle();

/// @brief This function is used construct the Rectangle
///
/// the function will construct a Rectangle with values from the parameters
/// @param length (int), width (int)
/// @return Rectangle
/// @author Group 13
/// @date 19/03/2025
	Rectangle(int length, int width);

/// @brief This function is used calculate the area of Rectangle
///
/// the function will calculate the area based on the member values it currently has
/// @param Void
/// @return area (double)
/// @author Group 13
/// @date 19/03/2025
	double calcArea();
	void draw();
};

