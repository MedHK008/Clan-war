
#include "Arme.h"

const int ATTACK_EFFECT = 10;
const int RESISTANCE_EFFECT = 0.1;
const int VITESSE_EFFECT = 5;
const int HEALTH_EFFECT = 0;

class Sword : public Arme {
    private:
        float AttackEffect = ATTACK_EFFECT;
        float ResistanceEffect = RESISTANCE_EFFECT;
        float VitesseEffect = VITESSE_EFFECT;
        float HealthEffect = HEALTH_EFFECT;

    public:
        Sword();
};