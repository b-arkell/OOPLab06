#pragma once
#include <iostream>

/// @brief This is a Drawable class.
///
/// The class is an abstract class that contains the virtual function for draw.
/// @warning If you inherit from this class, make sure to create a draw function for the class that is inheriting.    
/// @author Group 13
/// @date 19/03/2025
class Drawable
{
public:
/// @brief This function is a virtual function for draw.
///
/// the function will act as a template for any drawable classes to implement their drawability.
/// @param Void
/// @return void
/// @author Group 13
/// @date 19/03/2025
	virtual void draw() = 0;
};

/// @brief This function passes any drawable object into the parameters and prints according to the object type.
///
/// the function will accept any drawable object and then print that specific object to the screen.
/// @param object (Drawable&)
/// @return void
/// @author Group 13
/// @date 19/03/2025
void draw(Drawable& object);

