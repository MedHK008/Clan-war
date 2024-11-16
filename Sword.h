#include "Arme.h"

const int ATTACK_EFFECT_SWORD = 10;
const int RESISTANCE_EFFECT_SWORD = 0.1;
const int VITESSE_EFFECT_SWORD = 5;
const int HEALTH_EFFECT_SWORD = 0;

class Sword : public Arme {
    private:
        float AttackEffect = ATTACK_EFFECT_SWORD;
        float ResistanceEffect = RESISTANCE_EFFECT_SWORD;
        float VitesseEffect = VITESSE_EFFECT_SWORD;
        float HealthEffect = HEALTH_EFFECT_SWORD;

    public:
        Sword();
};
