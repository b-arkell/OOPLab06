#pragma once
#include "vehicle.h"
#include "Drawable.h"

/// @brief This is the Mazda class.
/// 
/// This class inherits Vehicle & Drawable. 
/// It Also has the ability to both drive and draw.
/// @author Group 13
/// @date 19/03/2025
class Mazda :public Vehicle, public Drawable
{
public:
/// @brief This function is used to drive the Mazda.
///
/// when this function is called it will print out an image of the Mazda driving.
/// @param Void
/// @return Void
/// @author Group 13
/// @date 19/03/2025
	void drive();

/// @brief This function is used to draw the Mazda.
///
/// when this function is called it will print out an image of the Mazda stationary.
/// @param Void
/// @return Void
/// @author Group 13
/// @date 19/03/2025
	void draw();
};

