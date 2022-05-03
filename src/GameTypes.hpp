inline
std::ostream&
operator<<(std::ostream& os, const Side& side_)
{
    os << ((side_ == Side::White) ? "White" : "Black");
    return os;
}


inline
Move::Move(Side side_, bool capture_,
           int8_t si_, int8_t sj_,
           int8_t ei_, int8_t ej_)
{
    const auto s = 4 * si_ + (sj_ / 2);
    const auto e = 4 * ei_ + (ej_ / 2);
    data = s + (e << 8);
    setCapture(capture_);
    setSide(side_);
}


inline
void
Move::setCapture(bool capture_)
{
    if (capture_)
    {
        data |= 0x8000;
    }
    else
    {
        data &= 0x7FFF;
    }
}


inline
void
Move::setSide(Side side_)
{
    if (Side::White == side_)
    {
        data |= 0x4000;
    }
    else
    {
        data &= 0xBFFF;
    }
}

inline
Side
Move::side() const
{
    if (data & 0x4000)
    {
        return Side::White;
    }
    else
    {
        return Side::Black;
    }
}


inline
bool
Move::capture() const
{
    return data & 0x8000;
}


inline
int8_t
Move::si() const
{
    return (data & 0x001F) / 4;
}


inline
int8_t
Move::sj() const
{
    auto x = 2 * ((data & 0x001F) % 4);
    if (si() % 2 == 0)
    {
        x += 1;
    }
    return x;
}


inline
int8_t
Move::ei() const
{
    return ((data & 0x1F00) >> 8)/ 4;
}


inline
int8_t
Move::ej() const
{
    auto x = 2 * (((data & 0x1F00) >> 8) % 4);
    if (ei() % 2 == 0)
    {
        x += 1;
    }
    return x;
}


inline
std::string
moveToStr(const Move& move_)
{
    std::string r("xxxx");
    r[0] = 'a' + move_.sj();
    r[1] = '1' + (7 - move_.si());
    r[2] = 'a' + move_.ej();
    r[3] = '1' + (7 - move_.ei());
    return r;
}


inline
bool
strToMove(const std::string& str_, Move& move_, std::string& error_)
{
    if (str_.size() != 4)
    {
        error_ = "Please provide in format a1b2";
        return false;
    }

    auto validIndex = [](int8_t i) { return i >=0 and i <= 7; };

    const int8_t sx = (str_[0] - 'a');
    const int8_t sy = (str_[1] - '1');
    if (!validIndex(sx) or !validIndex(sy))
    {
        error_ = "Invalid start point";
        return false;
    }

    const int8_t ex = (str_[2] - 'a');
    const int8_t ey = (str_[3] - '1');
    if (!validIndex(ex) or !validIndex(ey))
    {
        error_ = "Invalid end point";
        return false;
    }

    move_ = Move(move_.side(), move_.capture(), 7 - sy, sx, 7 - ey, ex);

    return true;
}

