#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

int main(int argc, char **argv) {
	sf::Window win(sf::VideoMode(800, 600), "sfml-sandbox");

	win.setActive(true);

	sf::Clock clock;
	bool running = true;
	while (running) {
		sf::Event event;

		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				running = false;

			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::Escape)
					running = false;
			}

			if (event.type == sf::Event::Resized)
				glViewport(0, 0, event.size.width, event.size.height);
		}

		sf::Time elapsed = clock.restart();
		//update(elapsed);
		glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


		win.display();
	}

	return EXIT_SUCCESS;
}

