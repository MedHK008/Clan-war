#include "Guerrier.h"

Guerrier::Guerrier(std::string name, float health, float attack, float resistance, float vitesse):Name(name), Health(health), Attack(attack), Resistance(resistance), Vitesse(vitesse) {}

void Guerrier::CalculatePower() {
    Power = (Health + Attack + Vitesse) * (Resistance + 1);
}

void Guerrier::getHit(float hit) {
    hit *= Resistance;
    Health -= hit;
}

float Guerrier::Hit() {
    return Power;
}

