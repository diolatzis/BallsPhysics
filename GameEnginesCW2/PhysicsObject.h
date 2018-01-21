#ifndef PHYSICS_OBJECT_H
#define PHYSICS_OBJECT_H

#include <vector>
#include "Types.h"

class PhysicsObject		//Abstract class of physics objects
{
protected:

	//Forces applied to this object
	std::vector<Force> m_forces;

	//Physics variables
	Vec3<float> m_vel, m_accel;
	Vec3<float> m_iniVel;

	float m_mass;
	float m_restitution;

	//Shape of the collision pollygon
	int m_shape;

public:

	//Shapes supproted
	static const int SHAPE_SPHERE = 0;
	static const int SHAPE_FLOOR = 1;

	PhysicsObject();
	~PhysicsObject();

	//Virtual functions
	virtual void simulate(const std::vector<Force> & globalForces, const float timestep) = 0;
	virtual void reset() = 0;
	virtual Vec3<float> * getShapeVertices() = 0;
	virtual float getShapeParameter()=0; 

	//Add a force to this object
	void addForce(Force f);

	//Getters
	int getShape() { return m_shape; }
	float getRestitution() { return m_restitution; }
	Vec3<float> * getVel() { return &m_vel; }
	float getMass() { return m_mass; }
};

#endif

