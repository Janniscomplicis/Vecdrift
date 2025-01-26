#include "street.hpp"
#define windowsize2 1840/8


sf::Vertex middlelane0[] =
{
    sf::Vertex(sf::Vector2f(windowsize2 * 3.25, 0), sf::Color::White),
    sf::Vertex(sf::Vector2f( 743.9,	 63.22 ), sf::Color::White),

    sf::Vertex(sf::Vector2f( 743.9,	 63.22 ), sf::Color::Black),
    sf::Vertex(sf::Vector2f( 729.53, 315.65), sf::Color::Black),

    sf::Vertex(sf::Vector2f( 729.53, 315.65), sf::Color::White),
    sf::Vertex(sf::Vector2f( 725.93, 378.87), sf::Color::White),

    sf::Vertex(sf::Vector2f( 725.93, 378.87), sf::Color::Black),
    sf::Vertex(sf::Vector2f( 711.56, 631.3 ), sf::Color::Black),

    sf::Vertex(sf::Vector2f( 711.56, 631.3 ), sf::Color::White),
    sf::Vertex(sf::Vector2f( 707.96, 694.52), sf::Color::White),

    sf::Vertex(sf::Vector2f( 707.96, 694.52), sf::Color::Black),
    sf::Vertex(sf::Vector2f( 693.59, 946.95), sf::Color::Black),

    sf::Vertex(sf::Vector2f( 693.59, 946.95), sf::Color::White),
    sf::Vertex(sf::Vector2f( 690.0 , 1010.51), sf::Color::White),
    
};

#define Offset1 20
sf::Vertex middlelane1[] =
{
    sf::Vertex(sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::Black),
    sf::Vertex(sf::Vector2f( 744.94   , 44.95),  sf::Color::Black),

    sf::Vertex(sf::Vector2f( 744.94   , 44.95),  sf::Color::White),
    sf::Vertex(sf::Vector2f( 741.34   , 108.17), sf::Color::White),

    sf::Vertex(sf::Vector2f( 741.34   , 108.17), sf::Color::Black),
    sf::Vertex(sf::Vector2f( 726.97   , 360.6),  sf::Color::Black),

    sf::Vertex(sf::Vector2f( 726.97   , 360.6),  sf::Color::White),
    sf::Vertex(sf::Vector2f( 723.37   , 423.82), sf::Color::White),

    sf::Vertex(sf::Vector2f( 723.37   , 423.82), sf::Color::Black),
    sf::Vertex(sf::Vector2f( 709      , 676.25), sf::Color::Black),

    sf::Vertex(sf::Vector2f( 709      , 676.25), sf::Color::White),
    sf::Vertex(sf::Vector2f( 705.4    , 739.47), sf::Color::White),

    sf::Vertex(sf::Vector2f( 705.4    , 739.47), sf::Color::Black),
    sf::Vertex(sf::Vector2f( 691.03   , 991.9),  sf::Color::Black),

    sf::Vertex(sf::Vector2f( 691.03   , 991.9),  sf::Color::White),
    sf::Vertex(sf::Vector2f( 689.99   , 1010.51),sf::Color::White)
};

#define Offset2 40
sf::Vertex middlelane2[] =
{
    sf::Vertex(sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::Black),
    sf::Vertex(sf::Vector2f(742.38   , 89.91), sf::Color::Black),

    sf::Vertex(sf::Vector2f(742.38   , 89.91),  sf::Color::White),
    sf::Vertex(sf::Vector2f(738.78   , 153.13), sf::Color::White),

    sf::Vertex(sf::Vector2f(738.78   , 153.13), sf::Color::Black),
    sf::Vertex(sf::Vector2f(724.41   , 405.56), sf::Color::Black),

    sf::Vertex(sf::Vector2f(724.41   , 405.56), sf::Color::White),
    sf::Vertex(sf::Vector2f(720.81   , 468.78), sf::Color::White),

    sf::Vertex(sf::Vector2f(720.81   , 468.78), sf::Color::Black),
    sf::Vertex(sf::Vector2f(706.44   , 721.21), sf::Color::Black),

    sf::Vertex(sf::Vector2f(706.44   , 721.21), sf::Color::White),
    sf::Vertex(sf::Vector2f(702.84   , 784.43), sf::Color::White),

    sf::Vertex(sf::Vector2f(702.84   , 784.43), sf::Color::Black),
    sf::Vertex(sf::Vector2f(688.47   , 1036.86),sf::Color::Black)
};

#define Offset3 60
sf::Vertex middlelane3[] =
{
    sf::Vertex(sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::Black),
    sf::Vertex(sf::Vector2f(739.82   , 134.86), sf::Color::Black),

    sf::Vertex(sf::Vector2f(739.82   , 134.86), sf::Color::White),
    sf::Vertex(sf::Vector2f(736.22   , 198.08), sf::Color::White),

    sf::Vertex(sf::Vector2f(736.22   , 198.08), sf::Color::Black),
    sf::Vertex(sf::Vector2f(721.85   , 450.51), sf::Color::Black),

    sf::Vertex(sf::Vector2f(721.85   , 450.51), sf::Color::White),
    sf::Vertex(sf::Vector2f(718.25   , 513.73), sf::Color::White),

    sf::Vertex(sf::Vector2f(718.25   , 513.73), sf::Color::Black),
    sf::Vertex(sf::Vector2f(703.8    , 766.16), sf::Color::Black),

    sf::Vertex(sf::Vector2f(703.8    , 766.16), sf::Color::White),
    sf::Vertex(sf::Vector2f(700.28   , 829.38), sf::Color::White),

    sf::Vertex(sf::Vector2f(700.28   , 829.38), sf::Color::Black),
    sf::Vertex(sf::Vector2f(685.91   , 1081.81),sf::Color::Black)
};


#define Offset4 80
sf::Vertex middlelane4[] =
{
    sf::Vertex(sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::Black),
    sf::Vertex(sf::Vector2f(737.26   , 179.81), sf::Color::Black),

    sf::Vertex(sf::Vector2f(737.26   , 179.81), sf::Color::White),
    sf::Vertex(sf::Vector2f(733.66   , 243.03), sf::Color::White),

    sf::Vertex(sf::Vector2f(733.66   , 243.03), sf::Color::Black),
    sf::Vertex(sf::Vector2f(719.29   , 495.46), sf::Color::Black),

    sf::Vertex(sf::Vector2f(719.29   , 495.46), sf::Color::White),
    sf::Vertex(sf::Vector2f(715.69   , 558.68), sf::Color::White),

    sf::Vertex(sf::Vector2f(715.69   , 558.68), sf::Color::Black),
    sf::Vertex(sf::Vector2f(701.32   , 811.11), sf::Color::Black),

    sf::Vertex(sf::Vector2f(701.32   , 811.11), sf::Color::White),
    sf::Vertex(sf::Vector2f(697.72   , 874.33), sf::Color::White),

    sf::Vertex(sf::Vector2f(697.72   , 874.33), sf::Color::Black),
    sf::Vertex(sf::Vector2f(683.35   , 1126.76), sf::Color::Black)
};

#define Offset5 100
sf::Vertex middlelane5[] =
{
    sf::Vertex(sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::Black),
    sf::Vertex(sf::Vector2f(734.7    , 224.77), sf::Color::Black),

    sf::Vertex(sf::Vector2f(734.7    , 224.77), sf::Color::White),
    sf::Vertex(sf::Vector2f(731.1    , 287.99), sf::Color::White),

    sf::Vertex(sf::Vector2f(731.1    , 287.99), sf::Color::Black),
    sf::Vertex(sf::Vector2f(716.73   , 540.42), sf::Color::Black),
    
    sf::Vertex(sf::Vector2f(716.73   , 540.42), sf::Color::White),
    sf::Vertex(sf::Vector2f(713.13   , 603.64), sf::Color::White),

    sf::Vertex(sf::Vector2f(713.13   , 603.64), sf::Color::Black),
    sf::Vertex(sf::Vector2f(698.76   , 856.07), sf::Color::Black),

    sf::Vertex(sf::Vector2f(698.76   , 856.07), sf::Color::White),
    sf::Vertex(sf::Vector2f(695.16   , 919.29), sf::Color::White),

    sf::Vertex(sf::Vector2f(695.16   , 919.29), sf::Color::Black),
    sf::Vertex(sf::Vector2f(680.79   , 1171.72), sf::Color::Black)
};

#define Offset6 120
sf::Vertex middlelane6[] =
{
    sf::Vertex(sf::Vector2f(windowsize2 * 3.25   , 0), sf::Color::White),
    sf::Vertex(sf::Vector2f(746.51   , 17.3  ) , sf::Color::White),

    sf::Vertex(sf::Vector2f(746.51   , 17.3  ), sf::Color::Black),
    sf::Vertex(sf::Vector2f(732.14   , 269.72), sf::Color::Black),

    sf::Vertex(sf::Vector2f(732.14   , 269.72), sf::Color::White),
    sf::Vertex(sf::Vector2f(728.54   , 332.94), sf::Color::White),

    sf::Vertex(sf::Vector2f(728.54   , 332.94), sf::Color::Black),
    sf::Vertex(sf::Vector2f(714.17   , 585.37), sf::Color::Black),

    sf::Vertex(sf::Vector2f(714.17   , 585.37), sf::Color::White),
    sf::Vertex(sf::Vector2f(710.57   , 648.59), sf::Color::White),

    sf::Vertex(sf::Vector2f(710.57   , 648.59), sf::Color::Black),
    sf::Vertex(sf::Vector2f(696.2    , 901.02), sf::Color::Black),

    sf::Vertex(sf::Vector2f(696.2    , 901.02), sf::Color::White),
    sf::Vertex(sf::Vector2f(692.6    , 964.24), sf::Color::White),

    sf::Vertex(sf::Vector2f(692.6    , 964.24), sf::Color::Black),
    sf::Vertex(sf::Vector2f(678.23   , 1216.67), sf::Color::Black)
        
};


sf::Vertex middlelane7[] =
{
    sf::Vertex(sf::Vector2f(windowsize2 * 3.25, 0), sf::Color::White),
    sf::Vertex(sf::Vector2f(743.96, 62.25), sf::Color::White),

    sf::Vertex(sf::Vector2f(743.96   , 62.25), sf::Color::Black),
    sf::Vertex(sf::Vector2f(729.58   , 314.68), sf::Color::Black),

    sf::Vertex(sf::Vector2f(729.58   , 314.68), sf::Color::White),
    sf::Vertex(sf::Vector2f(725.98   , 377.9), sf::Color::White),

    sf::Vertex(sf::Vector2f(725.98   , 377.9), sf::Color::Black),
    sf::Vertex(sf::Vector2f(711.61   , 630.33), sf::Color::Black),
    
    sf::Vertex(sf::Vector2f(711.61   , 630.33), sf::Color::White),
    sf::Vertex(sf::Vector2f(708.01   , 693.55), sf::Color::White),

    sf::Vertex(sf::Vector2f(708.01   , 693.55), sf::Color::Black),
    sf::Vertex(sf::Vector2f(693.64   , 945.98), sf::Color::Black),

    sf::Vertex(sf::Vector2f(693.64   , 945.98), sf::Color::White),
    sf::Vertex(sf::Vector2f(690.04   , 1009.2), sf::Color::White),

    sf::Vertex(sf::Vector2f(690.04   , 1009.2), sf::Color::Black),
    sf::Vertex(sf::Vector2f(675.67   , 1261.63), sf::Color::Black)       
};

sf::Vertex (* middlelanes[])[] =
{
    &middlelane0,
    &middlelane1,
    &middlelane2,
    &middlelane3,
    &middlelane4,
    &middlelane5,
    &middlelane6,
    &middlelane7
};

street_h::street_h() : lane_left(sf::LineStrip ,2), lane_right(sf::LineStrip ,2)
{   
    lane_left[0] = sf::Vertex(sf::Vector2f(100, 0), sf::Color::White);
    lane_left[1] = sf::Vertex(sf::Vector2f(100,500), sf::Color::White);
    lane_right[0] = sf::Vertex(sf::Vector2f(100,100), sf::Color::White);
    lane_right[1] = sf::Vertex(sf::Vector2f(100,500), sf::Color::White);
}

#if(1)
street_h::street_h(sf::Vector2u windowsize) : lane_left(sf::LineStrip ,2), lane_right(sf::LineStrip ,2)
    #if(0)
    , middlelanes{ sf::Vertex(sf::Vector2f(1011 / 8 * 6, 0), sf::Color::White),
        sf::Vertex(sf::Vector2f(1011 / 8 * 4, 1854), sf::Color::White),
        sf::Vertex(sf::Vector2f((1011 / 8) * 5, 0), sf::Color::White),
        sf::Vertex(sf::Vector2f((1011 / 8) * 6, 1854), sf::Color::White)}
    #endif
{
    double x = windowsize.x / 8;
    std::cout << windowsize.x << std::endl;
    std::cout << windowsize2 << std::endl;
    std::cout << x << std::endl;
    lane_left[0] = sf::Vertex(sf::Vector2f( x * 2, 0), sf::Color::White);
    lane_left[1] = sf::Vertex(sf::Vector2f( x * 1.5, windowsize.y), sf::Color::White);
    lane_right[0] = sf::Vertex(sf::Vector2f( x * 6, 0),sf::Color::White);
    lane_right[1] = sf::Vertex(sf::Vector2f( x * 6.5, windowsize.y), sf::Color::White); 
    //sf::Vertex(sf::Vector2f(100,000), sf::Color::Black),
        
}

void street_h::draw(sf::RenderWindow& window)
{
    window.draw(this->middlelanes, 4, sf::Lines);
    window.draw(this->lane_left);
    window.draw(this->lane_right);
}
#endif