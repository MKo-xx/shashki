// Shashki
#include "ConsoleGame.h"
#include "Logging.h"


using namespace shashki;


ConsoleGame::ConsoleGame()
{
    // empty board
    for (int8_t i = 0; i < 8; ++i)
    {
        for (int8_t j = 0; j < 8; ++j)
        {
            if (not ((i % 2 == 0) xor (j % 2 == 0)))
            {
                _board[i][j] = Cell::WHITE_EMPTY;
            }
            else
            {
                _board[i][j] = Cell::BLACK_EMPTY;
            }
        }
    }

    //
    init();
}


ConsoleGame::~ConsoleGame()
{
}


void
ConsoleGame::init()
{
    /*
        i/j 0   1   2   3   4   5   6   7
        0       b       b       b       b
        1   b       b       b       b   
        2       b       b       b       b
        3   .       .       .       .
        4       .       .       .       .
        5   w       w       w       w   
        6       w       w       w       w
        7   w       w       w       w
    */
    _board[0][1] = Cell::BLACK_MAN; _board[0][3] = Cell::BLACK_MAN; _board[0][5] = Cell::BLACK_MAN; _board[0][7] = Cell::BLACK_MAN;
    _board[1][0] = Cell::BLACK_MAN; _board[1][2] = Cell::BLACK_MAN; _board[1][4] = Cell::BLACK_MAN; _board[1][6] = Cell::BLACK_MAN;
    _board[2][1] = Cell::BLACK_MAN; _board[2][3] = Cell::BLACK_MAN; _board[2][5] = Cell::BLACK_MAN; _board[2][7] = Cell::BLACK_MAN;

    _board[5][0] = Cell::WHITE_MAN; _board[5][2] = Cell::WHITE_MAN; _board[5][4] = Cell::WHITE_MAN; _board[5][6] = Cell::WHITE_MAN;
    _board[6][1] = Cell::WHITE_MAN; _board[6][3] = Cell::WHITE_MAN; _board[6][5] = Cell::WHITE_MAN; _board[6][7] = Cell::WHITE_MAN;
    _board[7][0] = Cell::WHITE_MAN; _board[7][2] = Cell::WHITE_MAN; _board[7][4] = Cell::WHITE_MAN; _board[7][6] = Cell::WHITE_MAN;
}


MoveResult
ConsoleGame::move(const Move& move_)
{
    LOG_DEBUG("ConsoleGame: Move=" << move_);

    MoveResult res;
    res.valid = moveImpl(move_.side(), move_.si(), move_.sj(), move_.ei(), move_.ej(), res.error);
    return res;
}



bool 
ConsoleGame::isIndexesValid(const int8_t si, const int8_t sj,
                            const int8_t ei, const int8_t ej,
                            Cell my_man, Cell my_king,
                            std::string& error_) const
{
    auto validIndex = [](int8_t i) { return i >=0 and i <= 7; };
    if (!validIndex(si) or !validIndex(sj) or !validIndex(ei) or !validIndex(ej))
    {
        error_ = "Invalid coordinate";
        return false;
    }

    if (_board[si][sj] != my_man and _board[si][sj] != my_king)
    {
        error_ = "Move your own piece";
        return false;
    }

    if (Cell::WHITE_EMPTY == _board[ei][ej])
    {
        error_ = "Someone is drunk";
        return false;
    }

    if (Cell::BLACK_EMPTY != _board[ei][ej])
    {
        error_ = "Move to empty cell only";
        return false;
    }

    if (std::abs(ei - si) != std::abs(ej - sj))
    {
        error_ = "Not a diagonal move";
        return false;
    }

    const int8_t diff = std::abs(ei - si);
    if (0 == diff)
    {
        error_ = "Not moved at all";
        return false;
    }

    return true;
}


bool
ConsoleGame::isCaptureAvailable(Side side_) const
{
    auto moves = getAllMoves(side_);
    for (auto& m : moves)
    {
        if (Capture::None != m.capture())
        {
            return true;
        }
    }

    return false;
}


bool
ConsoleGame::moveImpl(Side side_,
                      const int8_t si, const int8_t sj,
                      const int8_t ei, const int8_t ej,
                      std::string& error_)
{
    LOG_DEBUG("ConsoleGame: Trying to move " << side_ << " from " << int(si) << "," << int(sj) << " to " << int(ei) << "," << int(ej));
    const Cell my_man  = (side_ == Side::White) ? Cell::WHITE_MAN : Cell::BLACK_MAN;
    const Cell my_king = (side_ == Side::White) ? Cell::WHITE_KING: Cell::BLACK_KING;
    const Cell op_man  = (side_ == Side::White) ? Cell::BLACK_MAN : Cell::WHITE_MAN;
    const Cell op_king = (side_ == Side::White) ? Cell::BLACK_KING: Cell::WHITE_KING;

    if (!isIndexesValid(si, sj, ei, ej, my_man, my_king, error_))
    {
        return false;
    }

    const bool mandatoryCapture = isCaptureAvailable(side_);

    const int8_t diff = std::abs(ei - si);
    if (1 == diff)
    {
        if (_board[si][sj] == Cell::WHITE_MAN)
        {
            if (ei > si)
            {
                error_ = "Can't move backward";
                return false;
            }
        }
        else if (_board[si][sj] == Cell::BLACK_MAN)
        {
            if (ei < si)
            {
                error_ = "Can't move backward";
                return false;
            }
        }

        if (mandatoryCapture)
        {
            error_ = "Mandatory capture is available";
            return false;
        }

        LOG_DEBUG("ConsoleGame: Moved " << side_ << " from " << int(si) << "," << int(sj) << " to " << int(ei) << "," << int(ej));
        _board[ei][ej] = _board[si][sj];
        _board[si][sj] = Cell::BLACK_EMPTY;

        crownKing(ei, ej);
        return true;
    }

    if (2 == diff)
    {
        const int8_t mi = (si + ei) / 2;
        const int8_t mj = (sj + ej) / 2;
        if (_board[si][sj] == my_man and _board[mi][mj] != op_man and _board[mi][mj] != op_king)
        {
            error_ = "Man can't jump empty or same color";
            return false;
        }

        if (mandatoryCapture and _board[mi][mj] != op_man and _board[mi][mj] != op_king)
        {
            error_ = "Mandatory capture is available";
            return false;
        }

        LOG_DEBUG("ConsoleGame: Moved " << side_ << " from " << int(si) << "," << int(sj) << " to " << int(ei) << "," << int(ej));
        _board[ei][ej] = _board[si][sj];
        _board[mi][mj] = Cell::BLACK_EMPTY;
        _board[si][sj] = Cell::BLACK_EMPTY;

        crownKing(ei, ej);
        return true;
    }

    if (diff > 2)
    {
        if (_board[si][sj] == my_man)
        {
            error_ = "Man can't move more than 2";
            return false;
        }

        const auto isEmpty = [](Cell c) { return Cell::BLACK_EMPTY == c; };
        const auto isBlack = [](Cell c) { return Cell::BLACK_MAN == c or Cell::BLACK_KING == c; };
        const auto isWhite = [](Cell c) { return Cell::WHITE_MAN == c or Cell::WHITE_KING == c; };
        const auto isMyColor = (side_ == Side::White) ? isWhite : isBlack;
        const auto isOpColor = (side_ == Side::White) ? isBlack : isWhite;

        const auto inc = [](int8_t& x) { x++; };
        const auto dec = [](int8_t& x) { x--; };
        const auto movei = (ei > si) ? inc : dec;
        const auto movej = (ej > sj) ? inc : dec;

        bool isJump = false;        // Trying to capture opponent
        bool isCaptured = false;    // Captured opponent
        int8_t mi = si;
        int8_t mj = sj;
        do
        {
            movei(mi);
            movej(mj);
            LOG_DEBUG("ConsoleGame: Checking " << LOG_VAR(int(mi)) << LOG_VAR(int(mj)) << LOG_VAR(isJump) << LOG_VAR(isCaptured));
            if (isEmpty(_board[mi][mj]))
            {
                if (isJump and not isCaptured)
                {
                    isCaptured = true;
                }
                continue; // Note: Good yet
            }
            else if (isMyColor(_board[mi][mj]))
            {
                error_ = "Can't jump over the same color";
                return false;
            }
            else if (isOpColor(_board[mi][mj]))
            {
                if (isJump)
                {
                    error_ = "Can't capture more than 1 piece, even for king";
                    return false;
                }
                isJump = true;
            }
        } while (mi != ei and mj != ej);

        if (mandatoryCapture and not isCaptured)
        {
            error_ = "Mandatory capture is available, but not captured";
            return false;
        }

        // Note: Everything is good, update the board
        LOG_DEBUG("ConsoleGame: Moved " << side_ << " from " << int(si) << "," << int(sj) << " to " << int(ei) << "," << int(ej));
        mi = si;
        mj = sj;
        do
        {
            _board[mi][mj] = Cell::BLACK_EMPTY;
            movei(mi);
            movej(mj);
        } while (mi != ei and mj != ej);
        _board[ei][ej] = my_king;
        return true;
    }

    LOG_DEBUG("ConsoleGame: ERROR: unreachable code");
    return false;
}


void
ConsoleGame::crownKing(int8_t i, int8_t j)
{
    if (_board[i][j] == Cell::WHITE_MAN)
    {
        if (i == 0)
        {
            _board[i][j] = Cell::WHITE_KING;
        }
    }
    else if (_board[i][j] == Cell::BLACK_MAN)
    {
        if (i == 7)
        {
            _board[i][j] = Cell::BLACK_KING;
        }
    }
}


std::vector<Move>
ConsoleGame::getAllMoves(Side side_) const
{
    std::vector<Move> moves;

    const auto isEmpty = [](Cell c) { return Cell::BLACK_EMPTY == c; };
    const auto isBlack = [](Cell c) { return Cell::BLACK_MAN == c or Cell::BLACK_KING == c; };
    const auto isWhite = [](Cell c) { return Cell::WHITE_MAN == c or Cell::WHITE_KING == c; };
    const auto iterDiagonal = [this, isEmpty, side_, &moves]
                              (const int8_t si, const int8_t sj, int8_t ei, int8_t ej,
                               auto checki, auto checkj,
                               auto movei, auto movej,
                               auto isMyColor, auto isOpColor) {
                        bool isCapture = false;
                        while (checki(ei) and checkj(ej))
                        {
                            movei(ei);
                            movej(ej);
                            if (isEmpty(_board[ei][ej]))
                            {
                                moves.emplace_back((isCapture) ? Capture::Single : Capture::None, side_, Type::King, si, sj, ei, ej);
                            }
                            else if (isMyColor(_board[ei][ej]))
                            {
                                break; // Note: Can't jump over
                            }
                            else if (isOpColor(_board[ei][ej]))
                            {
                                if (isCapture)
                                {
                                    break; // Note: Capture once only
                                }
                                isCapture = true;
                            }
                        }
                    };
    const auto inc = [](int8_t& x) { x++; };
    const auto dec = [](int8_t& x) { x--; };
    const auto gt0 = [](int8_t x) { return x > 0; };
    const auto lt7 = [](int8_t x) { return x < 7; };

    for (int8_t i = 0; i < 8; ++i)
    {
        for (int8_t j = 0; j < 8; ++j)
        {
            if (side_ == Side::White)
            {
                if (Cell::WHITE_MAN == _board[i][j])
                {
                    // Move UP LEFT
                    if (i > 0 and j > 0 and isEmpty(_board[i - 1][j - 1]))
                    {
                        moves.emplace_back(Capture::None, side_, Type::Man, i, j, i - 1, j - 1);
                    }

                    // Move UP RIGHT
                    if (i > 0 and j < 7 and isEmpty(_board[i - 1][j + 1]))
                    {
                        moves.emplace_back(Capture::None, side_, Type::Man, i, j, i - 1, j + 1);
                    }

                    // Capture UP LEFT
                    if (i > 1 and j > 1 and isEmpty(_board[i - 2][j - 2]) and isBlack(_board[i - 1][j - 1]))
                    {
                        moves.emplace_back(Capture::Single, side_, Type::Man, i, j, i - 2, j - 2);
                    }

                    // Capture UP RIGHT
                    if (i > 1 and j < 6 and isEmpty(_board[i - 2][j + 2]) and isBlack(_board[i - 1][j + 1]))
                    {
                        moves.emplace_back(Capture::Single, side_, Type::Man, i, j, i - 2, j + 2);
                    }

                    // Capture DOWN LEFT
                    if (i < 6 and j > 1 and isEmpty(_board[i + 2][j - 2]) and isBlack(_board[i + 1][j - 1]))
                    {
                        moves.emplace_back(Capture::Single, side_, Type::Man, i, j, i + 2, j - 2);
                    }

                    // Capture DOWN RIGHT
                    if (i < 6 and j < 6 and isEmpty(_board[i + 2][j + 2]) and isBlack(_board[i + 1][j + 1]))
                    {
                        moves.emplace_back(Capture::Single, side_, Type::Man, i, j, i + 2, j + 2);
                    }
                }
                else if (Cell::WHITE_KING == _board[i][j])
                {
                    // Move UP LEFT
                    iterDiagonal(i, j, i, j,
                                 gt0, gt0,
                                 dec, dec,
                                 isWhite, isBlack);

                    // Move UP RIGHT
                    iterDiagonal(i, j, i, j,
                                 gt0, lt7,
                                 dec, inc,
                                 isWhite, isBlack);

                    // Move DOWN LEFT
                    iterDiagonal(i, j, i, j, 
                                 lt7, gt0,
                                 inc, dec,
                                 isWhite, isBlack);

                    // Move DOWN RIGHT
                    iterDiagonal(i, j, i, j, 
                                 lt7, lt7,
                                 inc, inc,
                                 isWhite, isBlack);
                }
            }
            else
            {
                if (Cell::BLACK_MAN == _board[i][j])
                {
                    // Move DOWN LEFT
                    if (i < 7 and j > 0 and isEmpty(_board[i + 1][j - 1]))
                    {
                        moves.emplace_back(Capture::None, side_, Type::Man, i, j, i + 1, j - 1);
                    }

                    // Move DOWN RIGHT
                    if (i < 7 and j < 7 and isEmpty(_board[i + 1][j + 1]))
                    {
                        moves.emplace_back(Capture::None, side_, Type::Man, i, j, i + 1, j + 1);
                    }

                    // Capture DOWN LEFT
                    if (i < 6 and j > 1 and isEmpty(_board[i + 2][j - 2]) and isWhite(_board[i + 1][j - 1]))
                    {
                        moves.emplace_back(Capture::Single, side_, Type::Man, i, j, i + 2, j - 2);
                    }

                    // Capture DOWN RIGHT
                    if (i < 6 and j < 6 and isEmpty(_board[i + 2][j + 2]) and isWhite(_board[i + 1][j + 1]))
                    {
                        moves.emplace_back(Capture::Single, side_, Type::Man, i, j, i + 2, j + 2);
                    }

                    // Capture UP LEFT
                    if (i > 1 and j > 1 and isEmpty(_board[i - 2][j - 2]) and isWhite(_board[i - 1][j - 1]))
                    {
                        moves.emplace_back(Capture::Single, side_, Type::Man, i, j, i - 2, j - 2);
                    }

                    // Capture UP RIGHT
                    if (i > 1 and j < 6 and isEmpty(_board[i - 2][j + 2]) and isWhite(_board[i - 1][j + 1]))
                    {
                        moves.emplace_back(Capture::Single, side_, Type::Man, i, j, i - 2, j + 2);
                    }
                }
                else if (Cell::BLACK_KING == _board[i][j])
                {
                    // Move UP LEFT 
                    iterDiagonal(i, j, i, j, 
                                 gt0, gt0,
                                 dec, dec,
                                 isBlack, isWhite);

                    // Move UP RIGHT
                    iterDiagonal(i, j, i, j, 
                                 gt0, lt7,
                                 dec, inc,
                                 isBlack, isWhite);

                    // Move DOWN LEFT
                    iterDiagonal(i, j, i, j, 
                                 lt7, gt0,
                                 inc, dec,
                                 isBlack, isWhite);

                    // Move DOWN RIGHT 
                    iterDiagonal(i, j, i, j, 
                                 lt7, lt7,
                                 inc, inc,
                                 isBlack, isWhite);
                }
            }
        }
    }

    return moves;
}


void
ConsoleGame::dumpCompact(std::ostream& os_) const
{
    os_ << " ";
    for (int8_t i = 0; i < 8; ++i)
    {
        os_ << char('a' + i);
    }
    os_ << "\n";

    for (int8_t i = 0; i < 8; ++i)
    {
        os_ << 8 - i;
        for (int8_t j = 0; j < 8; ++j)
        {
            os_ << (char)_board[i][j];
        }
        os_ << "\n";
    }
}


void
ConsoleGame::dumpNice(std::ostream& os_) const
{
    os_ << "   \033[1;31m";
    for (int8_t i = 0; i < 8; ++i)
    {
        os_ << " " << char('a' + i) << " ";
    }
    os_ << "\033[0m\n";

    for (int8_t i = 0; i < 8; ++i)
    {
        os_ << " \033[1;31m" << 8 - i << " \033[0m";
        for (int8_t j = 0; j < 8; ++j)
        {
            os_ << " " << (char)_board[i][j] << " ";
        }
        os_ << "\n";
    }
    os_ << "------------------------------" << std::endl;
}

