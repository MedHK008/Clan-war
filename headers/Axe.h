#pragma once
#include "Arme.h"

const float ATTACK_EFFECT_AXE = 25.0f;
const float RESISTANCE_EFFECT_AXE = 0.1f;
const float VITESSE_EFFECT_AXE = -10.0f;
const float HEALTH_EFFECT_AXE = -10.0f;

class Axe : public Arme {
    public:
        Axe(string name);
};