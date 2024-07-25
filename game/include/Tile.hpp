#pragma once

#include <InteractionTile.hpp>
#include <utils.hpp>

class Tile {
   public:
    Tile();
    Tile(uint8_t collision_directions_bitmask, uint8_t interaction_directions_bitmask, InteractionTile interaction);
    ~Tile();

    bool isCollision(uint8_t player_direction);
    bool isInteraction(uint8_t player_direction);

   private:
    uint8_t collision_directions_bitmask_;
    uint8_t interaction_directions_bitmask_;
    InteractionTile interaction;
};