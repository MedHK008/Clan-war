
#include "Arme.h"

const int ATTACK_EFFECT = -5;
const int RESISTANCE_EFFECT = 0.1;
const int VITESSE_EFFECT = 5;
const int HEALTH_EFFECT = 2;

class Magic_wand : public Arme {
    private:
        float AttackEffect = ATTACK_EFFECT;
        float ResistanceEffect = RESISTANCE_EFFECT;
        float VitesseEffect = VITESSE_EFFECT;
        float HealthEffect = HEALTH_EFFECT;

    public:
        Magic_wand();
};