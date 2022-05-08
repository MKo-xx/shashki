inline
Move::Move(uint16_t data_, uint8_t capturedIndex_)
:   _data(data_)
,   _capturedIndex(capturedIndex_)
{
}


inline
Move::Move(Capture capture_,
           Side side_,
           Type type_,
           int8_t si_, int8_t sj_,
           int8_t ei_, int8_t ej_)
:   _data(0)
,   _capturedIndex(0)
{
    const auto s = 4 * si_ + (sj_ / 2);
    const auto e = 4 * ei_ + (ej_ / 2);
    _data = s + (e << 8);
    setCapture(capture_);
    setSide(side_);
    setType(type_);
}


inline
void
Move::setCapture(Capture capture_)
{
    if (Capture::Single == capture_)
    {
        _data |= 0x8000;
    }
    else
    {
        _data &= ~0x8000;
    }
}


inline
void
Move::setSide(Side side_)
{
    if (Side::White == side_)
    {
        _data |= 0x4000;
    }
    else
    {
        _data &= ~0x4000;
    }
}

inline
void
Move::setType(Type type_)
{
    if (Type::King == type_)
    {
        _data |= 0x2000;
    }
    else
    {
        _data &= ~0x2000;
    }
}


inline
Capture
Move::capture() const
{
    if (_data & 0x8000)
    {
        return Capture::Single;
    }
    else
    {
        return Capture::None;
    }
}


inline
Side
Move::side() const
{
    if (_data & 0x4000)
    {
        return Side::White;
    }
    else
    {
        return Side::Black;
    }
}


inline
Type
Move::type() const
{
    if (_data & 0x2000)
    {
        return Type::King;
    }
    else
    {
        return Type::Man;
    }
}


inline
int8_t
Move::si() const
{
    return (_data & 0x001F) / 4;
}


inline
int8_t
Move::sj() const
{
    auto x = 2 * ((_data & 0x001F) % 4);
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
    return ((_data & 0x1F00) >> 8)/ 4;
}


inline
int8_t
Move::ej() const
{
    auto x = 2 * (((_data & 0x1F00) >> 8) % 4);
    if (ei() % 2 == 0)
    {
        x += 1;
    }
    return x;
}


inline
int8_t
Move::s() const
{
    return _data & 0x001F;
}


inline
int8_t
Move::e() const
{
    return (_data & 0x1F00) >> 8;
}


inline
int8_t
Move::c() const
{
    return _capturedIndex;
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

    move_ = Move(move_.capture(), move_.side(), move_.type(), 7 - sy, sx, 7 - ey, ex);

    return true;
}


inline
std::ostream&
operator<<(std::ostream& os_, const Move& move_)
{
    os_ << move_.capture() << " " << move_.side() << " " << move_.type() << " " << moveToStr(move_) << " capture=" << int(move_.c());
    return os_;
}

