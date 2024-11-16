#pragma once
#include "Arme.h"

const int ATTACK_EFFECT_WAND = -5;
const int RESISTANCE_EFFECT_WAND = 0.1;
const int VITESSE_EFFECT_WAND = 5;
const int HEALTH_EFFECT_WAND = 2;

class Magic_wand : public Arme {
    private:
        static int ATTACK_EFFECT;

        static int RESISTANCE_EFFECT;

        static int VITESSE_EFFECT;

        static int HEALTH_EFFECT;

    public:
        Magic_wand(string name);
};