#ifndef STREET_H /* Include guards to prevent multiple inclusion */
#define STREET_H

#include <SFML/Graphics.hpp>
#include <array>
#include <iostream>

struct street_h
{
    street_h();
    street_h(sf::Vector2u windowsize);
    sf::VertexArray lane_left;
    sf::VertexArray lane_right;
    sf::Vertex middlelanes[4];
    void draw(sf::RenderWindow& window);
};

extern struct street_h street;
extern sf::Vertex (* middlelanes[])[];
extern sf::Vertex middlelane0[];
extern sf::Vertex middlelane1[];
extern sf::Vertex middlelane2[];
extern sf::Vertex middlelane3[];
extern sf::Vertex middlelane4[];
extern sf::Vertex middlelane5[];
extern sf::Vertex middlelane6[];
extern sf::Vertex middlelane7[];
#endif /* STREET_H */