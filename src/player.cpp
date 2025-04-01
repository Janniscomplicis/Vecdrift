
/* --------------------------------------------------------------------- */
/* INCLUDE HEADER FILES */
#include "player.hpp"
/* --------------------------------------------------------------------- */
/* DEFINITIONS */
Player_T::Player_T() :  position(player::specs::player_default_position), sprite(texture)
{
    if( !texture.loadFromFile(player::specs::filepath))
    {
        std::cout << "failure" << std::endl;
    }
    sprite.setTexture(this->texture, 1);
    sprite.setOrigin(sf::Vector2f( texture.getSize().x / 2 , texture.getSize().y / 2));
    sprite.setScale(player::specs::scale);    
    lane_position = MIDDLE;
    sprite.setPosition(this->position);
    behaviour = &Player_T::idle;
};


void Player_T::idle(){};

void Player_T::update()
{   
    if( position.x != player::specs::lane_position[lane_position + 1])
    {
        position.x += speed;
        return;
    }
    //std::cout << lane_position + 1 << std::endl;
    sprite.setRotation(player::specs::lanes_angles[lane_position + 1]);
    behaviour = &Player_T::idle;
};

void Player_T::chance_status(Player_Position newposition)
{   
    if( newposition == lane_position )
    { 
        return;        
    }
    sprite.setRotation(player::specs::switching_angles[newposition + 1]);
    speed = player::specs::speed[newposition + 1];
    lane_position = static_cast<Player_Position> (newposition + lane_position);
    behaviour = &Player_T::update;
};

void Player_T::handle(sf::RenderWindow& window)
{
    (this->*behaviour)();
    draw(window);
};


void Player_T::draw(sf::RenderWindow& window)
{
    sprite.setPosition(position);
    sprite.setRotation(player::specs::lanes_angles[lane_position + 1]);
    //std::cout << sprite.getGlobalBounds().size.x << std::endl;
    //std::cout << sprite.getGlobalBounds().size.y << std::endl;
    #if( HitBox == 1)
    sprite.setRotation(sf::degrees(0));
    sf::RectangleShape b(sprite.getGlobalBounds().size);
    b.setPosition(sprite.getPosition()); 
    b.setOrigin(sf::Vector2f(b.getSize().x / 2, b.getSize().y /2));
    b.setRotation(sf::degrees(-5));
    window.draw(b);
    #endif
    window.draw(sprite);
    
    
};

sf::FloatRect Player_T::getBounds()
{
    sprite.setRotation(sf::degrees(0));
    return sprite.getGlobalBounds();
};