#include "Geometry.h"
#include "vec3.hpp"// glm::vec3
#include <iostream>
#include <iomanip>
#include <conio.h>
int main(void)
{
	float pointA, pointB, deltaT, pointC;;
	pointA = 3.0f;
	pointB = 8.0f;
	pointC = pointA;
	deltaT = 0.0f;
	glm::vec3 vecA(3.0, 3.0, 3.0);
	glm::vec3 vecB(8.0, 8.0, 8.0);
	glm::vec3 vecC(3.0, 3.0, 3.0);
	std::cout << "Step" << "\t" << "Value" << std::endl;
	for (int i = 0; i <= 10; i++)
	{
		PE::Geometry::Lerp(pointA, pointB, deltaT, pointC);
		std::cout << deltaT << "\t" << pointC << std::endl;
		deltaT += 0.1f;
	}
	std::cout << std::endl;
	deltaT = 0.0f;
	std::cout << "Step" << "\t" << "Value x" << "\t" << "Value y" << "\t"
		<< "Value z" << std::endl;
	for (int j = 0; j <= 10; j++)
	{
		PE::Geometry::Lerp(vecA, vecB, deltaT, vecC);
		std::cout << deltaT << "\t" << vecC.x << "\t" << vecC.y << "\t"
			<< vecC.z << std::endl;
		deltaT += 0.1f;
	}
	_getch();
	return 0;
}