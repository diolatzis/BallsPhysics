#ifndef PLANE_H
#define PLANE_H

#include <GL\glut.h>
#include "Types.h"
#include "RenderableObject.h"
#include "PhysicsObject.h"

class Plane : public RenderableObject, public PhysicsObject
{
	//Plane variables
	Vec3<float> m_v [4];	
	Colour m_colour;		

public:

	Plane(int shape, const Vec3<float> * v, const Colour & colour);
	~Plane();

	//Implementations of PhysicsObject virtual functions
	void simulate(const std::vector<Force> & globalForces, const float timestep);
	void reset();
	Vec3<float> * getShapeVertices();
	float getShapeParameter();

	//Implementations of RenderableObject virtual functions
	void render();
};

#endif
