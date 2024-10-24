#include "bullet.hpp"

Bullet::Bullet() {
    if (!bulletTexture.loadFromFile("src/images/bullet.png")) {
        std::cout << "Couldn't find the images!" << "\n";
    }
    bullet.setTexture(bulletTexture);
}

void Bullet::bulletAttributes(Player &player) {
    bullet.setScale(sf::Vector2f(1.f, 1.f));
    bullet.setPosition(player.spaceShip.getPosition().x, player.spaceShip.getPosition().y);
    bullet.setOrigin(bullet.getLocalBounds().width / 2.f, bullet.getLocalBounds().height / 2.f);
}