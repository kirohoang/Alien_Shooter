#include <SFML/Graphics.hpp>
#include "entities/bullet.hpp"

// Resolution for window
const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGHT = 720;

class HP {
public:
    sf::Sprite hp;
    sf::Texture hpTexture;

    HP() {
        if (!hpTexture.loadFromFile("images/Heart.png")) {
            std::cout << "Error can't find the image" << "\n";
        }

        hp.setTexture(hpTexture);
        hp.setScale(sf::Vector2f(2.5f, 2.5f));
    };
    ~HP() {}
};

// Player attributes
class Player {
public:
    sf::Sprite spaceShip;
    sf::Texture spaceShipTexture;
    
    Player() {
        if (!spaceShipTexture.loadFromFile("images/ship.png")) {
            std::cout << "Error can't find the image" << "\n";
        }

        spaceShip.setTexture(spaceShipTexture);
        spaceShip.setScale(sf::Vector2f(2.5f, 2.5f));
        spaceShip.setPosition(WINDOW_WIDTH / 2, WINDOW_HEIGHT - 100);
    };
    ~Player() {}
};

/**
 * Update Logic of the game
 */
void update(sf::RenderWindow &window, Player &player, float &dt, float &multiplier, sf::View &view) {

    float playerVelocity = 5.0f * dt * multiplier;
    // Player Movemnet
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        player.spaceShip.move(-playerVelocity, 0.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        player.spaceShip.move(playerVelocity, 0.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        player.spaceShip.move(0.f, -playerVelocity);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        player.spaceShip.move(0.f, playerVelocity);
    }
}

// Draw object on screen
void draw(sf::RenderWindow &window, Player &player, sf::View &view, HP &hp) {
    window.clear();

    // Render inside the view
    window.setView(view);

    window.draw(player.spaceShip);

    // Render the default UI
    window.setView(window.getDefaultView());

    window.draw(hp.hp);

    window.display();
}

void execute() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Alien Shooter 2D");
    window.setFramerateLimit(60);

    sf::Clock dtClock;
    float dt;
    float multiplier = 60;

    sf::View view;
    view.setSize(WINDOW_WIDTH, WINDOW_HEIGHT);

    Player player;
    HP hp;
    Bullet bullet;

    while (window.isOpen()) {

        dt = dtClock.restart().asSeconds();

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == event.Closed) {
                window.close();
            }
        }
        update(window, player, dt, multiplier, view);
        draw(window, player, view, hp);
        std::cout << dt << "\n";
    }
}

int main() {
    execute();
    return EXIT_SUCCESS;
}
