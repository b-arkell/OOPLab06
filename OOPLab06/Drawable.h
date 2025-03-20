#pragma once
///@file 
///@brief This is a Drawable header file
/// 
/// this file contains the Drawable class & draw function
#include <iostream>

/// @brief This is a Drawable class
///
/// The class is a abstract class that contains the virtual function for draw
/// @author Group 13
/// @date 19/03/2025
class Drawable
{
public:
/// @brief This function is a virtual function
///
/// the function will act as a template for any drawable classes
/// @param Void
/// @return void
/// @author Group 13
/// @date 19/03/2025
	virtual void draw() = 0;
};

/// @brief This function is used to help draw any drawable object
///
/// the function will accept a drawable object and then print that specific object to the screen
/// @param object (Drawable)
/// @return void
/// @author Group 13
/// @date 19/03/2025
void draw(Drawable& object);

