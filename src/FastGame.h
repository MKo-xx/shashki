#pragma once

// Shashki
#include "Game.h"


namespace shashki
{

class FastGame : public Game
{
public:
    FastGame();
    virtual ~FastGame();

    // Game
    virtual bool isCaptureMandatory() const override;
    virtual bool isBackwardCaptureSupported() const override;
    virtual bool isMultiCaptureSupported() const override;

    virtual MoveResult move(const Move& move_) override;
    virtual std::vector<Move> getAllMoves(Side side_) const override;

    virtual void dumpCompact(std::ostream& os_) const override;
    virtual void dumpNice(std::ostream& os_) const override;

private:
    uint64_t    _white; // Note: see ctor for layout
    uint64_t    _black;
};


#include "FastGame.hpp"

}

