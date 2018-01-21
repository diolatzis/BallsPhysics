#ifndef SPHERE_H
#define SPHERE_H

#include "Types.h"
#include "RenderableObject.h"
#include "PhysicsObject.h"
#include <GL/glut.h>

class Sphere : public RenderableObject, public PhysicsObject
{
	//Sphere variables
	Vec3<float> m_iniPos;
	Vec3<float> m_pos;
	float m_rad;
	Colour m_colour;

public:

	Sphere(const int shape, const Vec3<float> & pos, const Vec3<float> & vel, float rad, const Colour & colour, float mass, float restitution);
	~Sphere();

	//Implementations of PhysicsObject virtual functions
	void simulate(const std::vector<Force> & globalForces, const float timestep);
	void reset();
	Vec3<float> * getShapeVertices();
	float getShapeParameter();

	//Implementations of RederableObject virtual functions
	void render();

	//Getters
	Vec3<float> getPos() { return m_pos; }
	float getRad() { return m_rad; }
};


#endif

