#include "RubberBall.h"
#include  <SFML/Graphics.hpp>


RubberBall::RubberBall(int mass, int size, sf::Vector2i pos) : PhysicalObject(static_cast<float>(mass)), viz(static_cast<float>(size)) {
	this->viz.setPosition(static_cast<float>(pos.x), static_cast<float>(pos.y));
}