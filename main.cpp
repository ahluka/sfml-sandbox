#include <iostream>
#include <SFML/Graphics.hpp>

int main(int argc, char **argv) {
	sf::RenderWindow win (sf::VideoMode(800, 600), "sfml-sandbox");
	sf::CircleShape shape(100.0f);

	while (win.isOpen()) {
		sf::Event event;

		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				win.close();
		}

		win.clear();
		win.draw(shape);
		win.display();
	}

	return EXIT_SUCCESS;
}

