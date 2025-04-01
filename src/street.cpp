/* 
    street.cpp 
*/

/* --------------------------------------------------------------------- */
/* INCLUDE HEADER FILES */
#include "street.hpp"

/* --------------------------------------------------------------------- */
/* DEFINITIONS */
#if(0)
#define WINDOWSIZE_X 1840
#define WINDOWSIZE_Y 1010
#define windowsize2 WINDOWSIZE_X / 8

#define BLACKLINE_Y WINDOWSIZE_Y / 4
#define street::specs::blackline.x 80 / 4



#define street::specs::middlelaneright_startpoint 1050
#endif


sf::Vertex middlelane0[14] =
{
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint, 0), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::whiteline.x,	 street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::whiteline.x,	 street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::whiteline.x - street::specs::blackline.x, street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::whiteline.x - street::specs::blackline.x, street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - (street::specs::whiteline.x + street::specs::blackline.x) * 2, (street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - (street::specs::whiteline.x + street::specs::blackline.x) * 2, (street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, (street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, (street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - (street::specs::whiteline.x + street::specs::blackline.x) * 3, (street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - (street::specs::whiteline.x + street::specs::blackline.x) * 3, (street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - (street::specs::whiteline.x + street::specs::blackline.x) * 3  - street::specs::whiteline.x , (street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White},

};

sf::Vertex middlelane1[14] =
{
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x, street::specs::moveperframe_y + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - street::specs::whiteline.x,	 street::specs::moveperframe_y + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - street::specs::whiteline.x,	 street::specs::moveperframe_y +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y +street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y +street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x - (street::specs::whiteline.x + street::specs::blackline.x) * 3  - street::specs::whiteline.x , street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White},

};

sf::Vertex middlelane2[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2, street::specs::moveperframe_y * 2 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 2 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y* 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y * 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 2 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 2 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - (street::specs::whiteline.x + street::specs::blackline.x) * 3 - street::specs::whiteline.x, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 2 - (street::specs::whiteline.x + street::specs::blackline.x) * 3  - street::specs::whiteline.x , street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White},
};

sf::Vertex middlelane3[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3, street::specs::moveperframe_y * 3 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 3 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 3 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y* 3 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y* 3 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 3 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 3 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - (street::specs::whiteline.x + street::specs::blackline.x) * 3 - street::specs::whiteline.x, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 3 - (street::specs::whiteline.x + street::specs::blackline.x) * 3  - street::specs::whiteline.x , street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White},  
};

sf::Vertex middlelane4[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4, street::specs::moveperframe_y * 4 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 4 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 4 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y* 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y * 4 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 4 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 4 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 4 - (street::specs::whiteline.x + street::specs::blackline.x) * 3  - street::specs::whiteline.x , street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White},  
};

sf::Vertex middlelane5[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5, street::specs::moveperframe_y * 5 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 5 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 5 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y* 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y * 5 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 5 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 5 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},
    
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 5 - (street::specs::whiteline.x + street::specs::blackline.x) * 3  - street::specs::whiteline.x , street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White},
};

sf::Vertex middlelane6[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6, street::specs::moveperframe_y * 6 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 6 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 6 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y* 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y * 6 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 6 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 6 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 6 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 6 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y * 6 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y * 6 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 6 - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 6 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},
    
};

sf::Vertex middlelane7[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7, street::specs::moveperframe_y * 7 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 7 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - street::specs::whiteline.x,	 street::specs::moveperframe_y * 7 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y* 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - street::specs::whiteline.x - street::specs::blackline.x, street::specs::moveperframe_y * 7 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 7 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - street::specs::whiteline.x * 2 - street::specs::blackline.x, street::specs::moveperframe_y * 7 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 7 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 7 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y * 7 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - (street::specs::whiteline.x + street::specs::blackline.x) * 2 - street::specs::whiteline.x, street::specs::moveperframe_y * 7 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneleft_startpoint - street::specs::moveperframe_x * 7 - (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 7 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},
    
    
};


sf::Vertex middlelane8[14] =
{
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint , 0), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::whiteline.x,	 street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::whiteline.x,	 street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::whiteline.x + street::specs::blackline.x, street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::whiteline.x + street::specs::blackline.x, street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + (street::specs::whiteline.x + street::specs::blackline.x) * 2, (street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + (street::specs::whiteline.x + street::specs::blackline.x) * 2, (street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, (street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, (street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + (street::specs::whiteline.x + street::specs::blackline.x) * 3, (street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + (street::specs::whiteline.x + street::specs::blackline.x) * 3, (street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + (street::specs::whiteline.x + street::specs::blackline.x) * 3  + street::specs::whiteline.x , (street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White},

};

sf::Vertex middlelane9[14] =
{
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x, street::specs::moveperframe_y + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + street::specs::whiteline.x,	 street::specs::moveperframe_y + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + street::specs::whiteline.x,	 street::specs::moveperframe_y +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y +street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y +street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x + (street::specs::whiteline.x + street::specs::blackline.x) * 3  + street::specs::whiteline.x , street::specs::moveperframe_y +(street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White},

};

sf::Vertex middlelane10[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2, street::specs::moveperframe_y * 2 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 2 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y* 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y * 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 2 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 2 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + (street::specs::whiteline.x + street::specs::blackline.x) * 3 + street::specs::whiteline.x, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 2 + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x  * 2 + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 2 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x  * 2 + (street::specs::whiteline.x + street::specs::blackline.x) * 3  + street::specs::whiteline.x , street::specs::moveperframe_y* 2 + (street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White}
};

sf::Vertex middlelane11[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3, street::specs::moveperframe_y * 3 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 3 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 3 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y* 3 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y* 3 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 3 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 3 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + (street::specs::whiteline.x + street::specs::blackline.x) * 3 + street::specs::whiteline.x, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 3 + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},
    
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x  * 3 + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 3 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x  * 3 + (street::specs::whiteline.x + street::specs::blackline.x) * 3  + street::specs::whiteline.x , street::specs::moveperframe_y* 3 + (street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White}
    
};

sf::Vertex middlelane12[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4, street::specs::moveperframe_y * 4 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 4 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 4 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y* 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y * 4 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 4 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 4 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 4 + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black},
    
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x  * 4 + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 4 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x  * 4 + (street::specs::whiteline.x + street::specs::blackline.x) * 3  + street::specs::whiteline.x , street::specs::moveperframe_y * 4 + (street::specs::whiteline.y + street::specs::blackline.y) * 3  + street::specs::whiteline.y), sf::Color::White}
};

sf::Vertex middlelane13[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5, street::specs::moveperframe_y * 5+ 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 5 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 5 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y* 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y * 5 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 5 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 5 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 5 + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 5 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black}
    
};

sf::Vertex middlelane14[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6, street::specs::moveperframe_y * 6 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 6 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 6 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y* 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y * 6 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 6 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 6 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 6 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 6 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y * 6 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y * 6 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 6 + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 6 +(street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black}
    
};

sf::Vertex middlelane15[14] =
{
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint , 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x , street::specs::moveperframe_y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7, street::specs::moveperframe_y * 7 + 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 7 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + street::specs::whiteline.x,	 street::specs::moveperframe_y * 7 +street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y * 2 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + street::specs::whiteline.x + street::specs::blackline.x, street::specs::moveperframe_y * 7 + street::specs::whiteline.y + street::specs::blackline.y), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 7 + street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + street::specs::whiteline.x * 2 + street::specs::blackline.x, street::specs::moveperframe_y * 7 +street::specs::whiteline.y * 2 + street::specs::blackline.y), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 7 + (street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + (street::specs::whiteline.x + street::specs::blackline.x) * 2, street::specs::moveperframe_y * 7 + (street::specs::whiteline.y + street::specs::blackline.y) * 2 ), sf::Color::White},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y * 7 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::White},

    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + (street::specs::whiteline.x + street::specs::blackline.x) * 2 + street::specs::whiteline.x, street::specs::moveperframe_y * 7 +(street::specs::whiteline.y + street::specs::blackline.y) * 2 + street::specs::whiteline.y ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(  street::specs::middlelaneright_startpoint  + street::specs::moveperframe_x * 7 + (street::specs::whiteline.x + street::specs::blackline.x) * 3, street::specs::moveperframe_y * 7 + (street::specs::whiteline.y + street::specs::blackline.y) * 3 ), sf::Color::Black}    
};

#if(0)
sf::Vertex middlelane0[] =
{
    sf::Vertex{sf::Vector2f(windowsize2 * 3.25, 0), sf::Color::White},
    sf::Vertex{sf::Vector2f( 743.9,	 63.22 ), sf::Color::White},

    sf::Vertex{sf::Vector2f( 743.9,	 63.22 ), sf::Color::Black},
    sf::Vertex{sf::Vector2f( 729.53, 315.65), sf::Color::Black},

    sf::Vertex{sf::Vector2f( 729.53, 315.65), sf::Color::White},
    sf::Vertex{sf::Vector2f( 725.93, 378.87), sf::Color::White},

    sf::Vertex{sf::Vector2f( 725.93, 378.87), sf::Color::Black},
    sf::Vertex{sf::Vector2f( 711.56, 631.3 ), sf::Color::Black},

    sf::Vertex{sf::Vector2f( 711.56, 631.3 ), sf::Color::White},
    sf::Vertex{sf::Vector2f( 707.96, 694.52), sf::Color::White},

    sf::Vertex{sf::Vector2f( 707.96, 694.52), sf::Color::Black},
    sf::Vertex{sf::Vector2f( 693.59, 946.95), sf::Color::Black},

    sf::Vertex{sf::Vector2f( 693.59, 946.95), sf::Color::White},
    sf::Vertex{sf::Vector2f( 690.0 , 1010.51), sf::Color::White},
    
};

#define Offset1 20
sf::Vertex middlelane1[] =
{
    sf::Vertex{sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::Black},
    sf::Vertex{sf::Vector2f( 744.94   , 44.95),  sf::Color::Black},

    sf::Vertex{sf::Vector2f( 744.94   , 44.95),  sf::Color::White},
    sf::Vertex{sf::Vector2f( 741.34   , 108.17), sf::Color::White},

    sf::Vertex{sf::Vector2f( 741.34   , 108.17), sf::Color::Black},
    sf::Vertex{sf::Vector2f( 726.97   , 360.6),  sf::Color::Black},

    sf::Vertex{sf::Vector2f( 726.97   , 360.6),  sf::Color::White},
    sf::Vertex{sf::Vector2f( 723.37   , 423.82), sf::Color::White},

    sf::Vertex{sf::Vector2f( 723.37   , 423.82), sf::Color::Black},
    sf::Vertex{sf::Vector2f( 709      , 676.25), sf::Color::Black},

    sf::Vertex{sf::Vector2f( 709      , 676.25), sf::Color::White},
    sf::Vertex{sf::Vector2f( 705.4    , 739.47), sf::Color::White},

    sf::Vertex{sf::Vector2f( 705.4    , 739.47), sf::Color::Black},
    sf::Vertex{sf::Vector2f( 691.03   , 991.9),  sf::Color::Black},

    sf::Vertex{sf::Vector2f( 691.03   , 991.9),  sf::Color::White},
    sf::Vertex{sf::Vector2f( 689.99   , 1010.51),sf::Color::White)
};

#define Offset2 40
sf::Vertex middlelane2[] =
{
    sf::Vertex{sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::Black},
    sf::Vertex{sf::Vector2f(742.38   , 89.91), sf::Color::Black},

    sf::Vertex{sf::Vector2f(742.38   , 89.91),  sf::Color::White},
    sf::Vertex{sf::Vector2f(738.78   , 153.13), sf::Color::White},

    sf::Vertex{sf::Vector2f(738.78   , 153.13), sf::Color::Black},
    sf::Vertex{sf::Vector2f(724.41   , 405.56), sf::Color::Black},

    sf::Vertex{sf::Vector2f(724.41   , 405.56), sf::Color::White},
    sf::Vertex{sf::Vector2f(720.81   , 468.78), sf::Color::White},

    sf::Vertex{sf::Vector2f(720.81   , 468.78), sf::Color::Black},
    sf::Vertex{sf::Vector2f(706.44   , 721.21), sf::Color::Black},

    sf::Vertex{sf::Vector2f(706.44   , 721.21), sf::Color::White},
    sf::Vertex{sf::Vector2f(702.84   , 784.43), sf::Color::White},

    sf::Vertex{sf::Vector2f(702.84   , 784.43), sf::Color::Black},
    sf::Vertex{sf::Vector2f(688.47   , 1036.86),sf::Color::Black)
};

#define Offset3 60
sf::Vertex middlelane3[] =
{
    sf::Vertex{sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::Black},
    sf::Vertex{sf::Vector2f(739.82   , 134.86), sf::Color::Black},

    sf::Vertex{sf::Vector2f(739.82   , 134.86), sf::Color::White},
    sf::Vertex{sf::Vector2f(736.22   , 198.08), sf::Color::White},

    sf::Vertex{sf::Vector2f(736.22   , 198.08), sf::Color::Black},
    sf::Vertex{sf::Vector2f(721.85   , 450.51), sf::Color::Black},

    sf::Vertex{sf::Vector2f(721.85   , 450.51), sf::Color::White},
    sf::Vertex{sf::Vector2f(718.25   , 513.73), sf::Color::White},

    sf::Vertex{sf::Vector2f(718.25   , 513.73), sf::Color::Black},
    sf::Vertex{sf::Vector2f(703.8    , 766.16), sf::Color::Black},

    sf::Vertex{sf::Vector2f(703.8    , 766.16), sf::Color::White},
    sf::Vertex{sf::Vector2f(700.28   , 829.38), sf::Color::White},

    sf::Vertex{sf::Vector2f(700.28   , 829.38), sf::Color::Black},
    sf::Vertex{sf::Vector2f(685.91   , 1081.81),sf::Color::Black)
};


#define Offset4 80
sf::Vertex middlelane4[] =
{
    sf::Vertex{sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::Black},
    sf::Vertex{sf::Vector2f(737.26   , 179.81), sf::Color::Black},

    sf::Vertex{sf::Vector2f(737.26   , 179.81), sf::Color::White},
    sf::Vertex{sf::Vector2f(733.66   , 243.03), sf::Color::White},

    sf::Vertex{sf::Vector2f(733.66   , 243.03), sf::Color::Black},
    sf::Vertex{sf::Vector2f(719.29   , 495.46), sf::Color::Black},

    sf::Vertex{sf::Vector2f(719.29   , 495.46), sf::Color::White},
    sf::Vertex{sf::Vector2f(715.69   , 558.68), sf::Color::White},

    sf::Vertex{sf::Vector2f(715.69   , 558.68), sf::Color::Black},
    sf::Vertex{sf::Vector2f(701.32   , 811.11), sf::Color::Black},

    sf::Vertex{sf::Vector2f(701.32   , 811.11), sf::Color::White},
    sf::Vertex{sf::Vector2f(697.72   , 874.33), sf::Color::White},

    sf::Vertex{sf::Vector2f(697.72   , 874.33), sf::Color::Black},
    sf::Vertex{sf::Vector2f(683.35   , 1126.76), sf::Color::Black)
};

#define Offset5 100
sf::Vertex middlelane5[] =
{
    sf::Vertex{sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::Black},
    sf::Vertex{sf::Vector2f(734.7    , 224.77), sf::Color::Black},

    sf::Vertex{sf::Vector2f(734.7    , 224.77), sf::Color::White},
    sf::Vertex{sf::Vector2f(731.1    , 287.99), sf::Color::White},

    sf::Vertex{sf::Vector2f(731.1    , 287.99), sf::Color::Black},
    sf::Vertex{sf::Vector2f(716.73   , 540.42), sf::Color::Black},
    
    sf::Vertex{sf::Vector2f(716.73   , 540.42), sf::Color::White},
    sf::Vertex{sf::Vector2f(713.13   , 603.64), sf::Color::White},

    sf::Vertex{sf::Vector2f(713.13   , 603.64), sf::Color::Black},
    sf::Vertex{sf::Vector2f(698.76   , 856.07), sf::Color::Black},

    sf::Vertex{sf::Vector2f(698.76   , 856.07), sf::Color::White},
    sf::Vertex{sf::Vector2f(695.16   , 919.29), sf::Color::White},

    sf::Vertex{sf::Vector2f(695.16   , 919.29), sf::Color::Black},
    sf::Vertex{sf::Vector2f(680.79   , 1171.72), sf::Color::Black)
};

#define Offset6 120
sf::Vertex middlelane6[] =
{
    sf::Vertex{sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(746.51   , 17.3  ) , sf::Color::White},

    sf::Vertex{sf::Vector2f(746.51   , 17.3  ), sf::Color::Black},
    sf::Vertex{sf::Vector2f(732.14   , 269.72), sf::Color::Black},

    sf::Vertex{sf::Vector2f(732.14   , 269.72), sf::Color::White},
    sf::Vertex{sf::Vector2f(728.54   , 332.94), sf::Color::White},

    sf::Vertex{sf::Vector2f(728.54   , 332.94), sf::Color::Black},
    sf::Vertex{sf::Vector2f(714.17   , 585.37), sf::Color::Black},

    sf::Vertex{sf::Vector2f(714.17   , 585.37), sf::Color::White},
    sf::Vertex{sf::Vector2f(710.57   , 648.59), sf::Color::White},

    sf::Vertex{sf::Vector2f(710.57   , 648.59), sf::Color::Black},
    sf::Vertex{sf::Vector2f(696.2    , 901.02), sf::Color::Black},

    sf::Vertex{sf::Vector2f(696.2    , 901.02), sf::Color::White},
    sf::Vertex{sf::Vector2f(692.6    , 964.24), sf::Color::White},

    sf::Vertex{sf::Vector2f(692.6    , 964.24), sf::Color::Black},
    sf::Vertex{sf::Vector2f(678.23   , 1216.67), sf::Color::Black)
        
};


sf::Vertex middlelane7[] =
{
    sf::Vertex{sf::Vector2f(windowsize2 * 3.25, 0), sf::Color::White},
    sf::Vertex{sf::Vector2f(743.96, 62.25), sf::Color::White},

    sf::Vertex{sf::Vector2f(743.96   , 62.25), sf::Color::Black},
    sf::Vertex{sf::Vector2f(729.58   , 314.68), sf::Color::Black},

    sf::Vertex{sf::Vector2f(729.58   , 314.68), sf::Color::White},
    sf::Vertex{sf::Vector2f(725.98   , 377.9), sf::Color::White},

    sf::Vertex{sf::Vector2f(725.98   , 377.9), sf::Color::Black},
    sf::Vertex{sf::Vector2f(711.61   , 630.33), sf::Color::Black},
    
    sf::Vertex{sf::Vector2f(711.61   , 630.33), sf::Color::White},
    sf::Vertex{sf::Vector2f(708.01   , 693.55), sf::Color::White},

    sf::Vertex{sf::Vector2f(708.01   , 693.55), sf::Color::Black},
    sf::Vertex{sf::Vector2f(693.64   , 945.98), sf::Color::Black},

    sf::Vertex{sf::Vector2f(693.64   , 945.98), sf::Color::White},
    sf::Vertex{sf::Vector2f(690.04   , 1009.2), sf::Color::White},

    sf::Vertex{sf::Vector2f(690.04   , 1009.2), sf::Color::Black},
    sf::Vertex{sf::Vector2f(675.67   , 1261.63), sf::Color::Black)       
};


sf::Vertex (* middlelanesleft[])[] =
{
    &middlelane0,
    &middlelane1,
    &middlelane2,
    &middlelane3,
    &middlelane4,
    &middlelane5,
    &middlelane6,
    &middlelane7,
   
};

sf::Vertex (* middlelanesright[])[] =
{
    &middlelane8,
    &middlelane9,
    &middlelane10,
    &middlelane11,
    &middlelane12,
    &middlelane13,
    &middlelane14,
    &middlelane15
   
};
#endif
    
street_h::street_h() : lane_left(sf::PrimitiveType::LineStrip ,2), lane_right(sf::PrimitiveType::LineStrip ,2),
middlelanesleft{ &middlelane0, &middlelane1, &middlelane2, &middlelane3, &middlelane4, &middlelane5, &middlelane6, &middlelane7},
middlelanesright{ &middlelane8, &middlelane9, &middlelane10, &middlelane11, &middlelane12, &middlelane13, &middlelane14, &middlelane15}
{
    lane_left[0] = sf::Vertex{street::specs::leftlaneup, sf::Color::White};
    lane_left[1] = sf::Vertex{street::specs::leftlanedown, sf::Color::White};
    lane_right[0] = sf::Vertex{street::specs::rightlaneup,sf::Color::White};
    lane_right[1] = sf::Vertex{street::specs::rightlanedown, sf::Color::White}; 
    counter = 0;     
}

void street_h::handle(sf::RenderWindow& window)
{
    update();
    draw(window);
};
void street_h::update()
{
    ++counter;
};

void street_h::draw(sf::RenderWindow& window)
{
    sf::VertexArray a (sf::PrimitiveType::LineStrip ,2);
    a[0].position = sf::Vector2f(900, 0);
    a[1].position = sf::Vector2f(900, window::specs::window_size.y);
    window.draw(this->lane_left);
    window.draw(*this->middlelanesleft[(counter >> 6) & 0b00000111], 14, sf::PrimitiveType::Lines);
    window.draw(*this->middlelanesright[(counter >> 6) & 0b00000111], 14, sf::PrimitiveType::Lines);
    window.draw(this->lane_right);
    window.draw(a);
    //window.draw(*this->middlelanesleft[0], 14, sf::Lines);
    //window.draw(*this->middlelanesleft[7], 14, sf::Lines);
}
