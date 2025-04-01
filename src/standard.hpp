#pragma once

/* --------------------------------------------------------------------- */
/* INCLUDE HEADER FILES */
#include <SFML/Graphics.hpp>
#include <stdint.h>
#include <iostream>
#include <experimental/random>
#include <string_view>

/* --------------------------------------------------------------------- */
/* DEFINITIONS */

#define WINDOWSIZE_X 1640
#define WINDOWSIZE_Y 1010
#define Amount_Blackline 4
#define windowsize2 WINDOWSIZE_X / 8
#define HitBox  0

namespace window::specs
{
    constexpr std::string_view arrowfilepath("/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/arrow.png");
    constexpr sf::Vector2f window_size(WINDOWSIZE_X, WINDOWSIZE_Y);
    constexpr sf::Vector2f windowpause_size(400, 350);
    constexpr sf::Vector2f windowpause_position (750, 300);
    constexpr sf::Vector2f string_pause_pos( 900, 350);
    constexpr sf::Vector2f string_resume_pos( 890, 450);
    constexpr sf::Vector2f string_exit_pos( 910, 550);
    constexpr sf::Vector2f rect_resume_exit_pos[2] =
    {
        {800, 450},
        {800, 550}
    };
};

namespace explosion::specs
{
    constexpr uint8_t explosion_amount = 8;
    constexpr std::string_view filepath[explosion_amount] = 
    {
        "/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/explosion/explosion0.png",
        "/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/explosion/explosion1.png",
        "/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/explosion/explosion2.png",
        "/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/explosion/explosion3.png",
        "/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/explosion/explosion4.png",
        "/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/explosion/explosion5.png",
        "/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/explosion/explosion6.png",
        "/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/explosion/explosion7.png"
    };
    constexpr sf::Vector2f explosion_scales[explosion_amount]=
    {
        {0.3, 0.3}, {0.4, 0.4}, {0.5, 0.5}, {0.6, 0.6}, {0.7, 0.7}, {0.8, 0.8}, {0.9, 0.9}, {0.9, 0.9}
    };
};

namespace street::specs
{
    // 1840 / 8
    /* left lane */
    constexpr sf::Vector2f leftlaneup = {460, 0};
    constexpr sf::Vector2f leftlanedown = {345, window::specs::window_size.y};

    /* right lane */
    constexpr sf::Vector2f rightlaneup = {1380, 0};
    constexpr sf::Vector2f rightlanedown = {1495, window::specs::window_size.y};

    constexpr float lanewidth[3] = {(leftlanedown.x - leftlaneup.x) , 0,  rightlanedown.x - rightlaneup.x};
    /* middle lanes */
    constexpr float middlelaneleft_startpoint = 750;
    constexpr float middlelaneright_startpoint = 1050;
    constexpr sf::Vector2f blackline( 80 / Amount_Blackline, WINDOWSIZE_Y / Amount_Blackline);
    constexpr sf::Vector2f whiteline(blackline.x / 8, blackline.y / 8);
    constexpr float moveperframe_y = (blackline.y + whiteline.y) / 8;
    constexpr float moveperframe_x = ((blackline.x + whiteline.x) / 8);
};

namespace player::specs
{
    constexpr std::string_view filepath("/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/player/player.png");
    constexpr uint8_t amount = 4;
    constexpr uint8_t status = 4;
    constexpr uint16_t position_y = 800;
    constexpr sf::Vector2f player_default_position((street::specs::middlelaneright_startpoint - street::specs::middlelaneleft_startpoint) / 2 + street::specs::middlelaneleft_startpoint, 800);
    constexpr sf::Angle switching_angles[3] =           { sf::degrees(-30), sf::degrees(0), sf::degrees(30) };
    constexpr sf::Angle lanes_angles[3] =               { sf::degrees(2), sf::degrees(0), sf::degrees(-2) };
    constexpr float lane_position[3] =                  { 500.f, 900.f, 1300.f };
    constexpr float speed[3] =                          { -5.f, 0.f, 5.f };
    constexpr sf::Vector2f scale(0.3, 0.3);
};

namespace enemy::specs
{
    constexpr uint8_t types = 2;
    constexpr uint8_t amount = 10;
    constexpr std::string_view filepath[types] = {  "/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/enemy/Enemy_1.png",
                                                    "/home/lutzjann/Dokumente/Softwareprojekte/Vecdrift2/textures/enemy/Enemy_2.png"}; 
    constexpr float velocity[4] = { 0.5, 0.7, 0.6, 1.0};
                                    
    constexpr sf::Vector2f starting_position[3] =   {
                                                        {(street::specs::leftlaneup.x + street::specs::middlelaneleft_startpoint) / 2 , 0},
                                                        {(street::specs::middlelaneleft_startpoint + street::specs::middlelaneright_startpoint)  / 2 , 0},
                                                        {(street::specs::middlelaneright_startpoint + street::specs::rightlaneup.x) / 2 , 0}
                                                    };
                                            
    constexpr sf::Vector2f scaling_factor[types] = { {0.7, 0.6}, {0.3, 0.3}};
}; 

namespace zufall::specs
{
    constexpr uint8_t lanespawn[16] = {0, 1, 0, 2, 2, 1, 0, 0, 2, 1, 2, 1, 0, 1, 2, 0};
};

/* --------------------------------------------------------------------- */


// ***************************************************************************
// end of file
// ***************************************************************************