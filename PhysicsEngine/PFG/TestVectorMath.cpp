#include "VectorMath.h"
#include "BasicNewtonianPhysics.h"
#include "vec3.hpp"// glm::vec3
#include <iostream>
#include <iomanip>
#include <conio.h>
int main(void)
{
	glm::vec3 vect1(0.0f, 1.0f, -2.0f), vect2(-1.0f, 0.0f, 2.0f),
		point1(0.0f, 2.0f, 2.0f), point2(0.0f, 1.0f, 4.0f), point3(1.0f, 1.0f, 2.0f);
	glm::vec3 vector, normal(0.0f, 0.0f, 0.0f);
	float distance = 0.0f;
	std::cout << "point1 = (" << point1.x << "," << point1.y << "," << point1.z << ")"
		<< std::endl;
	std::cout << "point2 = (" << point2.x << "," << point2.y << "," << point2.z << ")"
		<< std::endl;
	PE::VectorMath::Calculate3DVector(point1, point2, vector);
	std::cout << "Vector created from points 1 and 2 is (" << vector.x << "," <<
		vector.y << "," << vector.z << ")" << std::endl;
	PE::VectorMath::ComputeDistanceBetween3DPoints(point1, point2, distance);
	std::cout << "Distance between points 1 and 2 is " << distance << std::endl;
	std::cout << "Given three points defined by" << std::endl;
	std::cout << "point1 = (" << point1.x << "," << point1.y << "," << point1.z << ")"
		<< std::endl;
	std::cout << "point2 = (" << point2.x << "," << point2.y << "," << point2.z << ")"
		<< std::endl;
	std::cout << "point3 = (" << point3.x << "," << point3.y << "," << point3.z << ")"
		<< std::endl;
	PE::VectorMath::ComputeNormalToTriangleDefinedBy3DPoints(point1, point2, point3,
		normal);
	std::cout << "The the Normal to a triangle formed from these three points is " <<
		std::endl;
	std::cout << "(" << normal.x << "," << normal.y << "," << normal.z << ")" <<
		std::endl;
	PE::VectorMath::ComputeNormalTo3DVectors(vect1, vect2, normal);
	std::cout << "Given two vectors (" << vect1.x << "," << vect1.y << "," << vect1.z
		<< ") and (" << vect2.x << "," << vect2.y << "," << vect2.z << ")" << std::endl;
	std::cout << "The Normal to these two vectors is " << std::endl;
	std::cout << "(" << normal.x << "," << normal.y << "," << normal.z << ")" <<
		std::endl;
	// Using very large numbers you may need to experiment with display format,
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	double massone = 6.2 * pow(10, 33);
	double masstwo = 9500;
	double radiusone = 2.5 * pow(10, 6);
	double radiustwo = 65 * pow(10, 6);
	double velocity = 10.0;
	double height = 0.45;
	double acc = 0.0;
	double pe = 0.0;
	std::cout << std::endl;
	std::cout << "Test Basic Newtonian Pysics." << std::endl;
	PE::BasicNewtonianPhysics::ComputeAccelerationDueToGravity(massone, masstwo,
		radiusone, radiustwo, acc);
	std::cout << massone << std::endl;
	std::cout << masstwo << std::endl;
	std::cout << radiusone << std::endl;
	std::cout << radiustwo << std::endl;
	std::cout << acc << std::endl;
	radiusone = 25.0;
	PE::BasicNewtonianPhysics::ComputeCentripetalAcceleration(velocity, radiusone,
		acc);
	std::cout << acc << std::endl;
	massone = 3.0;
	PE::BasicNewtonianPhysics::ComputeGravitationalPE(height, massone, pe);
	std::cout << pe << std::endl;


	glm::vec3 a(3, 2, 1), b(-1, 3, 0), c(2, 2, 5);
	float volume;

	PE::VectorMath::ComputeVolumeOfParallelepiped(a, b, c, volume);
	std::cout << "Volume of parrellelepiped is " << volume << std::endl;

	double vel = 10, mass = 5, ke;
	PE::BasicNewtonianPhysics::ComputeKineticEnergy(vel, mass, ke);
	std::cout << "Kinetic energy is " << ke << std::endl;

	_getch();
	return 0;
}