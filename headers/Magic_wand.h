#pragma once
#include "Arme.h"

const float ATTACK_EFFECT_MAGIC_WAND = -5.0f;
const float RESISTANCE_EFFECT_MAGIC_WAND = 0.1f;
const float VITESSE_EFFECT_MAGIC_WAND = 5.0f;
const float HEALTH_EFFECT_MAGIC_WAND = 10.0f;

class Magic_wand : public Arme {
    public:
        Magic_wand(string name);
};