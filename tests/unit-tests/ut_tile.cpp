#include <Tile.hpp>

#include "gtest/gtest.h"

utils::Coordinate coordinate;
uint8_t direction;
Tile testTile;

void resetState() {
    coordinate.x = 0;
    coordinate.y = 0;
    direction = utils::Direction::none;
    
}

bool CollisionUp() {
    resetState();

    bool result_x = false;
    if (updated_coordinates.x == updated_future_coordinates.x) {
        result_x == true;
    }
    std::cout << result_x << std::endl;
    bool result_y = false;
    if ((updated_coordinates.y + 1) == updated_future_coordinates.y) {
        result_y == true;
    }
    std::cout << result_y << std::endl;
    bool result_direction = false;
    if (!(updated_future_direction ^ utils::Direction::up) & 0b11111111) {
        result_direction == true;
    }
    std::cout << result_direction << std::endl;

    resetState();

    return result_x & result_y & result_direction;
}

namespace {

TEST(CollisionUpTest, Positive) { EXPECT_EQ(true, CollisionUp()); }

}  // namespace