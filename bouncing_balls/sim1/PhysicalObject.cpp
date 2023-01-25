#include "PhysicalObject.h"



PhysicalObject::PhysicalObject(float mass) {
	this->mass = mass;

}

void PhysicalObject::setVelocity(float velocity) {
	this->velocity = velocity;

}

float PhysicalObject::getVelocity() {
	return this->velocity;
}