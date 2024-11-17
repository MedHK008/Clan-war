#pragma once
#include "Arme.h"

const float ATTACK_EFFECT_SHIELD = 5.0f;
const float RESISTANCE_EFFECT_SHIELD = 0.4f;
const float VITESSE_EFFECT_SHIELD = 0.0f;
const float HEALTH_EFFECT_SHIELD = 0.0f;

class Shield : public Arme {
    public:
        Shield(string name);
};