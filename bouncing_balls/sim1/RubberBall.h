#pragma once
#include "PhysicalObject.h"
#include  <SFML/Graphics.hpp>

class RubberBall : public PhysicalObject {
	
	sf::CircleShape viz;

public:
	RubberBall(int mass, int size, sf::Vector2i pos) ;
	sf::CircleShape getViz() {
		return viz;
	}




};

