#pragma once

/* --------------------------------------------------------------------- */
/* INCLUDE HEADER FILES */

#include "player.hpp"
#include "street.hpp"
#include "enemy.hpp"
/* --------------------------------------------------------------------- */
/* DEFINITIONS */
enum game_status
{
    MENU = 0,
    RUN,
    PAUSE,
    STOP
};
/* --------------------------------------------------------------------- */



class game_h
{
public:    
    game_h();
    void execute();
private:
    void run();
    void end();
    void pause();
    void explosion();
    void events_run();
    void events_pause();
    void events_end();
    void pause_drawing();
    void checking_collision();  

private:
    typedef void (game_h::*FunctionPointer)( void );
    enum game_status status;
    FunctionPointer game_handler;
    FunctionPointer event_handler;
    sf::RenderWindow window;
    
    Player_T player;
    street_h street;
    Enemy_T enemies;

    uint64_t counter;
    std::optional<sf::FloatRect> overlap;
    sf::Texture explosiones[explosion::specs::explosion_amount];
    sf::Sprite boom;
    sf::Texture arrow;
    sf::Font font;
    sf::Text text;
};


// ***************************************************************************
// end of file
// ***************************************************************************