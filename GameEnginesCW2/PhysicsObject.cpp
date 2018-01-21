#include "PhysicsObject.h"

PhysicsObject::PhysicsObject()
{
	m_vel = Vec3<float>(0, 0, 0);
	m_accel = Vec3<float>(0, 0, 0);
}

PhysicsObject::~PhysicsObject()
{
}

void PhysicsObject::addForce(Force f)
{
	m_forces.push_back(f);
}