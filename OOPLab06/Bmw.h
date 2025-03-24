#pragma once
#include "Vehicle.h"
#include "Drawable.h"
#include <iostream>

/// @brief This is a Bmw class.
///
/// This class inherits Vehicle & Drawable. 
/// It Also has the ability to both drive and draw.
/// @author Group 13
/// @date 19/03/2025
class Bmw :public Vehicle, public Drawable
{
public:
/// @brief This drive function is used to specifically drive the Bmw.
///
/// when the function is called it will print out an image of the Bmw driving.
/// @param Void
/// @return Void
/// @author Group 13
/// @date 19/03/2025
	void drive();

/// @brief This function is used to draw the Bmw.
///
/// when the function is called it will print out an image of the Bmw stationary.
/// @param Void
/// return Void
/// @author Group 13
/// @date 19/03/2025
	void draw();
};

