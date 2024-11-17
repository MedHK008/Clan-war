#include "Arme.h"

Arme::Arme(string name, float attackEffect, float resistanceEffect, float vitesseEffect, float healthEffect)
    : Name(name), AttackEffect(attackEffect), ResistanceEffect(resistanceEffect), VitesseEffect(vitesseEffect), HealthEffect(healthEffect) {}

float Arme::affectHealth(float health) {
    return health + HealthEffect;
}

float Arme::affectAttack(float attack) {
    return attack + AttackEffect;
}

float Arme::affectResistance(float resistance) {
    return resistance - ResistanceEffect;
}

float Arme::affectVitesse(float vitesse) {
    return vitesse + VitesseEffect;
}

bool Arme::isMagic() const{
    return Name == "Magic wand";
}

void Arme::showArme() const {
    cout << "Weapon: " << Name << endl;
}