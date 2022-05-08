#pragma once

// Standard
#include <string>
#include <ostream>
#include <vector>

// Shashki
#include "Move.h"


namespace shashki
{

class Game
{
public:
    Game();
    virtual ~Game();

    virtual bool isCaptureMandatory() const = 0;
    virtual bool isBackwardCaptureSupported() const = 0;
    virtual bool isMultiCaptureSupported() const = 0;

    virtual MoveResult move(const Move& move_) = 0;
    virtual std::vector<Move> getAllMoves(Side side_) const = 0;

    virtual void dumpCompact(std::ostream& os_) const = 0;
    virtual void dumpNice(std::ostream& os_) const = 0;
};

#include "Game.hpp"

}

