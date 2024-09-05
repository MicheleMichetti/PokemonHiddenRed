#include <Map.hpp>

#include "ut_Tile.cpp"

int main() {
    collision(utils::Direction::up);
    EXPECT_TRUE(collision(utils::Direction::down));
    EXPECT_FALSE(collision(utils::Direction::left));
    EXPECT_TRUE(collision(utils::Direction::right));
    EXPECT_FALSE(collision(utils::Direction::none));
}