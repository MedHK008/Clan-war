
#include "Arme.h"

const int ATTACK_EFFECT_AXE = 25;
const int RESISTANCE_EFFECT_AXE = 0.1;
const int VITESSE_EFFECT_AXE = -10;
const int HEALTH_EFFECT_AXE = 0;

class Axe : public Arme {
    private:
        float AttackEffect = ATTACK_EFFECT_AXE;
        float ResistanceEffect = RESISTANCE_EFFECT_AXE;
        float VitesseEffect = VITESSE_EFFECT_AXE;
        float HealthEffect = HEALTH_EFFECT_AXE;
    
    public:
        Axe();
};