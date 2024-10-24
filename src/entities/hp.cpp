#include "hp.hpp"

HP::HP() {
    if (!hpTexture.loadFromFile("src/images/Heart.png")) {
        std::cout << "Error can't find the image" << "\n";
    }

    hp.setTexture(hpTexture);
    hp.setScale(sf::Vector2f(2.5f, 2.5f));
}