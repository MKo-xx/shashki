// Standard
#include <experimental/random>
#include <chrono>

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
    // sample SBKa1b2

    EXPECT_EQ(7, str_.size());

    EXPECT_TRUE(str_[0] == 'N' or str_[0] == 'S');
    auto capture = (str_[0] == 'N') ? Capture::None : Capture::Single;

    EXPECT_TRUE(str_[1] == 'W' or str_[1] == 'B');
    auto side = (str_[1] == 'W') ? Side::White : Side::Black;

    EXPECT_TRUE(str_[2] == 'M' or str_[2] == 'K');
    auto type = (str_[2] == 'M') ? Type::Man : Type::King;

    EXPECT_TRUE(str_[3] >= 'a' and str_[3] <= 'h');
    auto sj = str_[3] - 'a';

    EXPECT_TRUE(str_[4] >= '1' and str_[4] <= '8');
    auto si = 7 - (str_[4] - '1');

    EXPECT_TRUE(str_[5] >= 'a' and str_[5] <= 'h');
    auto ej = str_[5] - 'a';

    EXPECT_TRUE(str_[6] >= '1' and str_[6] <= '8');
    auto ei = 7 - (str_[6] - '1');

    return Move(capture, side, type, si, sj, ei, ej);
}


TEST(GameTests, MoveTests)
{
    for (Capture c : std::vector<Capture>{Capture::None, Capture::Single})
    for (Side s : std::vector<Side>{Side::White, Side::Black})
    for (Type t : std::vector<Type>{Type::Man, Type::King})
    for (uint8_t si = 0; si < 8; ++si)
    for (uint8_t sj = 0; sj < 8; ++sj)
    for (uint8_t ei = 0; ei < 8; ++ei)
    for (uint8_t ej = 0; ej < 8; ++ej)
    {
        if (not ((si % 2 == 0) xor (sj % 2 == 0))) continue;
        if (not ((ei % 2 == 0) xor (ej % 2 == 0))) continue;

        {
            Move m(c, s, t, si, sj, ei, ej);
            ASSERT_EQ(c, m.capture());
            ASSERT_EQ(s, m.side());
            ASSERT_EQ(t, m.type());
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

    game.move(M("NWMa3b4"));
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


   game.move(M("NBMb6a5"));
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


TEST(GameTests, FastGameTestPlay)
{
    FastGame game;
    testGame(game);
}


TEST(GameTests, FastGameTestAvailableMoves)
{
    FastGame game;
    testAvailableMoves(game);
}


std::vector<std::string>
str(const std::vector<Move>& v)
{
    std::vector<std::string> sv;
    for (auto& m: v)
    {
        sv.push_back(moveToStr(m));
    }

    std::sort(sv.begin(), sv.end());
    return sv;
}


Move
chooseMove(const std::vector<Move>& v)
{
    std::vector<Move> cv;
    for (auto& m : v)
    {
        if (Capture::None != m.capture())
        {
            cv.push_back(m);
        }
    }

    if (!cv.empty())
    {
        auto i = std::experimental::randint(0, (int)cv.size() - 1);
        return cv[i];
    }

    auto i = std::experimental::randint(0, (int)v.size() - 1);
    return v[i];
}


TEST(GameTests, CompareGames)
{
    for (int i = 0; i < 1000; ++i)
    {

    ConsoleGame cgame;
    FastGame fgame;
    bool is_white_move = true;
    while(true)
    {
        std::ostringstream coss;
        cgame.dumpCompact(coss);

        std::ostringstream foss;
        fgame.dumpCompact(foss);

        //cgame.dumpNice(std::cout);
        //fgame.dumpNice(std::cout);
        ASSERT_EQ(coss.str(), foss.str());

        const auto cWhiteMoves = cgame.getAllMoves(Side::White);
        const auto fWhiteMoves = fgame.getAllMoves(Side::White);

        const auto cStrWhiteMoves = str(cWhiteMoves);
        const auto fStrWhiteMoves = str(fWhiteMoves);
        ASSERT_EQ(cStrWhiteMoves, fStrWhiteMoves);

        const auto cBlackMoves = cgame.getAllMoves(Side::Black);
        const auto fBlackMoves = fgame.getAllMoves(Side::Black);

        const auto cStrBlackMoves = str(cBlackMoves);
        const auto fStrBlackMoves = str(fBlackMoves);
        ASSERT_EQ(cStrBlackMoves, fStrBlackMoves);

        if (fWhiteMoves.empty() or fBlackMoves.empty())
        {
            break;
        }

        Move m = is_white_move ? chooseMove(fWhiteMoves) : chooseMove(fBlackMoves);
        //cgame.dumpNice(std::cout);
        cgame.move(m);
        fgame.move(m);

        is_white_move = !is_white_move;
    }
    }
}

template <typename TGame>
void
checkPerformance()
{
    const auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10 * 1000; ++i)
    {    
        TGame game;
        bool is_white_move = true;
        while(true)
        {
            const auto moves = game.getAllMoves(is_white_move ? Side::White : Side::Black);
            if (moves.empty())
            {
                break;
            }
            const auto m = chooseMove(moves);
            game.move(m);
        }
    }
    const auto end = std::chrono::high_resolution_clock::now();
    const std::chrono::duration<double> diff = end - start;
    std::cout << "Measured diff : " << diff.count() << "s\n";
}


TEST(GameTests, MeasurePerformance)
{
    checkPerformance<FastGame>();
    checkPerformance<ConsoleGame>();
}

