#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>
#include <iostream>

class Player {
public:
    sf::Sprite spaceShip;
    sf::Texture spaceShipTexture;
    
    Player(const int WINDOW_WIDTH, const int WINDOW_HEIGHT);

    void playerAttribute();
};

#endif
