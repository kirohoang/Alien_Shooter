#include "entities/bullet.hpp"
#include "entities/hp.hpp"
#include "entities/player.hpp"

// Resolution for window
const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGHT = 720;

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
void draw(sf::RenderWindow &window, Player &player, sf::View &view, HP &hp, Bullet &bullet) {
    window.clear();

    // Render inside the view
    window.setView(view);

    window.draw(bullet.bullet);
    window.draw(player.spaceShip);

    // Render the default UI
    window.setView(window.getDefaultView());

    window.draw(hp.hp);

    window.display();
}

/**
 * Call all of the object 
*/
void objectAttributes(Bullet &bullet, Player &player) {
    bullet.bulletAttributes(player);
    player.playerAttribute();
}

// Everything will be execute in here
void execute() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Alien Shooter 2D", sf::Style::Default);
    window.setFramerateLimit(60);

    sf::Clock dtClock;
    float dt;
    float multiplier = 60;

    sf::View view;
    view.setSize(WINDOW_WIDTH, WINDOW_HEIGHT);

    Player player(WINDOW_WIDTH, WINDOW_HEIGHT);
    HP hp;
    Bullet bullet;

    objectAttributes(bullet, player);

    while (window.isOpen()) {

        dt = dtClock.restart().asSeconds();

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == event.Closed) {
                window.close();
            }
        }
        update(window, player, dt, multiplier, view);
        draw(window, player, view, hp, bullet);
        std::cout << dt << "\n";
    }
}

int main() {
    execute();
    return EXIT_SUCCESS;
}
