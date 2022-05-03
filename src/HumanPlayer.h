#pragma once

// Shashki
#include "Player.h"


namespace shashki
{

class HumanPlayer : public Player
{
public:
    HumanPlayer(Game& game_, Side side_);

    bool move();
};


}
