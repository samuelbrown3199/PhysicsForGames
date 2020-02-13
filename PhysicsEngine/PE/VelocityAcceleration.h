#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
namespace PE
{
	class VelocityAcceleration
	{
	public:
		void static Velocity(const double& i_PointOne, const double& i_PointZero,
			const double& i_Time, double& o_Velocity);
		void static Acceleration(const double& i_VelocityOne, const double&
			i_VelocityZero, const double& i_Time, double& o_Accelertion);
	};
}
