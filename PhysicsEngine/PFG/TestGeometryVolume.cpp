#include <iostream>
#include <iomanip>
#include <conio.h>
#include "GeometryVolume.h"
#include "VelocityAcceleration.h"
using namespace PE;
int main(void)
{
	double radiusOfSphere, volumeOfSphere;
	double pointOne, pointZero;
	double velocity;
	double time;
	radiusOfSphere = 10;
	volumeOfSphere = 0;
	pointOne = 50;
	pointZero = 0;
	time = 5;
	PE::GeometryVolume::VolumeOfSphere(radiusOfSphere, volumeOfSphere);
	std::cout << "A Sphere with a radius = " << radiusOfSphere << " has a volume of "
		<< volumeOfSphere << std::endl;
	PE::VelocityAcceleration::Velocity(pointOne, pointZero, time, velocity);
	std::cout << "An object at a point " << pointZero << " meters moving to a point "
		<< pointOne << " meters away over " << time << " seconds" << std::endl;
	std::cout << "will travel with an average velocity of " << velocity << " meters per second " << std::endl;
	
	double rad1 = 14, rad2 = 10, rad3 = 5, volumeOfEllipsoid;
	PE::GeometryVolume::VolumeOfEllipsoid(rad1, rad2, rad3, volumeOfEllipsoid);
	std::cout << "Volume of ellipsoid is " << volumeOfEllipsoid << std::endl;

	_getch();

	return 0;
}