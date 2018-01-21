#ifndef PHYSICS_MANAGER_H
#define PHYSICS_MANAGER_H

#include <iostream>
#include <vector>
#include "Types.h"
#include "PhysicsObject.h"

class PhysicsManager
{
	std::vector<Force> m_globalForces;
	std::vector<PhysicsObject*> m_physicsObjs;

public:

	PhysicsManager();
	~PhysicsManager();

	//Initialization of manager
	void startUp();		

	//Get the singleton instance
	static PhysicsManager& get();

	//Add a global force to all objects
	void addGlobalForce(Force f);

	//Add a physicsObject
	void addPhysicsObj(PhysicsObject * physicsObj);

	//Simulate the objects
	void simulate(const float timestep);

	//Check and handle the collisions
	void handleCollisions();

	//Remove all objects
	void clear();	

	//Reset objects to initial positions
	void reset();

protected:

	//Internal function that checks and resolves collisions between sphere floor
	void checkHandleCollisionSphereFloor(PhysicsObject * sphere, PhysicsObject * floor);

	//Internal function that checks and resolves collisions between sphere sphere
	void checkHandleCollisionSphereSphere(PhysicsObject * sphere1, PhysicsObject * sphere2);

};

#endif