#include <iostream>
#include "Agent_Class.h"
#include "Vector.h"






Agent::Agent(Vector2 position, Vector2 velocity)
{
	position = (position + velocity);
}

bool Agent::AddForce(Vector2 force)
{
	velocity = (velocity + force);

	return true;
}