#pragma once
#include  <SFML/Graphics.hpp>


class PhysicalObject {

	float mass;
	float velocity = 0;
	//float acceleration;


public:
	PhysicalObject(float mass);
	//~PhysicalObject();

	void setVelocity(float velocity);
	float getVelocity();

};

