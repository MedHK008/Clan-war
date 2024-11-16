#pragma once
#include "Arme.h"


class Magic_wand : public Arme {
    private:
        static float ATTACK_EFFECT;
        static float RESISTANCE_EFFECT;
        static float VITESSE_EFFECT;
        static float HEALTH_EFFECT;
    public:
        Magic_wand(string name);
};