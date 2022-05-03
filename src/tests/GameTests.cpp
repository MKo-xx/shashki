// Google
#include <gtest/gtest.h>

// Shashki
#include "../ConsoleGame.h"
#include "../FastGame.h"


using namespace shashki;


// TODO: merge with moveFromStr
inline
Move
M(const std::string& str_)
{
    EXPECT_EQ(6, str_.size());

    EXPECT_TRUE(str_[0] == 'W' or str_[0] == 'B');
    auto side = (str_[0] == 'W') ? Side::White : Side::Black;

    EXPECT_TRUE(str_[1] == 'C' or str_[1] == ' ');
    auto capture = (str_[1] == 'C');

    EXPECT_TRUE(str_[2] >= 'a' and str_[2] <= 'h');
    auto sj = str_[2] - 'a';

    EXPECT_TRUE(str_[3] >= '1' and str_[3] <= '8');
    auto si = 7 - (str_[3] - '1');

    EXPECT_TRUE(str_[4] >= 'a' and str_[4] <= 'h');
    auto ej = str_[4] - 'a';

    EXPECT_TRUE(str_[5] >= '1' and str_[5] <= '8');
    auto ei = 7 - (str_[5] - '1');

    return Move(side, capture, si, sj, ei, ej);
}


TEST(GameTests, MoveTests)
{
    for (uint8_t si = 0; si < 8; ++si)
    for (uint8_t sj = 0; sj < 8; ++sj)
    for (uint8_t ei = 0; ei < 8; ++ei)
    for (uint8_t ej = 0; ej < 8; ++ej)
    {
        if (not ((si % 2 == 0) xor (sj % 2 == 0))) continue;
        if (not ((ei % 2 == 0) xor (ej % 2 == 0))) continue;

        {
            Move m(Side::White, false, si, sj, ei, ej);
            ASSERT_EQ(Side::White, m.side());
            ASSERT_EQ(false, m.capture());
            ASSERT_EQ(si, m.si());
            ASSERT_EQ(sj, m.sj());
            ASSERT_EQ(ei, m.ei());
            ASSERT_EQ(ej, m.ej());
        }

        {
            Move m(Side::Black, false, si, sj, ei, ej);
            ASSERT_EQ(Side::Black, m.side());
            ASSERT_EQ(false, m.capture());
            ASSERT_EQ(si, m.si());
            ASSERT_EQ(sj, m.sj());
            ASSERT_EQ(ei, m.ei());
            ASSERT_EQ(ej, m.ej());
        }

        {
            Move m(Side::White, true, si, sj, ei, ej);
            ASSERT_EQ(Side::White, m.side());
            ASSERT_EQ(true, m.capture());
            ASSERT_EQ(si, m.si());
            ASSERT_EQ(sj, m.sj());
            ASSERT_EQ(ei, m.ei());
            ASSERT_EQ(ej, m.ej());
        }

        {
            Move m(Side::Black, true, si, sj, ei, ej);
            ASSERT_EQ(Side::Black, m.side());
            ASSERT_EQ(true, m.capture());
            ASSERT_EQ(si, m.si());
            ASSERT_EQ(sj, m.sj());
            ASSERT_EQ(ei, m.ei());
            ASSERT_EQ(ej, m.ej());
        }
    }
}


void testGame(Game& game)
{
    std::ostringstream oss;

    game.dumpCompact(oss);
    ASSERT_EQ(
"\
 abcdefgh\n\
8 b b b b\n\
7b b b b \n\
6 b b b b\n\
5. . . . \n\
4 . . . .\n\
3w w w w \n\
2 w w w w\n\
1w w w w \n", oss.str());
    oss.str(""); oss.clear();

    game.move(M("W a3b4"));
    game.dumpCompact(oss);
    ASSERT_EQ(
"\
 abcdefgh\n\
8 b b b b\n\
7b b b b \n\
6 b b b b\n\
5. . . . \n\
4 w . . .\n\
3. w w w \n\
2 w w w w\n\
1w w w w \n", oss.str());
    oss.str(""); oss.clear();


   game.move(M("B b6a5"));
    game.dumpCompact(oss);
    ASSERT_EQ(
"\
 abcdefgh\n\
8 b b b b\n\
7b b b b \n\
6 . b b b\n\
5b . . . \n\
4 w . . .\n\
3. w w w \n\
2 w w w w\n\
1w w w w \n", oss.str());
    oss.str(""); oss.clear();
}


void
testAvailableMoves(Game& game)
{
    auto moves = game.getAllMoves(Side::White);
    std::vector<std::string> mstr;
    for (auto& m : moves)
    {
        mstr.push_back(moveToStr(m));
    }
    std::vector<std::string> expected = {"a3b4", "c3b4", "c3d4", "e3d4", "e3f4", "g3f4", "g3h4"};
    ASSERT_EQ(expected, mstr);
}


TEST(GameTests, ConsoleGameTestPlay)
{
    ConsoleGame game;
    testGame(game);
}


TEST(GameTests, ConsoleGameTestAvailableMoves)
{
    ConsoleGame game;
    testAvailableMoves(game);
}


TEST(GameTests, DISABLED_FastGameTestPlay)
{
    FastGame game;
    testGame(game);
}

