inline
std::ostream&
operator<<(std::ostream& os_, const Capture& capture_)
{
    os_ << ((capture_ == Capture::None) ? "None" : "Single");
    return os_;
}


inline
std::ostream&
operator<<(std::ostream& os_, const Side& side_)
{
    os_ << ((side_ == Side::White) ? "White" : "Black");
    return os_;
}


inline
std::ostream&
operator<<(std::ostream& os_, const Type& type_)
{
    os_ << ((Type::Man == type_) ? "Man" : "King");
    return os_;
}

