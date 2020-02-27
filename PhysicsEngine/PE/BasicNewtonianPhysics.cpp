#include "BasicNewtonianPhysics.h"
void PE::BasicNewtonianPhysics::ComputeForceDueToGravity(const double& i_MassOne,
	const double& i_MassTwo, const double i_RadiusOne, const double& i_RadiusTwo,
	double& o_Acceleration)
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
void PE::BasicNewtonianPhysics::ComputeForce(const double& i_Mass,
	const double& i_Aceleration, double& o_Force)
{
	o_Force = i_Mass * i_Aceleration;
}
void PE::BasicNewtonianPhysics::FreeFallVelocityDueToGravity(const double& i_time,
	double& o_Velocity)
{
	o_Velocity = g * i_time;
}
void PE::BasicNewtonianPhysics::FreeFallVelocityWithDrag(const double& i_time,
	const double& i_mass, const double& i_AirDensity, const double& i_DragCoefficient,
	const double& i_Area, double& o_Velocity)
{
	double vel = 0.0;
	PE::BasicNewtonianPhysics::ComputeTerminalVelocity(i_mass, i_AirDensity,
		i_DragCoefficient, i_Area, vel);
	o_Velocity = tanh((g * i_time) / vel);
	o_Velocity = -vel * o_Velocity;
}
void PE::BasicNewtonianPhysics::ComputeTerminalVelocity(const double& i_mass,
	const double& i_AirDensity, const double& i_DragCoefficient, const double& i_Area,
	double& o_TerminalVelocity)
{
	o_TerminalVelocity = sqrt((2 * g * i_mass) / (i_AirDensity * i_DragCoefficient *
		i_Area));
}
