#pragma once

/* --------------------------------------------------------------------- */
/* INCLUDE HEADER FILES */
#include "standard.hpp"
/* --------------------------------------------------------------------- */
/* DEFINITIONS */



/* --------------------------------------------------------------------- */

enum Player_Position
{
    LEFT    = -1,
    MIDDLE  =  0,
    RIGHT   =  1
};


class Player_T
{
    public:
        Player_T(void);
        void handle(sf::RenderWindow& window);
        void chance_status(Player_Position newposition);
        void draw(sf::RenderWindow& window);
        sf::FloatRect getBounds();
        // Definition eines Funktionszeigers für Member-Funktionen
    private:
        void update();        
        void idle();
        typedef void (Player_T::*FunctionPointer)();
        FunctionPointer behaviour;
        enum Player_Position lane_position;
        float speed;
        sf::Vector2f position;
        unsigned int counter_speed;
        sf::Texture texture;
        sf::Sprite sprite;
};

// ---------------------------------------------------------------------

// ***************************************************************************
// end of file
// ***************************************************************************