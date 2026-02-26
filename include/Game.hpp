#pragma once

#include "Player.hpp"
#include "Attribute.hpp"
#include "Map.hpp"

class Game :
{
    private:
        Player player;
        std::string _name;

    public:
        Game();
        void    start();

    signals:
};