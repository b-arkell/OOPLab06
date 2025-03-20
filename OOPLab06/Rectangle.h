#pragma once
///@file 
///@brief This is a Rectangle header file
/// 
/// this file contains the Rectangle class
#include "shape.h"
#include <iostream>

/// @brief This is a Rectangle class
///
/// The class is a Shape of type Rectangle 
/// and it has the ability to draw and calculate the area
/// @author Group 13
/// @date 19/03/2025
class Rectangle :public Shape, public Drawable
{

	int length;
	int width;
public:
/// @brief This function is used construct the Rectangle
///
/// the function will construct a Rectangle with default values
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

