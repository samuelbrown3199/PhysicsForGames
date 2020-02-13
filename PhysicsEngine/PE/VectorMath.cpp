#include "VectorMath.h"
void PE::VectorMath::Calculate3DVector(const glm::vec3& i_point1,
	const glm::vec3& i_point2, glm::vec3& o_vector)
{
	o_vector = glm::operator-(i_point1, i_point2);
}
void PE::VectorMath::ComputeDistanceBetween3DPoints(const glm::vec3& i_Point1,
	const glm::vec3& i_Point2, float& o_Distance)
{
	o_Distance = static_cast<float> (glm::distance(i_Point1, i_Point2));
}
void PE::VectorMath::ComputeNormalToTriangleDefinedBy3DPoints(glm::vec3 const&
	i_Point1, glm::vec3 const& i_Point2, glm::vec3 const& i_Point3, glm::vec3&
	o_Normal)
{
	o_Normal = glm::normalize(glm::cross(i_Point1 - i_Point2, i_Point2 - i_Point3));
}
void PE::VectorMath::ComputeNormalTo3DVectors(glm::vec3 const& i_Vector1,
	glm::vec3 const& i_Vector2, glm::vec3& o_Normal)
{
	o_Normal = glm::normalize(glm::cross(i_Vector1, i_Vector2));
}

void PE::VectorMath::ComputeVolumeOfParallelepiped(glm::vec3 const& i_VectorA,
	glm::vec3 const& i_VectorB, glm::vec3 const& i_VectorC, float& o_Volume)
{
	o_Volume = glm::dot(i_VectorA, glm::cross(i_VectorB, i_VectorC));
}
