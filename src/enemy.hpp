#pragma once

/* --------------------------------------------------------------------- */
/* INCLUDE HEADER FILES */
#include "standard.hpp"
/* --------------------------------------------------------------------- */
/* DEFINITIONS */

enum enemy_status
{
	ENEMY_DEAD = 0,
	ENEMY_ALIVE = 1	
};
enum enemy_type
{
    ENEMY_TRUCK = 0,
    ENEMY_TRACTOR
};

/* --------------------------------------------------------------------- */

class Enemy_T
{
    public:
        Enemy_T(void);
        ~Enemy_T();
        void handle(sf::RenderWindow& window);
        void spawn(uint8_t amount, int randomnumber);  
        void draw(sf::RenderWindow& window);
        std::optional<sf::FloatRect> checking_collision(sf::FloatRect player);
        // Definition eines Funktionszeigers für Member-Funktionen
        typedef void (Enemy_T::*FunctionPointer)();
        FunctionPointer behaviour;
    private:
        void update();
        unsigned int counter_speed;
        uint8_t lanes[enemy::specs::amount];
        enemy_status status[enemy::specs::amount]; 
        enemy_type types[enemy::specs::amount];
        sf::Vector2f position[enemy::specs::amount];
        sf::Vector2f velocity[enemy::specs::amount];
        sf::Texture texture[enemy::specs::types];
        sf::Sprite sprite;
};

// ---------------------------------------------------------------------

// ***************************************************************************
// end of file
// ***************************************************************************