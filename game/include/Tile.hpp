#pragma once

#include <InteractionTile.hpp>
#include <utils.hpp>

class Tile {
   public:
    Tile(uint8_t collision_directions_bitmask, uint8_t interaction_directions_bitmask, InteractionTile interaction);
    ~Tile();

    bool isCollision(utils::Direction player_direction);
    bool isInteraction(utils::Direction player_direction);

   private:
    uint8_t collision_directions_bitmask_;
    uint8_t interaction_directions_bitmask_;
    InteractionTile interaction;
};