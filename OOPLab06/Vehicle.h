#pragma once
///@file 
///@brief This is a Vehicle header file
/// 
/// this file contains the Vehicle class and the drive function
#include "Drawable.h"

/// @brief This is a Vehicle class
///
/// The class is an abstract class containing a virtual function for driving any drivable object
/// @author Group 13
/// @date 19/03/2025
class Vehicle
{
public:
/// @brief This function is a virtual function
///
/// the function will allow inheriting classes to use the function
/// @param Void
/// @return void
/// @author Group 13
/// @date 19/03/2025
	virtual void drive() = 0;
};

/// @brief This function is used to draw any vehicle
///
/// the function will accept any Vehicle object and then draw that specific vehicle
/// @param vehicle (Vehicle&)
/// @return void
/// @author Group 13
/// @date 19/03/2025
void drive(Vehicle& vehicle);