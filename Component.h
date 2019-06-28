//
// Created by utec on 28/06/19.
//

#ifndef VIERNES_COMPONENT_H
#define VIERNES_COMPONENT_H
#include <functional>
#include "Window.h"
#include "Event.h"
#include <SFML/Graphics.hpp>
using namespace sf;
class Component{
private:
    Window parent;
protected:
    function<void(Event)> clickEvent;
    function<void(Event> mouseMoveEvent;
public:
    virtual void onClick(function<void(sf::Event)>)=0;
    virtual void onMouseMove(function<void(sf::Event)>)=0;
    virtual void draw()=0;
};

void Component::draw(){}




#endif //VIERNES_COMPONENT_H

