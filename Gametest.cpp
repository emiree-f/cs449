#include <gtest/gtest.h>
#include "../Board.h"

struct BoardTest : testing::Test
{
    Board* mBoard;
    BoardTest()
    {
        mBoard = new Board;
    }
    virtual ~BoardTest()
    {
        delete mBoard;
    }
};

TEST_F(BoardTest, placingMode) {

    ASSERT_FALSE(millBoard->isPlacingMode());
    millBoard->setPlacingMode(true);
    ASSERT_TRUE(millBoard->isPlacingMode());

    ASSERT_FALSE(mBoard->isPlacingMode());
    mBoard->setPlacingMode(true);
    ASSERT_TRUE(mBoard->isPlacingMode());

}

TEST_F(BoardTest, GameMode) {
    ASSERT_FALSE(mBoard->isGameMode());
    mBoard->setGameMode(true);
    ASSERT_TRUE(mBoard->isGameMode());
}

TEST_F(BoardTest, PlayerTurn) {

    ASSERT_FALSE(mBoard->isPlayerTurn());
    mBoard->setPlayerTurn(true);
    ASSERT_TRUE(mBoard->isPlayerTurn());
}

TEST_F(BoardTest, PlayerTurn) {

    ASSERT_FALSE(millBoard->SetPlayerTurn());
    millBoard->setPlayerTurn(true);
    ASSERT_TRUE(millBoard->SetPlayerTurn());
}

TEST_F(BoardTest, PlaceMode) {

    ASSERT_FALSE(millBoard->SetPlacingMode());
    millBoard->setPlayerTurn(true);
    ASSERT_TRUE(millBoard->SetPlacingMode());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}