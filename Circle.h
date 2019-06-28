//
// Created by utec on 28/06/19.
//

#ifndef VIERNES_CIRCLE_H
#define VIERNES_CIRCLE_H

#include "Window.h"

#include "Component.h"
#include <SFML/Graphics.hpp>
using namespace sf;
class Circle: protected Component{
    float x;
    float y;
    float weight;
    float height;
    void onClick(function<void(sf::Event)>) override ;
    void onMouseMove(function<void(sf::Event)>) override ;
    void draw() override ;
};
#endif //VIERNES_CIRCLE_H
