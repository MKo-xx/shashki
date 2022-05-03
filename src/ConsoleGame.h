#pragma once

// Standard
#include <array>
#include <ostream>
#include <vector>

// Shashki
#include "Game.h"


namespace shashki
{

class ConsoleGame : public Game
{
public:
    ConsoleGame();
    virtual ~ConsoleGame();

    // Game
    virtual bool isCaptureMandatory() const override;
    virtual bool isBackwardCaptureSupported() const override;
    virtual bool isMultiCaptureSupported() const override;

    virtual MoveResult move(const Move& move_) override;
    virtual std::vector<Move> getAllMoves(Side side_) const override;

    virtual void dumpCompact(std::ostream& os_) const override;
    virtual void dumpNice(std::ostream& os_) const override;

private:
    enum class Cell : char
    {
        WHITE_EMPTY = ' ',
        BLACK_EMPTY = '.',

        WHITE_MAN = 'w',
        WHITE_KING = 'W',

        BLACK_MAN = 'b',
        BLACK_KING = 'B',
    };

private:
    void init();
    bool isIndexesValid(const int8_t si, const int8_t sj,
                        const int8_t ei, const int8_t ej,
                        Cell my_man, Cell my_king,
                        std::string& error_) const;
    bool isCaptureAvailable(Side side_) const;
    bool moveImpl(Side side,
                  const int8_t si, const int8_t sj,
                  const int8_t ei, const int8_t ej,
                  std::string& error_);
    void crownKing(const int8_t i, const int8_t j);

private:
    std::array<std::array<Cell, 8>, 8>  _board; // Note: see init for layout
};


#include "ConsoleGame.hpp"

}

