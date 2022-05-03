#pragma once

// Shashki
#include "Game.h"


namespace shashki
{

class Player
{
public:
    Player(Game& game_, Side side_);

protected:
    Game&   _game;
    Side    _side;
};

#include "Player.hpp"

}

