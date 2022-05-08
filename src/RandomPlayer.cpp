// Standard
#include <experimental/random>

// Shashki
#include "RandomPlayer.h"
#include "Logging.h"


using namespace shashki;


RandomPlayer::RandomPlayer(Game& game_, Side side_)
:   Player(game_, side_)
{
}


bool
RandomPlayer::move()
{
    auto moves = _game.getAllMoves(_side);

    if (moves.empty())
    {
        LOG_DEBUG("NO MORE MOVES");
        return false;
    }

    std::vector<Move> captures;
    for (auto& m : moves)
    {
        if (Capture::None != m.capture())
        {
            captures.push_back(m);
        }
    }

    if (!captures.empty())
    {
        LOG_DEBUG("There are captures, choose random one from " << captures.size());
        std::string error;
        auto i = std::experimental::randint(0, (int)captures.size() - 1);
        if (auto res = _game.move(captures[i]); !res.valid)
        {
            LOG_DEBUG("INTERNAL ERROR:" << res.error);
            return false;
        }
        return true;
    }

    LOG_DEBUG("There are moves, choose random one from " << moves.size());
    std::string error;
    auto i = std::experimental::randint(0, (int)moves.size() - 1);
    if (auto res = _game.move(moves[i]); !res.valid)
    {
        LOG_DEBUG("INTERNAL ERROR:" << res.error);
        return false;
    }

    return true;
}

