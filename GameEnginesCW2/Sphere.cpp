#include "Sphere.h"

Sphere::Sphere(const int shape, const Vec3<float> & pos, const Vec3<float> & vel, float rad, const Colour & colour, float mass, float restitution)
{
	m_shape = shape;
	m_pos = pos;
	m_iniPos = pos;
	m_iniVel = vel;
	m_rad = rad;
	m_colour = colour;
	m_vel = vel;
	m_mass = mass;
	m_restitution = restitution;

	addForce(Force(0, -9.81*m_mass, 0));	//Add gravity
}

Sphere::~Sphere()
{
}

Vec3<float>* Sphere::getShapeVertices()
{
	return &m_pos;
}

float Sphere::getShapeParameter()
{
	return m_rad;
}

void Sphere::render()
{
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();

	glEnable(GL_LIGHTING);

	//Define the colour of the lighting
	GLfloat mat_diffuse[] = { m_colour[0], m_colour[1], m_colour[2], 1.0 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shininess[] = { 50.0 };
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

	glTranslatef(m_pos.getX(), m_pos.getY(), m_pos.getZ());		//Move sphere to position
		
	gluSphere(gluNewQuadric(), m_rad, 30, 30);					//Render the sphere

	glPopMatrix();
}

void Sphere::simulate(const std::vector<Force> & globalForces, const float timestep)
{
	Force totalF(0,0,0);

	//Add local forces
	for (int i = 0; i < m_forces.size(); i++)
	{
		totalF = totalF + m_forces.at(i);
	}

	//Add global forces
	for (int i = 0; i < globalForces.size(); i++)
	{
		totalF = totalF + globalForces.at(i);
	}

	//Use uniform acceleration movement formulas and explicit Euler
	m_accel = totalF / m_mass;

	m_vel = m_vel + (m_accel*timestep);

	m_pos = m_pos + (m_vel*timestep)*0.5;
	
}

//Reset sphere to initial position
void Sphere::reset()
{
	m_vel = m_iniVel;
	m_pos = m_iniPos;
}
