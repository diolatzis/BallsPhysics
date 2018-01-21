#include "Plane.h"

Plane::Plane(int shape, const Vec3<float> * v, const Colour & colour)
{
	for (int i = 0; i < 4; i++)
	{
		m_v[i] = v[i];
	}
	m_shape = shape;
	m_colour = colour;
}

Plane::~Plane()
{
	
}

void Plane::render()
{
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();

	glDisable(GL_LIGHTING);
	glColor3f(m_colour[0], m_colour[1], m_colour[2]);

	//Render the plane as a square with two diagonals
	glBegin(GL_LINE_STRIP);
	glVertex3f(m_v[0].getX(), m_v[0].getY(), m_v[0].getZ());
	glVertex3f(m_v[1].getX(), m_v[1].getY(), m_v[1].getZ());
	glVertex3f(m_v[2].getX(), m_v[2].getY(), m_v[2].getZ());
	glVertex3f(m_v[3].getX(), m_v[3].getY(), m_v[3].getZ());
	glVertex3f(m_v[0].getX(), m_v[0].getY(), m_v[0].getZ());
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(m_v[0].getX(), m_v[0].getY(), m_v[0].getZ());
	glVertex3f(m_v[2].getX(), m_v[2].getY(), m_v[2].getZ());
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(m_v[1].getX(), m_v[1].getY(), m_v[1].getZ());
	glVertex3f(m_v[3].getX(), m_v[3].getY(), m_v[3].getZ());
	glEnd();

	glPopMatrix();
}

void Plane::reset()
{
	//Plane is immovable
}

float Plane::getShapeParameter()
{
	//Floor has no shape parameter
	return 0.0f;
}

void Plane::simulate(const std::vector<Force>& globalForces, const float timestep)
{
	//Floor is immovable
}

Vec3<float>* Plane::getShapeVertices()
{
	return m_v;
}
