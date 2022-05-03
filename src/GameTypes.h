#pragma once

// Standard
#include <string>
#include <ostream>


namespace shashki
{

enum class Side
{
    Black,
    White,
};
std::ostream&
operator<<(std::ostream& os, const Side& side_);


// 16 bit
// C Z X S S S S S X X X E E E E E
// < -- 8 bits  -> < -- 8 bits  ->
// X flag - not used
// C flag - capture - move with capture
// Z flag - side - 0=BLACK 1=WHITE 
// S flags- 5 bits[0, 31] - start position of piece before the move
// E flags- 5 bits[0, 31] - end position of piece after the move
struct Move
{
    Move() {}
    explicit Move(uint16_t data_): data(data_) {}
    // TODO: Move to ConsoleGame and inherit from Move and add those methods and make a template in Game class
    // Create easily from ConsoleGame 
    Move(Side side_, bool capture_,
         int8_t si_, int8_t sj_,
         int8_t ei_, int8_t ej_);

    void setCapture(bool capture);
    void setSide(Side side);

    // Interface for ConsoleGame
    Side side() const;
    bool capture() const;
    int8_t si() const; // start position
    int8_t sj() const;
    int8_t ei() const; // end position
    int8_t ej() const;

//
    uint16_t    data;
};
// TODO: make member function of inherited Move class
std::string
moveToStr(const Move& move_);
bool
strToMove(const std::string& str_, Move& move_, std::string& error_);


struct MoveResult
{
    bool valid;
    std::string error;
};


#include "GameTypes.hpp"

}

