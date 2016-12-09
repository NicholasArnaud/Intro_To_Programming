#pragma once
#include "Vector.h"

class Agent
{
	Vector2 position;
	Vector2 velocity;
	float mass;

public:

	Agent(Vector2 position, Vector2 velocity);
	bool AddForce(Vector2 force);
};