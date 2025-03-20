#pragma once
///@file 
///@brief This is a Mazda header file
/// 
/// this file contains the Mazda class
#include "vehicle.h"

/// @brief This is a mazda class
///
/// The class is is a type of vehicle and also inherits drawable
/// @author Group 13
/// @date 19/03/2025
class Mazda :public Vehicle, public Drawable
{
public:
/// @brief This function is used to drive the Mazda
///
/// the function will activate and print out an image of the Mazda driving
/// @param Void
/// @return Void
/// @author Group 13
/// @date 19/03/2025
	void drive();
	void draw();
};

