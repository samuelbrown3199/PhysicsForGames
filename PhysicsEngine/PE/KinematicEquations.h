#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
namespace PE
{
	class KinematicEquations
	{
	public:
		void static ComputeDisplacmentUsingAcceleration(const double&
			i_InitialVelocity, const double& i_Acceleation, const double i_Time,
			double& o_Displacement);
		void static ComputeFinalVelocity(const double& i_InitialVelocity, const
			double& i_Acceleration, const double& i_Time, double& o_FinalVelocity);
		void static ComputeFinalVelocitySquared(const double&
			i_InitialVelocitySquared, const double& i_Acceleration, const double&
			i_Displacement, double& o_FinalVelocitySquared);
		void static ComputeDisplacementUsingVelocities(const double&
			i_InitialVelocity, const double& i_FinalVelocity, const double&
			i_Timedouble, double& o_Displacement);
	};
}
