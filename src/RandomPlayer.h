#pragma once

// Shashki
#include "Player.h"


namespace shashki
{


class RandomPlayer : public Player
{
public:
    RandomPlayer(Game& game_, Side side_);

    bool move();
};


}
