#pragma once
#include "Arme.h"
const int ATTACK_EFFECT_SHIELD = -5;
const int RESISTANCE_EFFECT_SHIELD = 0.3;
const int VITESSE_EFFECT_SHIELD = 0;
const int HEALTH_EFFECT_SHIELD = 0;

class Shield : public Arme {
    private:
        float AttackEffect = ATTACK_EFFECT_SHIELD;
        float ResistanceEffect = RESISTANCE_EFFECT_SHIELD;
        float VitesseEffect = VITESSE_EFFECT_SHIELD;
        float HealthEffect = HEALTH_EFFECT_SHIELD;

    public:
        Shield(string name);
};