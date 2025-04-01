
/* --------------------------------------------------------------------- */
/* INCLUDE HEADER FILES */
#include "game.hpp"

/* --------------------------------------------------------------------- */
/* DEFINITIONS */



game_h::game_h() :  window(sf::VideoMode::getDesktopMode() /* sf::VideoMode({1024, 768})*/  , "Vecdrift"), 
   player(), street(), text(font), enemies(), boom(explosiones[0])
{
    game_handler = &game_h::run;
    event_handler = &game_h::events_run;
    
    /* load font png */
    if( !font.openFromFile("8bitOperatorPlus8-Regular.ttf"))
    {
        std::cout << " Font 8bitOperatorPlus8-Regular.ttf  not found " << std::endl;
    }
    text.setFont(font);

    /* load arrow png */
    if( !arrow.loadFromFile(window::specs::arrowfilepath) )
    {
        std::cout << " texture arrow.png not found " << std::endl;
    }

    #if(1)
    /* load explosion png */
    for( uint8_t i = 0; i < explosion::specs::explosion_amount; ++i)
    {
        if( !explosiones[i].loadFromFile(explosion::specs::filepath[i]))
        {
            std::cout << "failure" << std::endl;
        }
    }
    #endif
};

void game_h::execute()
{
    while( status != game_status::STOP )
    {
        (this->*event_handler)();
        (this->*game_handler)();
    }
    window.close();
};

void game_h::checking_collision()
{
    overlap = enemies.checking_collision(player.getBounds());
    if(overlap.has_value())
    { 
       game_handler = &game_h::explosion;
       counter = 0;
    };
};

void game_h::events_run()
{
    while (const std::optional event = window.pollEvent())
    {
        // Request for closing the window
        if (event->is<sf::Event::Closed>() or event->is<sf::Event::KeyPressed>() && event->getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::Escape)
        {
            status = game_status::STOP;
            break;
        }
        if( event->is<sf::Event::KeyPressed>() && event->getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::A)
        {
            player.chance_status(Player_Position::LEFT);
            break;
        }
        if( event->is<sf::Event::KeyPressed>() && event->getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::D)
        {
            player.chance_status(Player_Position::RIGHT);
            break;
        }
        if( event->is<sf::Event::KeyPressed>() && event->getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::T)
        {
            enemies.spawn(1, std::experimental::randint(0, 16));
            break;
        }
        if( event->is<sf::Event::KeyPressed>() && event->getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::Enter)
        {
            status = game_status::PAUSE;
            game_handler = &game_h::pause;
            event_handler = &game_h::events_pause;
            counter = 0;
            break;
        }
    }
};

void game_h::events_pause()
{
    while (const std::optional event = window.pollEvent())
    {
        // Request for closing the window
        if (event->is<sf::Event::Closed>() or event->is<sf::Event::KeyPressed>() && event->getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::Escape)
        {
            status = game_status::STOP;
            break;
        }
        if( event->is<sf::Event::Resized>())
        {
           // window.clear();
           // pause_drawing();
           // window.display();
        }
        if( event->is<sf::Event::KeyPressed>() && event->getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::W)
        {
           ++counter;
        }
        if( event->is<sf::Event::KeyPressed>() && event->getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::S)
        {
            ++counter;
        }
        if( event->is<sf::Event::KeyPressed>() && event->getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::Enter)
        {
            if( (counter & (uint64_t)1) != (uint64_t)0 ) 
            {
                status = game_status::STOP;
                break;
            }
            game_handler = &game_h::run;
            event_handler = &game_h::events_run;
        }
    }
};

void game_h::run()
{   
    window.clear();
    player.handle(window);
    street.handle(window);
    enemies.handle(window);
    checking_collision();
    window.display();

}

void game_h::pause()
{   
    window.clear();
    player.draw(window);
    enemies.draw(window);
    street.draw(window);
    pause_drawing();
    window.display();
}

void game_h::pause_drawing()
{   
    sf::RectangleShape rect( window::specs::windowpause_size);
    rect.setOutlineColor(sf::Color::White);
    rect.setFillColor(sf::Color::Black);
    rect.setOutlineThickness(1.f);
    rect.setPosition(window::specs::windowpause_position);
    window.draw(rect);
    
    /* Pause */
    text.setPosition(window::specs::string_pause_pos);
    text.setString(" Pause ");
    window.draw(text);

    /* resume */
    text.setPosition(window::specs::string_resume_pos);
    text.setString(" Resume ");
    window.draw(text);

    /* exit */
    text.setPosition(window::specs::string_exit_pos);
    text.setString(" Exit ");
    window.draw(text);
    
    /* arrow */
    sf::Sprite sprite_arrow(arrow);
    sprite_arrow.scale(sf::Vector2f(0.1, 0.1));
    sprite_arrow.setPosition(window::specs::rect_resume_exit_pos[counter & (uint64_t)1]);
    window.draw(sprite_arrow);
};

void game_h::explosion()
{
    uint8_t verschieben = 8;
    boom.setTexture(explosiones[0], 1);
    boom.setPosition(overlap.value().getCenter());
    boom.setOrigin(sf::Vector2f( explosiones[0].getSize().x / 2 , explosiones[0].getSize().y / 2));
    boom.setScale(explosion::specs::explosion_scales[0]);
    while( (counter >> verschieben)  <  8)
    {
        window.clear();
        player.draw(window);
        enemies.draw(window);
        street.draw(window);
        window.draw(boom, sf::BlendAlpha);
        window.display();
        boom.setTexture(explosiones[(counter >> verschieben)], 1);
        boom.setScale(explosion::specs::explosion_scales[counter >> verschieben]);
        sf::Vector2u neworigin = boom.getTexture().getSize();
        boom.setOrigin(sf::Vector2f( neworigin.x / 2 , neworigin.y / 2));
        ++counter;
    }
    std::cout << counter ;
    status = game_status::STOP;
};
