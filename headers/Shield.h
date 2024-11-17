#pragma once
#include "Arme.h"

const int ATTACK_EFFECT_SHIELD = -5;
const int RESISTANCE_EFFECT_SHIELD = 0.3;
const int VITESSE_EFFECT_SHIELD = 0;
const int HEALTH_EFFECT_SHIELD = 0;

class Shield : public Arme {
    public:
        Shield(string name);
};