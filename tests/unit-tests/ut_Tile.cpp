#include <Tile.hpp>

#include "gtest/gtest.h"

bool collision(uint8_t direction) {
    InteractionTile interTile;
    Tile testTile(0b00001010, 0b00000101, interTile);

    std::cout << "Test Collision " << direction << std::endl;

    return testTile.isCollision(direction);
}

TEST(collision, Positive) {
    EXPECT_FALSE(collision(utils::Direction::up));
    EXPECT_TRUE(collision(utils::Direction::down));
    EXPECT_FALSE(collision(utils::Direction::left));
    EXPECT_TRUE(collision(utils::Direction::right));
    EXPECT_FALSE(collision(utils::Direction::none));
}