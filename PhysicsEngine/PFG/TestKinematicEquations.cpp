#include "KinematicEquations.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
int main(void)
{
	double speedingCarDistance = 0.0;
	double policeCarDistance = 0.0;
	double time = 0.0;
	double deltaT = 0.5;
	bool distanceAtLeastEqual = false;
	system("CLS");
	std::cout << "Time (s)" << "\t" << "Speeding Car Distance (m)" << "\t" << "Police Car Distance(m)" << std::endl;
		while (!distanceAtLeastEqual)
		{
			// Speeding car vi = 25m/s and acceleration = 0m/s2
			PE::KinematicEquations::ComputeDisplacmentUsingAcceleration(25.0, 0.0,
				time, speedingCarDistance);
			//Police car vi = 0.0m\s and acceleration = 5m/s2.
			PE::KinematicEquations::ComputeDisplacmentUsingAcceleration(0.0, 5.0, time,
				policeCarDistance);
			std::cout << time << "\t\t\t" << speedingCarDistance << "\t\t\t\t" <<
				policeCarDistance << std::endl;
			if (speedingCarDistance <= policeCarDistance && time != 0.0)
				distanceAtLeastEqual = true;
			time += deltaT;
		}
	_getch();
	return 0;
}