// Standard
#include <iostream>

// Shashki
#include "HumanPlayer.h"


using namespace shashki;


HumanPlayer::HumanPlayer(Game& game_, Side side_)
:   Player(game_, side_)
{
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Game Config" << std::endl;
    std::cout << "Capture Mandatory: " << game_.isCaptureMandatory() << std::endl;
    std::cout << "Backward Capture Supported: " << game_.isBackwardCaptureSupported() << std::endl;
    std::cout << "Multi Capture Supported: " << game_.isMultiCaptureSupported() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
}


bool
HumanPlayer::move()
{
    std::cout << "Enter move for " << _side << " or q(for exit)" << std::endl; 
    do {
        std::string str;
        std::cin >> str;
        if ("q" == str)
        {
            return false;
        }

        std::string error;
        Move move(0, 0);
        move.setSide(_side);
        if (!strToMove(str, move, error))
        {
            std::cout << "ERROR: " << error << "\nTry again" << std::endl;
            continue;
        }

        if (auto res = _game.move(move); !res.valid)
        {
            std::cout << "ERROR: " << res.error << "\nTry again" << std::endl;
            continue;
        }
        break;
    } while(true);

    return true;
}

