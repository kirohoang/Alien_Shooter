#ifndef BULLET_HPP
#define BULLET_HPP

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "player.hpp"

class Bullet {
public:
    int hp;
    sf::Sprite bullet;
    sf::Texture bulletTexture;

    Bullet();

    void bulletAttributes(Player &player);
};

#endif
