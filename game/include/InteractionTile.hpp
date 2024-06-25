#include <Interaction.hpp>

class InteractionTile: public virtual _interaction::Interaction {
    public:
        void playInteraction();
        void endInteraction();

        void callFromRAM();
};