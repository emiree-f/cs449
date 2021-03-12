#include "pch.h"
#include <gtest/gtest.h>
#include "../Board.h"
#include "../Board.cpp"

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

TEST_F(BoardTest, EmptyBoard) {
    std::string expected = "(O)";
    mBoard->buildBoard();
    for (int row = 0; row < 7; row++) {
        for (int column = 0; column < 7; column++) {
            ASSERT_EQ(expected, mBoard->getBoard(row, column));
        }
    }
}

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



TEST_F(BoardTest, ValidMove) {
    ASSERT_FALSE(mBoard->validate());
    mBoard->validate(int row, int col);
    ASSERT_TRUE(mBoard->validate());
}

TEST_F(BoardTest, ValidMove) {
    ASSERT_FALSE(millBoard->validate());
   millBoard->validate(int row, int col);
    ASSERT_TRUE(millBoard->validate());
}

 TEST_F(BoardTest, PlaceGame) {
    ASSERT_FALSE(mBoard->placeGame());
    mBoard->placeGame(int row, int col);
    ASSERT_TRUE(mBoard->placeGame());
}

TEST_F(BoardTest, PlaceGame) {
    ASSERT_FALSE(millBoard->placeGame());
   millBoard->placeGame(int row, int col);
    ASSERT_TRUE(millBoard->placeGame());
}

 TEST_F(BoardTest, PlayType) {
    ASSERT_FALSE(mBoard->playType());
    mBoard->playType(int row, int col);
    ASSERT_TRUE(mBoard->playType());
}

TEST_F(BoardTest, PlayType) {
    ASSERT_FALSE(millBoard->playType());
   millBoard-playType(int row, int col)
    ASSERT_TRUE(millBoard->playType());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
