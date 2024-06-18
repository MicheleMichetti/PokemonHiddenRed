#pragma once

#include <map>
#include <utils.hpp>

namespace _interaction {

class Interaction {
   protected:
    uint32_t id_;
    uint8_t type_;
    uint8_t status_bit_mask_;

   public:
    Interaction();
    Interaction(uint32_t id, uint8_t type, uint8_t status_bit_mask = 0);
    ~Interaction();

    void setId(uint32_t id);
    void setType(uint8_t type);
    void setStatus(uint8_t status_bit_mask);

    uint32_t getId();
    uint8_t getType();
    uint8_t getStatus();

    //Interaction status reading
    bool isInteraction();
    bool isInteractionEnded();

    //Interaction status manipulation
    void enableInteraction();
    void disableInteraction();
    void playInteraction();
    void endInteraction();
    void increaseInteractionCounter();

    void callFromFile();
};

}  // namespace _interaction