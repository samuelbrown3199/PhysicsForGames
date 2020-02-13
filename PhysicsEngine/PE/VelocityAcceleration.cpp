#include "VelocityAcceleration.h"
namespace PE
{
	void VelocityAcceleration::Velocity(const double& i_PointOne, const double&
		i_PointZero, const double& i_Time, double& o_Velocity)
	{
		if (i_Time > 0)
			o_Velocity = (i_PointOne - i_PointZero) / i_Time;
	}
	void VelocityAcceleration::Acceleration(const double& i_VelocityOne, const double&
		i_VelocityZero, const double& i_Time, double& o_Acceleration)
	{
		if (i_Time > 0)
			o_Acceleration = (i_VelocityOne - i_VelocityZero) / i_Time;
	}
}
