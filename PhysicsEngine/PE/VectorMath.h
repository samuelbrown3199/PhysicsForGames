#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "vec3.hpp"// glm::vec3
#include "geometric.hpp"// glm::cross, glm::normalize
namespace PE
{
	class VectorMath
	{
	public:
		void static Calculate3DVector(const glm::vec3& i_point1,
			const glm::vec3& i_point2, glm::vec3& o_vector);
		void static ComputeDistanceBetween3DPoints(const glm::vec3& i_Point1,
			const glm::vec3& i_Point2, float& o_Distance);
		void static ComputeNormalToTriangleDefinedBy3DPoints(glm::vec3 const&
			i_Point1, glm::vec3 const& i_Point2, glm::vec3 const& i_Point3,
			glm::vec3& o_Normal);
		void static ComputeNormalTo3DVectors(glm::vec3 const& i_Vector1,
			glm::vec3 const& i_Vector2, glm::vec3& o_Normal);
		void static ComputeVolumeOfParallelepiped(glm::vec3 const& i_VectorA,
			glm::vec3 const& i_VectorB, glm::vec3 const& i_VectorC, float& o_Volume);
	};
}