#include "Geometry.h"
void PE::Geometry::Lerp(const float& i_PointA, const float& i_PointB,
	const float& i_DeltaT, float& o_PointC)
{
	o_PointC = (((1.0f - i_DeltaT) * i_PointA) + (i_DeltaT * i_PointB));
}
void PE::Geometry::Lerp(const glm::vec3& i_PointA, const glm::vec3& i_PointB,
	const float& i_DeltaT, glm::vec3& o_PointC)
{
	o_PointC.x = (((1.0f - i_DeltaT) * i_PointA.x) + (i_DeltaT * i_PointB.x));
	o_PointC.y = (((1.0f - i_DeltaT) * i_PointA.y) + (i_DeltaT * i_PointB.y));
	o_PointC.z = (((1.0f - i_DeltaT) * i_PointA.z) + (i_DeltaT * i_PointB.z));
}
