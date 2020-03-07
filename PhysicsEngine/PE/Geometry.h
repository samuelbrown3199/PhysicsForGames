#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "vec3.hpp"// glm::vec3
#include "geometric.hpp"// glm::cross, glm::normalize
namespace PE
{
	class Geometry
	{
	public:
		void static Lerp(const float& i_PointA, const float& i_PointB,
			const float& i_DeltaT, float& o_PointC);
		void static Lerp(const glm::vec3& i_PointA, const glm::vec3& i_PointB,
			const float& i_DeltaT, glm::vec3& o_PointC);
	};
}
