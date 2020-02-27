#include "KinematicEquations.h"
#include "BasicNewtonianPhysics.h"
#include "vec3.hpp"// glm::vec3
#include <iostream>
#include <iomanip>
#include <conio.h>
int main(void)
{
	double initialHeight = 1000.0;
	double mass = 100.0;
	double acceleration = 9.80;
	double force = 0.0;
	double velocity = 0.0;
	double airDensity = 0.905;
	double dragCoefficient = 1.0;
	double crossSectionalArea = 0.725;
	system("CLS");
	PE::BasicNewtonianPhysics::ComputeForce(mass, acceleration, force);
	std::cout << "A mass of " << mass << "kg accelerating at " << acceleration <<
		" meters/per sec^2 has a force of " << force << " Newtons" << std::endl;
	std::cout << std::endl;
	std::cout << "The velocity of an object without air resistance over 14 seconds is "
		<< std::endl;
	std::cout << "Time" << "\t\t" << "Velocity" << std::endl;
	for (double i = 0.0; i < 15.0; i++)
	{
		PE::BasicNewtonianPhysics::FreeFallVelocityDueToGravity(i, velocity);
		std::cout << i << "\t\t" << velocity << std::endl;
	}
	std::cout << "The velocity of an object with air resistance over 14 seconds is "
		<< std::endl;
	std::cout << "Time" << "\t\t" << "Velocity with Drag" << std::endl;
	for (double j = 0.0; j < 15.0; j++)
	{
		PE::BasicNewtonianPhysics::FreeFallVelocityWithDrag(j, mass, airDensity,
			dragCoefficient, crossSectionalArea, velocity);
		std::cout << j << "\t\t" << velocity << std::endl;
	}
	_getch();
	return 0;
}