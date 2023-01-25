#include  <SFML/Graphics.hpp> // replace quotes with less than and greater than symbols
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "PhysicalObject.h"
#include "RubberBall.h"




int main()
{


	std::vector<RubberBall> ballArray;
	sf::RenderWindow window(sf::VideoMode(800, 600), "Test", sf::Style::Close);
	srand(time(0));

	/*sf::RectangleShape box(sf::Vector2f(100.0f, 100.0f));*/
	//box.setFillColor(sf::Color::Green);
	//box.setOrigin(50.0f, 50.0f);
	float time = 0;

	sf::Event event;

	//auto start = std::chrono::steady_clock::now();
	sf::Clock clock; // starts the clock

	while (window.isOpen()) {

		while (window.pollEvent(event)) {
			//std::cout << "Hello" << std::endl;

			if (event.type == sf::Event::Closed) {

				window.close();
			}

			switch (event.type) {
			case sf::Event::TextEntered:
				printf("%c", event.text.unicode);
			
			
			
			
			}


			// 5 miliseconds chosen bc 144hz is refresh every 6.9 miliseconds.  Want smoooooth
			//std::cout << "Hello";


		}

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {

			std::cout << ballArray.size() << std::endl;
		
			sf::Vector2i pos = sf::Mouse::getPosition(window);

			int rand_mass = std::rand() % 10 + 1; // between 1 and 10 kg
			int rand_size = std::rand() % 60 + 20; // between 20 and 80 px

			ballArray.push_back(RubberBall(rand_mass, rand_size, pos));

			//box.setPosition(static_cast<float>(pos.x), static_cast<float>(pos.y));

		}

		


		
		window.clear();
		for (auto i : ballArray) window.draw(i.getViz());
		/*window.draw(box);*/
		window.display();
	}

	return 0;
}