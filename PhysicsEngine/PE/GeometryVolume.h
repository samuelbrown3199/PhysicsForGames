#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
namespace PE
{
	class GeometryVolume
	{
	public:
		void static VolumeOfCylinder(const double& i_Radius,
			const double& i_Height, double& o_VolumeOfCylinder);
		void static VolumeOfSphere(const double& i_Radius,
			double& o_VolumeOfSphere);
		void static VolumeOfCone(const double& i_Radius,
			const double& i_Height, double& o_VolumeOfCone);
		void static VolumeOfPyramid(const double& i_Base,
			const double& i_Height, double& o_VolumeOfPyramid);
		void static VolumeOfEllipsoid(const double& i_RadiusOne, const double&
			i_RadiusTwo, const double& i_RadiusThree, double& o_VolumeOfEllipsoid);

	};
}
