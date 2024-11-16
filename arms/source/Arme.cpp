
#include "Arme.h"

Arme::Arme(std::string name):Name(name) {}

int Arme::affectHealth(int health) {
    return health + HealthEffect;
}

int Arme::affectAttack(int attack) {
    return attack + AttackEffect;
}

int Arme::affectResistance(int resistance) {
    return resistance - ResistanceEffect;
}

int Arme::affectVitesse(int vitesse) {
    return vitesse + VitesseEffect;
}
