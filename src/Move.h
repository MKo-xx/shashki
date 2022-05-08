#pragma once

// Standard
#include <string>
#include <ostream>

// Shashki
#include "GameTypes.h"


namespace shashki
{

// TODO: split Move class into 2 classes, one for ConsoleGame and one for FastGame
//       and make Move a template in Game class

// _data - 16 bit
// C Z T S S S S S X X X E E E E E
// < -- 8 bits  -> < -- 8 bits  ->
// C flag - capture         - 0=no-capture 1=single-capture
// Z flag - side            - 0=BLACK 1=WHITE 
// T flag - type            - 0=MAN 1=KING
// S flags- 5 bits[0, 31]   - start position of piece before the move
// X flag - not used
// E flags- 5 bits[0, 31]   - end position of piece after the move
class Move
{
public:
    // Interface for FastGame
    Move(uint16_t data_, uint8_t capturedIndex_);

    // Interface for ConsoleGame
    Move(Capture capture_,
         Side side_,
         Type type_,
         int8_t si_, int8_t sj_,
         int8_t ei_, int8_t ej_);

    void setCapture(Capture capture_);
    void setSide(Side side_);
    void setType(Type type_);

    // Interface for ConsoleGame
    Capture capture() const;
    Side side() const;
    Type type() const;
    int8_t si() const; // start position
    int8_t sj() const;
    int8_t ei() const; // end position
    int8_t ej() const;

    // Interface for FastGame
    int8_t s() const;
    int8_t e() const;
    int8_t c() const;

private:
    uint16_t    _data;
    uint8_t     _capturedIndex; // TODO: this one is not used in ConsoleGame, so see above TODO to have 2 Move classes
};
std::ostream&
operator<<(std::ostream& os_, const Move& move_);
// TODO: make those functions member of Move class for ConsoleGame only
std::string
moveToStr(const Move& move_);
bool
strToMove(const std::string& str_, Move& move_, std::string& error_);


struct MoveResult
{
    bool valid;
    std::string error;
};


#include "Move.hpp"

}

