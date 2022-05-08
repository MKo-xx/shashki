#pragma once

// Standard
#include <string>
#include <ostream>


namespace shashki
{

enum class Capture
{
    None,
    Single,
};
std::ostream&
operator<<(std::ostream& os_, const Capture& capture_);


enum class Side
{
    Black,
    White,
};
std::ostream&
operator<<(std::ostream& os_, const Side& side_);


enum class Type
{
    Man,
    King,
};
std::ostream&
operator<<(std::ostream& os_, const Type& type_);

#include "GameTypes.hpp"

}

