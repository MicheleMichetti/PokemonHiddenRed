#pragma once
#include <InteractionTile.hpp>

void InteractionTile::playInteraction() {
    status_bit_mask_ |= utils::InteractionStatus::IS_PLAYING;
    
    increaseInteractionCounter();
}
void InteractionTile::endInteraction() {
    status_bit_mask_ |= utils::InteractionStatus::INTERACTION_ENDED;
    status_bit_mask_ & ~utils::InteractionStatus::IS_PLAYING;
}

void InteractionTile::callFromRAM() {

}