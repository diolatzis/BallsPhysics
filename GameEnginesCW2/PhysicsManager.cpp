#include "PhysicsManager.h"



PhysicsManager::PhysicsManager()
{
	//Do nothing
}

PhysicsManager::~PhysicsManager()
{
	//Do nothing
}

void PhysicsManager::startUp()
{
	//Any necessary initialization goes here
}

PhysicsManager & PhysicsManager::get()
{
	static PhysicsManager* instance = NULL;
	if (instance == NULL)
	{
		instance = new PhysicsManager();
	}
	_ASSERT(instance);
	return *instance;
}

void PhysicsManager::addGlobalForce(Force f)
{
	m_globalForces.push_back(f);
}

void PhysicsManager::addPhysicsObj(PhysicsObject * physicsObj)
{
	m_physicsObjs.push_back(physicsObj);
}

void PhysicsManager::simulate(const float timestep)
{
	for (int i = 0; i < m_physicsObjs.size(); i++)
	{
		m_physicsObjs.at(i)->simulate(m_globalForces, timestep);	//Timestep the objects
	}
}

void PhysicsManager::handleCollisions()
{
	for (int i = 0; i < m_physicsObjs.size(); i++)
	{
		PhysicsObject * obj1 = m_physicsObjs.at(i);

		for (int j = i+1; j < m_physicsObjs.size(); j++)	//For each object check collisions with every other
		{
			PhysicsObject * obj2 = m_physicsObjs.at(j);

			if (obj1->getShape() == PhysicsObject::SHAPE_SPHERE)		//Object 1 -> sphere
			{
				if (obj2->getShape() == PhysicsObject::SHAPE_FLOOR)		//Object 2 -> floor
				{
					checkHandleCollisionSphereFloor(obj1, obj2);		
				}
				if (obj2->getShape() == PhysicsObject::SHAPE_SPHERE)	//Object 2 -> sphere
				{
					checkHandleCollisionSphereSphere(obj1, obj2);
				}
			}
			else if (obj1->getShape() == PhysicsObject::SHAPE_FLOOR)	//Object 1 -> floor
			{
				if (obj2->getShape() == PhysicsObject::SHAPE_SPHERE)	//Object 2 -> sphere
				{
					checkHandleCollisionSphereFloor(obj2, obj1);
				}
			}
		}
	}
}

void PhysicsManager::clear()
{
	m_physicsObjs.clear();
}

void PhysicsManager::reset()
{
	for (int i = 0; i < m_physicsObjs.size(); i++)
	{
		m_physicsObjs.at(i)->reset();
	}
}

void PhysicsManager::checkHandleCollisionSphereFloor(PhysicsObject * sphere, PhysicsObject * floor)
{
	//Make sure objects are of the correct shape
	_ASSERT(sphere->getShape() == PhysicsObject::SHAPE_SPHERE);		
	_ASSERT(floor->getShape() == PhysicsObject::SHAPE_FLOOR);

	Vec3<float> * spherePos = sphere->getShapeVertices();	
	float radius = sphere->getShapeParameter();				
	Vec3<float> * planeVec = floor->getShapeVertices();		

	Vec3<float> planeNormal = ((planeVec[1]- planeVec[0]).crossProduct(planeVec[2]- planeVec[0])).getNormal();	

	if ((planeVec[0] - spherePos[0]).dotProduct(planeNormal)> 0 )  return;	//If sphere is at the back side of plane dont collide

	float distanceToFloor = abs((planeVec[0] - spherePos[0]).dotProduct(planeNormal)); //Calculate distance to floor

	if (distanceToFloor < radius)
	{
			*(spherePos) = *(spherePos)+(planeNormal *1.5*(radius - distanceToFloor));	//Get the sphere out of the plane
			sphere->getVel()[0] = sphere->getVel()[0] + planeNormal*sphere->getRestitution()*((sphere->getVel())->dotProduct(planeNormal))*(-2);	//Invert the sphere's velocity
	}
}

void PhysicsManager::checkHandleCollisionSphereSphere(PhysicsObject * sphere1, PhysicsObject * sphere2)
{
	//Make sure objects are of the correct shape
	_ASSERT(sphere1->getShape() == PhysicsObject::SHAPE_SPHERE);
	_ASSERT(sphere2->getShape() == PhysicsObject::SHAPE_SPHERE);

	Vec3<float> sphereDist = ((sphere1->getShapeVertices()[0]) - (sphere2->getShapeVertices()[0]));		//Vector that connects the centers of the two spheres

	if (sphereDist.getLength() <= (sphere1->getShapeParameter() + sphere2->getShapeParameter()))	//If distance smaller than the two radius
	{
		//Use elastic collision formula to compute new velocities, assume no friction
		float u1 = abs(sphere1->getVel()->dotProduct(sphereDist.getNormal()));
		float u2 = abs(sphere2->getVel()->dotProduct(sphereDist.getNormal()));
		float m1 = sphere1->getMass();
		float m2 = sphere2->getMass();

		Vec3<float> v1 = ((sphere1->getVel()[0]*(m1 - m2) + sphere2->getVel()[0]*2 * m2) / (m1 + m2))*sphere1->getRestitution();
		Vec3<float> v2 = ((sphere2->getVel()[0] *(m2 - m1) + sphere1->getVel()[0]*2 * m1) / (m1 + m2))*sphere2->getRestitution();

		sphere1->getVel()[0] = v1;

		sphere2->getVel()[0] = v2;

		sphere1->getShapeVertices()[0] = sphere1->getShapeVertices()[0] + sphereDist.getNormal()*((sphere1->getShapeParameter() + sphere2->getShapeParameter()+0.01) - sphereDist.getLength());
	}
}




