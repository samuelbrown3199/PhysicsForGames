#include "GeometryVolume.h"
namespace PE
{
	void GeometryVolume::VolumeOfCylinder(const double& i_Radius,
		const double& i_Height, double& o_VolumeOfCylinder)
	{
		// Volume of a cylinder is pi*radius^2*height
		o_VolumeOfCylinder = M_PI * i_Radius * i_Radius * i_Height;
	}
	void GeometryVolume::VolumeOfSphere(const double& i_Radius, double&
		o_VolumeOfSphere)
	{
		// Volume of a Sphere is (4 * pi * radius^3)/3
		o_VolumeOfSphere = (4 * M_PI * i_Radius * i_Radius * i_Radius) / 3;
	}
	void GeometryVolume::VolumeOfCone(const double& i_Radius, const double& i_Height,
		double& o_VolumeOfCone)
	{
		// Volume of a Cone is (pi * radius^2 * height)/3
		o_VolumeOfCone = (M_PI * i_Radius * i_Radius * i_Height) / 3;
	}
	void GeometryVolume::VolumeOfPyramid(const double& i_Base, const double& i_Height,
		double& o_VolumeOfPyramid)
	{
		// Volume of a Pyramid is (base * height)/3
		o_VolumeOfPyramid = (i_Base * i_Height) / 3;
	}

	void GeometryVolume::VolumeOfEllipsoid(const double& i_RadiusOne, const double&
		i_RadiusTwo, const double& i_RadiusThree, double& o_VolumeOfEllipsoid)
	{
		o_VolumeOfEllipsoid = ((float)4 / (float)3)* M_PI * (i_RadiusOne * i_RadiusTwo * i_RadiusThree);
	}
}
