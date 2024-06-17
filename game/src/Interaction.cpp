#include <Interaction.hpp>

using namespace _interaction;

Interaction::Interaction() {
    id_ = 0;
    type_ = 0;
    status_bit_mask_ = 0;
}
Interaction::Interaction(uint32_t id, uint8_t type, uint8_t status_bit_mask) {
    id_ = id;
    type_ = type;
    status_bit_mask_ = status_bit_mask;
}
Interaction::~Interaction() {
    id_ = 0;
    type_ = 0;
    status_bit_mask_ = 0;
}

void Interaction::setId(uint32_t id) { this->id_ = id; }
void Interaction::setType(uint8_t type) { this->type_ = type; }
void Interaction::setStatus(uint8_t status_bit_mask) { this->status_bit_mask_ = status_bit_mask; }

uint32_t Interaction::getId() { return id_; }
uint8_t Interaction::getType() { return type_; }
uint8_t Interaction::getStatus() { return status_bit_mask_; }

bool Interaction::isInteraction() { return false; }
void Interaction::playInteraction() { return; }
bool Interaction::isInteractionEnded() { return false; }
void Interaction::enableInteraction() { return; }
void Interaction::disableInteraction() { return; }