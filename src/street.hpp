#pragma once

/* --------------------------------------------------------------------- */
/* INCLUDE HEADER FILES */
#include "standard.hpp"
/* --------------------------------------------------------------------- */
/* DEFINITIONS */


/* --------------------------------------------------------------------- */

struct street_h
{
    street_h();
public:
    void draw(sf::RenderWindow& window);
    void handle(sf::RenderWindow& window);
private:
    void update();
    sf::VertexArray lane_left;
    sf::VertexArray lane_right;
    sf::Vertex (* middlelanesleft[8])[14];
    sf::Vertex (* middlelanesright[8])[14];
    uint64_t counter;
    
};
// ***************************************************************************
// end of file
// ***************************************************************************