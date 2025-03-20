#pragma once
///@file 
///@brief This is a Bmw header file
/// 
/// this file contains the Bmw class
#include "Vehicle.h"
#include <iostream>

/// @brief This is a Bmw class
///
/// The class is of the car type Bmw, 
/// and it had the ability to drive and draw
/// @author Group 13
/// @date 19/03/2025
class Bmw :public Vehicle, public Drawable
{
public:
/// @brief This function is used to drive the Bmw
///
/// the function will activate and print out an image of the Bmw driving
/// @param Void
/// @return Void
/// @author Group 13
/// @date 19/03/2025
	void drive();

/// @brief This function is used to draw the Bmw
///
/// the function will activate and print out an image of the Bmw
/// @param Void
/// return Void
/// @author Group 13
/// @date 19/03/2025
	void draw();
};

