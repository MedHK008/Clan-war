// #include "ClanWar.h"
//
// int main()
// {
//     ClanWar game;
//     game.displayMenu();
// }
//

#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Clans War Game");

    // Load a font
    sf::Font font;
    if (!font.loadFromFile("C:/SFML-2.6.2/examples/joystick/resources/tuffy.ttf")) {
        std::cerr << "Error loading font\n";
        return -1;
    }

    // Display title
    sf::Text title("Clans War Game", font, 50);
    title.setPosition(200, 50);
    title.setFillColor(sf::Color::Red);

    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(title);
        window.display();
    }

    return 0;
}
