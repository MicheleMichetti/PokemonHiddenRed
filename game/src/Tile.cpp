#include <Tile.hpp>
#include <utils.hpp>

Tile::Tile() {
    this->collision_directions_bitmask_ = 0;
    this->interaction_directions_bitmask_ = 0;
}

Tile::Tile(uint8_t collision_directions_bitmask, uint8_t interaction_directions_bitmask, InteractionTile interaction) {
    this->collision_directions_bitmask_ = collision_directions_bitmask;
    this->interaction_directions_bitmask_ = interaction_directions_bitmask;
    this->interaction = interaction;
}

Tile::~Tile() {}

void Tile::setCollisionDirectionsBitmask(uint8_t collision_bitmask) {
    this->collision_directions_bitmask_ = collision_bitmask;
}
void Tile::setInteractionDirectionsBitmask(uint8_t interaction_bitmask) {
    this->interaction_directions_bitmask_ = interaction_bitmask;    
}
uint8_t Tile::getCollisionDirectionsBitmask() {
    return this->collision_directions_bitmask_;
}
uint8_t Tile::getInteractionDirectionsBitmask() {
    return this->interaction_directions_bitmask_;
}

bool Tile::isCollision(uint8_t player_direction) { return player_direction & this->collision_directions_bitmask_; }

bool Tile::isInteraction(uint8_t player_direction) { return player_direction & this->interaction_directions_bitmask_; }
