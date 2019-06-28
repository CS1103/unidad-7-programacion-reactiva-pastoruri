//
// Created by utec on 28/06/19.
//

#ifndef VIERNES_WINDOW_H
#define VIERNES_WINDOW_H
#include "Component.h"
#include <algorithm>
#include <vector>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
namespace pasto {
    class Window {
    protected:
        vector<Component> controls;
    public:
        Window() =
        void

        run();

        void addComponent();

        void removeComponent();

    };

    void Window::run(){

    }

    void Window::addComponent(Component componente) {
        controls.push_back(componente);
    }

    void Window::removeComponent(Component * componente) {
        auto item = find(begin(controls), end(controls), componente);

        if (item != end(controls))
            controls.erase(item);

    }
}
#endif //VIERNES_WINDOW_H
