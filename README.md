## About

Implementation of the game [Shashki](https://en.wikipedia.org/wiki/Russian_draughts)


## Getting Started

There are 2 type of classes - Games and Players.
Each Player can work with each Game.


### Games

* ConsoleGame - Simple implementation of game(no fancy optimizations)
* FastGame - TODO: Optimized version of Game with only 2x64 bit memory usage and fast way to calculate available moves


### Players

* HumanPlayer - a human player interface, which will print game info to the screen and read player's move from the screen.
* RandomPlayer - a machine player, randomly chooses from available correct moves.
* TODO: more smart player than random one.


### Build
Build using CMake 
```sh
mkdir build
cd build
cmake ${SHASHKI_PATH}
# See bin directory for binaries
```


### Sample usage

    // TODO: Create some class or function which will receive the config and do the below.
    Create the Game object and create 2 players, then run
    ```cpp
    ...Game game;
    ...Player player1(game, Side::White);
    ...Player player2(game, Side::Black);

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
    ```


## Code Style

Look around the code and keep the similar style.

* *.h - header only, no implementation
* *.hpp - inline methods
* *.cpp - non-inline methods


