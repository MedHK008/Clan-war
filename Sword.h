#pragma once
#include <utility>
#include "Arme.h"

const int ATTACK_EFFECT_SWORD = 10;
const int RESISTANCE_EFFECT_SWORD = 0.1;
const int VITESSE_EFFECT_SWORD = 5;
constexpr int HEALTH_EFFECT_SWORD = 0;

class Sword : public Arme {
    public:
        Sword(string name);
};
