
/* --------------------------------------------------------------------- */
/* INCLUDE HEADER FILES */
#include "enemy.hpp"
/* --------------------------------------------------------------------- */
/* DEFINITIONS */


Enemy_T::Enemy_T() : texture(), sprite(this->texture[0])
{
    for(uint8_t i = 0; i < enemy::specs::types; ++i)
    {
        if( !texture[i].loadFromFile(enemy::specs::filepath[i]))
        {
            std::cout << " texture enemy.png not found " << std::endl;
        }      
    }
    for(uint8_t i = 0; i < enemy::specs::amount; ++i)
    {
        status[i] = enemy_status::ENEMY_DEAD;
        types[i] = enemy_type::ENEMY_TRUCK;
    }
    behaviour = &Enemy_T::update;
};

Enemy_T::~Enemy_T(){};

void Enemy_T::spawn(uint8_t amount, int randomnumber)
{
    for(uint8_t i = 0; i < enemy::specs::amount; ++i)
    {
        if( status[i] == enemy_status::ENEMY_DEAD)
        {
            int lane = zufall::specs::lanespawn[randomnumber & 0x0F];
            lanes[i] = lane;
            std::cout << lane << std::endl;
            types[i] = (enemy_type)(randomnumber & 1);
            status[i] = enemy_status::ENEMY_ALIVE;
            position[i] = enemy::specs::starting_position[lane];
            velocity[i].y = enemy::specs::velocity[lane];
            velocity[i].x = street::specs::lanewidth[lane] / (window::specs::window_size.y / velocity[i].y); 
            //std::cout << (int) i << ":" << std::endl;
            //std::cout << "type: " <<  types[i] << "  status: " << status[i] << "  positionx: " << position[i].x  << "  positiony: " << position[i].y << std::endl;
            break;
        }
    }   
}

void Enemy_T::update()
{
    for(uint8_t i = 0; i < enemy::specs::amount; ++i)
    {
        if(status[i] == enemy_status::ENEMY_ALIVE)
        {
            position[i] += velocity[i];
            if( position[i].y > window::specs::window_size.y)
            {
                status[i] = enemy_status::ENEMY_DEAD;
            }
        }  
    }
};

void Enemy_T::draw(sf::RenderWindow& window)
{
    for(uint8_t i = 0; i < enemy::specs::amount; ++i)
    {
        if(status[i] == enemy_status::ENEMY_ALIVE)
        {
            sprite.setTexture(texture[types[i]], 1);
            sprite.setPosition(position[i]);
            sprite.setOrigin(sf::Vector2f(texture[types[i]].getSize().x / 2, texture[types[i]].getSize().y / 2));
            sprite.setScale(enemy::specs::scaling_factor[types[i]]);
            sprite.setRotation(player::specs::lanes_angles[lanes[i]]);

            #if( HitBox == 1)
            sf::RectangleShape b(sprite.getGlobalBounds().size);
            b.setPosition(sprite.getPosition()); 
            b.setOrigin(sf::Vector2f(b.getSize().x / 2, b.getSize().y /2)); 
            //b.setOrigin(sf::Vector2f(texture[types[i]].getSize().x / 2, texture[types[i]].getSize().y / 2)); 
            b.setRotation(sprite.getRotation());
            window.draw(b);
            #endif

            window.draw(sprite);

        }  
    }
};

void Enemy_T::handle(sf::RenderWindow& window)
{
    (this->*behaviour)();
    draw(window);
};

std::optional<sf::FloatRect> Enemy_T::checking_collision(sf::FloatRect player)
{
    std::optional<sf::FloatRect> collision(std::nullopt);
    #if(1)
    for(uint8_t i = 0; i < enemy::specs::amount; ++i)
    {
        if(status[i] == enemy_status::ENEMY_ALIVE)
        {
            std::cout << (int)i << ":   ";
            std::cout << "player x: " << player.position.x << "   " << "y: " << player.position.y << std::endl;
            //sprite.setRotation(player::specs::lanes_angles[lanes[i]]);
            sprite.setRotation(sf::degrees(0));
            sprite.setOrigin(sf::Vector2f(texture[types[i]].getSize().x / 2, texture[types[i]].getSize().y / 2));
            sprite.setPosition(position[i]);
            sprite.setScale(enemy::specs::scaling_factor[types[i]]);
            std::cout << "Enemy x: "  << position[i].x << "  y: " << position[i].y << std::endl;
            collision = player.findIntersection(sprite.getGlobalBounds());
            if( collision.has_value() )
            {
                return collision;
            }
        }
    }
    #endif
    return std::nullopt;
};