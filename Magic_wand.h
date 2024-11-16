
#include "Arme.h"

const int ATTACK_EFFECT_WAND = -5;
const int RESISTANCE_EFFECT_WAND = 0.1;
const int VITESSE_EFFECT_WAND = 5;
const int HEALTH_EFFECT_WAND = 2;

class Magic_wand : public Arme {
    private:
        float AttackEffect = ATTACK_EFFECT_WAND;
        float ResistanceEffect = RESISTANCE_EFFECT_WAND;
        float VitesseEffect = VITESSE_EFFECT_WAND;
        float HealthEffect = HEALTH_EFFECT_WAND;

    public:
        Magic_wand();
};