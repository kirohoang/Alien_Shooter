#include "player.hpp"

Player::Player(const int WINDOW_WIDTH, const int WINDOW_HEIGHT) {
    if (!spaceShipTexture.loadFromFile("src/images/ship.png")) {
        std::cout << "Error can't find the image" << "\n";
    }

    spaceShip.setTexture(spaceShipTexture);
    spaceShip.setPosition(WINDOW_WIDTH / 2, WINDOW_HEIGHT - 100); // Default Player Position
}

void Player::playerAttribute() {
    spaceShip.setScale(sf::Vector2f(2.5f, 2.5f));
    spaceShip.setOrigin(spaceShip.getLocalBounds().width / 2.f, spaceShip.getLocalBounds().height / 2.f);
}