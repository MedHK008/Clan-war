#pragma once
#include <utility>
#include "Arme.h"

const float ATTACK_EFFECT_SWORD = 10.0f;
const float RESISTANCE_EFFECT_SWORD = 0.2f;
const float VITESSE_EFFECT_SWORD = 5.0f;
const float HEALTH_EFFECT_SWORD = 0.0f;

class Sword : public Arme {
    public:
        Sword(string name);
};
