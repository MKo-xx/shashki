// Standard
#include <iostream>

// Shashki
#include "src/ConsoleGame.h"
#include "src/FastGame.h"
#include "src/HumanPlayer.h"
#include "src/RandomPlayer.h"


using namespace shashki;

int
main()
{
    //ConsoleGame game;
    FastGame game;
    //HumanPlayer player1(game, Side::White);
    RandomPlayer player1(game, Side::White);
    //HumanPlayer player2(game, Side::Black);
    RandomPlayer player2(game, Side::Black);

    game.dumpNice(std::cout);

    while (true)
    {
        if (!player1.move())
        {
            break;
        }
        game.dumpNice(std::cout);

        if (!player2.move())
        {
            break;
        }
        game.dumpNice(std::cout);
    }

    return 0;
}

