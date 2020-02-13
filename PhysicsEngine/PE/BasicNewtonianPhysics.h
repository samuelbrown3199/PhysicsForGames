#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "vec3.hpp"
#include "vec4.hpp"// glm::vec4
#include "glm.hpp"
#include "geometric.hpp"// glm::cross, glm::normalize
namespace PE
{
	const double G = 0.0000000000667;
	const double g = 9.80;
	class BasicNewtonianPhysics
	{
	public:
		void static ComputeAccelerationDueToGravity(const double& i_MassOne,
			const double& i_MassTwo, const double i_RadiusOne,
			const double& i_RadiusTwo, double& o_Acceleration);
		void static ComputeCentripetalAcceleration(const double& i_Velocity,
			const double& i_Radius, double& o_Acceleration);
		void static ComputeGravitationalPE(const double& i_H0,
			const double& i_Mass, double& o_PE);
		void static ComputeKineticEnergy(const double& i_Velocity, const double&
			i_Mass, double& o_KE);
	};
}