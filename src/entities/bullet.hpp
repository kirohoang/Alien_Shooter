#ifndef BULLET_HPP
#define BULLET_HPP

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class Bullet {
public:
    sf::Sprite bullet;
    sf::Texture bulletTexture;

    Bullet() {
        if (!bulletTexture.loadFromFile("images/")) {
            std::cout << "Couldn't find the images!" << "\n";
        }

        bullet.setTexture(bulletTexture);
        bullet.setScale(sf::Vector2f(10.f, 10.f));
    }
    ~Bullet() {}
};

#endif
