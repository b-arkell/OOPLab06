#pragma once

#define ARRAY_SIZE 4

/// @brief This is a Shape class.
///
/// This class is an abstract class containing a virtual function for calculating area of any Shape.
/// @note Not all shapes need to be Drawable.
/// @author Group 13
/// @date 19/03/2025
class Shape
{
public:
/// @brief This function is a virtual function for calculating area of a Shape.
///
/// the function will allow inheriting classes to use the function to set up their own area calculation.
/// @param Void
/// @return void
/// @author Group 13
/// @date 19/03/2025
	virtual double calcArea() = 0;
};

/// @brief This function is used to return the total area of all inputted shapes.
///
/// the function will accept an array of any shapes, calculate all of their areas, then return the total.
/// @param shape array (Shape*)
/// @return totalArea (double)
/// @author Group 13
/// @date 19/03/2025
double getTotalArea(Shape* shape[ARRAY_SIZE]);

