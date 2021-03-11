
#include "../Board.h"

struct BoardTest : testing::Test
{
    Board* millBoard;
    BoardTest()
    {
        millBoard = new Board;
    }
    virtual ~BoardTest()
    {
        delete millBoard;
    }
};

TEST_F(BoardTest, placingMode) {

    ASSERT_FALSE(millBoard->isPlacingMode());

    millBoard->setPlacingMode(true);
    ASSERT_TRUE(millBoard->isPlacingMode());
}

TEST_F(BoardTest, GameMode) {
    ASSERT_FALSE(millBoard->isGameMode());
    millBoard->setGameMode(true);
    ASSERT_TRUE(millBoard->isGameMode());
}


TEST_F(BoardTest, PlayerTurn) {

    ASSERT_FALSE(millBoard->isPlayerTurn());
    millBoard->setPlayerTurn(true);
    ASSERT_TRUE(millBoard->isPlayerTurn());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}