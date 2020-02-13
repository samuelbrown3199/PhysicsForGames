#include "BasicNewtonianPhysics.h"
void PE::BasicNewtonianPhysics::ComputeAccelerationDueToGravity(const double&
	i_MassOne, const double& i_MassTwo,
	const double i_RadiusOne, const double& i_RadiusTwo, double& o_Acceleration)
{
	double radius = i_RadiusOne + i_RadiusTwo;
	o_Acceleration = ((G * i_MassOne * i_MassTwo) / (radius * radius));
	o_Acceleration = o_Acceleration / i_MassTwo;
}
void PE::BasicNewtonianPhysics::ComputeCentripetalAcceleration(const double&
	i_Velocity, const double& i_Radius, double& o_Acceleration)
{
	o_Acceleration = (i_Velocity * i_Velocity) / i_Radius;
}
void PE::BasicNewtonianPhysics::ComputeGravitationalPE(const double& i_H0,
	const double& i_Mass, double& o_PE)
{
	o_PE = i_H0 * i_Mass * g;
}

void PE::BasicNewtonianPhysics::ComputeKineticEnergy(const double& i_Velocity, const double&
	i_Mass, double& o_KE)
{
	o_KE = (i_Mass / 2) * (i_Velocity * i_Velocity);
}