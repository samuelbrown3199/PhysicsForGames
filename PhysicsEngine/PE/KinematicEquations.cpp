#include "KinematicEquations.h"
void PE::KinematicEquations::ComputeDisplacmentUsingAcceleration(const double&
	i_InitialVelocity, const double& i_Acceleation, const double i_Time, double&
	o_Displacement)
{
	o_Displacement = (i_InitialVelocity * i_Time) + (0.5 * i_Acceleation * i_Time *
		i_Time);
}
void PE::KinematicEquations::ComputeFinalVelocity(const double& i_InitialVelocity,
	const double& i_Acceleration, const double& i_Time, double& o_FinalVelocity)
{
	o_FinalVelocity = i_InitialVelocity + (i_Acceleration * i_Time);
}
void PE::KinematicEquations::ComputeFinalVelocitySquared(const double&
	i_InitialVelocitySquared, const double& i_Acceleration, const double&
	i_Displacement, double& o_FinalVelocitySquared)
{
	o_FinalVelocitySquared = i_InitialVelocitySquared + (2 * i_Acceleration *
		i_Displacement);
}
void PE::KinematicEquations::ComputeDisplacementUsingVelocities(const double&
	i_InitialVelocity, const double& i_FinalVelocity, const double& i_Time, double&
	o_Displacement)
{
	o_Displacement = ((i_InitialVelocity + i_FinalVelocity) / 2) * i_Time;
}
