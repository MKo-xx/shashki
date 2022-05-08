// Shashki
#include "FastGame.h"
#include "Logging.h"


using namespace shashki;


FastGame::FastGame()
{
    /*
        32 bit for men and 32 bit for kings combined into 64 bit number,
        and each bit is 1/0 corresonds to man/king at the position according to below
 
            a   b   c   d   e   f   g   h
        8       0       1       2       3
        7   4       5       6       7   
        6       8       9      10      11
        5   12     13      14      15
        4      16      17      18      19
        3   20     21      23      24   
        2      25      26      27      28
        1   28     29      30      31
    */
    _white = 0x00000000FFF00000;
    _black = 0x0000000000000FFF;
}


FastGame::~FastGame()
{
}


// Note: Expect the move is correct and no need for validation
MoveResult
FastGame::move(const Move& move_)
{
    LOG_DEBUG("FastGame: Move=" << move_);

    if (Side::Black == move_.side())
    {
        if (Type::Man == move_.type())
        {
            LOG_DEBUG("FastGame: Black man move " << LOG_VAR(int(move_.s())) << LOG_VAR(int(move_.e())));
            _black &= ~(1UL << move_.s());
            _black |= (1UL << move_.e());

            if (move_.e() >= 28)
            {
                LOG_DEBUG("FastGame: Crown black king");
                _black &= ~(1UL << move_.e());
                _black |= (1UL << (32 + move_.e()));
            }

            if (Capture::Single == move_.capture())
            {
                LOG_DEBUG("FastGame: Black man capture " << LOG_VAR(int(move_.s())) << LOG_VAR(int(move_.e())) << LOG_VAR(int(move_.c())));
                _white &= ~((1UL << move_.c()) | (1UL << (32 + move_.c()))); // Note: Capture any white
            }
        }
        else
        {
            LOG_DEBUG("FastGame: Black king move " << LOG_VAR(int(move_.s())) << LOG_VAR(int(move_.e())));
            _black &= ~(1UL << (32 + move_.s()));
            _black |=  (1UL << (32 + move_.e()));

            if (Capture::Single == move_.capture())
            {
                LOG_DEBUG("FastGame: Black king capture " << LOG_VAR(int(move_.s())) << LOG_VAR(int(move_.e())) << LOG_VAR(int(move_.c())));
                _white &= ~((1UL << move_.c()) | (1UL << (32 + move_.c()))); // Note: Capture any white
            }
        }
    }
    else
    {
        if (Type::Man == move_.type())
        {
            LOG_DEBUG("FastGame: White man move " << LOG_VAR(int(move_.s())) << LOG_VAR(int(move_.e())));
            _white &= ~(1UL << move_.s());
            _white |=  (1UL << move_.e());

            if (move_.e() <= 3)
            {
                LOG_DEBUG("FastGame: Crown white king");
                _white &= ~(1UL << move_.e());
                _white |=  (1UL << (32 + move_.e()));
            }

            if (Capture::Single == move_.capture())
            {
                LOG_DEBUG("FastGame: White man capture " << LOG_VAR(int(move_.s())) << LOG_VAR(int(move_.e())) << LOG_VAR(int(move_.c())));
                _black &= ~((1UL << move_.c()) | (1UL << (32 + move_.c()))); // Note: Capture any
            }
        }
        else
        {
            LOG_DEBUG("FastGame: White king move " << LOG_VAR(int(move_.s())) << LOG_VAR(int(move_.e())));
            _white &= ~(1UL << (32 + move_.s()));
            _white |=  (1UL << (32 + move_.e()));

            if (Capture::Single == move_.capture())
            {
                LOG_DEBUG("FastGame: White king capture " << LOG_VAR(int(move_.s())) << LOG_VAR(int(move_.e())) << LOG_VAR(int(move_.c())));
                _black &= ~((1UL << move_.c()) | (1UL << (32 + move_.c()))); // Note: Capture any
            }
        }
    }

    return MoveResult(true);
}


std::vector<Move>
FastGame::getAllMoves(Side side_) const
{
    std::vector<Move> moves;
    #include "FastGame.generated.inc"
    return moves;
}


void
FastGame::dumpCompact(std::ostream& os_) const
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
            if (not ((i % 2 == 0) xor (j % 2 == 0)))
            {
                os_ << " ";
            }
            else
            {
                auto x = 4 * i + (j / 2);
                if (_white & (1UL << x))
                { os_ << "w"; }
                else if (_white & (1UL << (x + 32)))
                { os_ << "W"; }
                else if (_black & (1UL << x))
                { os_ << "b"; }
                else if (_black & (1UL << (x + 32)))
                { os_ << "B"; }
                else
                { os_ << "."; }
            }
        }
        os_ << "\n";
    }
}


void
FastGame::dumpNice(std::ostream& os_) const
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
            os_ << " ";
            if (not ((i % 2 == 0) xor (j % 2 == 0)))
            {
                os_ << " ";
            }
            else
            {
                auto x = 4 * i + (j / 2);
                if (_white & (1UL << x))
                { os_ << "w"; }
                else if (_white & (1UL << (x + 32)))
                { os_ << "W"; }
                else if (_black & (1UL << x))
                { os_ << "b"; }
                else if (_black & (1UL << (x + 32)))
                { os_ << "B"; }
                else
                { os_ << "."; }
            }
            os_ << " ";
        }
        os_ << "\n";
    }
    os_ << "------------------------------" << "\n";
}

