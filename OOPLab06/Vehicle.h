#pragma once

/// @brief This is a Vehicle class.
///
/// The class is an abstract class containing a virtual function for driving any Vehicle.
/// @note Not all Vehicles have to be Drawable.
/// @author Group 13
/// @date 19/03/2025
class Vehicle
{
public:
/// @brief This function is a virtual function for driving a Vehicle.
///
/// The function will allow inheriting classes to use the function and create their own drive function.
/// @param Void
/// @return void
/// @author Group 13
/// @date 19/03/2025
	virtual void drive() = 0;
};

/// @brief This function is used to draw any vehicle.
///
/// The function will accept any Vehicle object reference and then draw that specific vehicle.
/// @param vehicle (Vehicle&)
/// @return void
/// @author Group 13
/// @date 19/03/2025
void drive(Vehicle& vehicle);