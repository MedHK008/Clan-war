#include "Guerrier.h"

Guerrier::Guerrier(std::string name, float health, float attack, float resistance, float vitesse):Name(name), Health(health), Attack(attack), Resistance(resistance), Vitesse(vitesse) {}

Guerrier::Guerrier(const Guerrier& other)
    : Name(other.Name), Health(other.Health), Power(other.Power), Attack(other.Attack),
      Resistance(other.Resistance), Vitesse(other.Vitesse) {
    if (other.arme) {
        arme =other.arme;
    }
}

Guerrier& Guerrier::operator=(const Guerrier& other) {
    if (this == &other) {
        return *this;
    }
    Name = other.Name;
    Health = other.Health;
    Power = other.Power;
    Attack = other.Attack;
    Resistance = other.Resistance;
    Vitesse = other.Vitesse;
    if (other.arme) {
        arme = other.arme;
    }
    return *this;
}

float Guerrier::CalculatePower() {
    Power = (Health + Attack + Vitesse) * (Resistance + 1);
    return Power;
}

void Guerrier::getHit(float hit) {
    hit *= Resistance;
    Health -= hit;
}

float Guerrier::Hit() {
    if(arme == nullptr) {
        cout << "You have no weapon" << endl;
        return 0;
    } else if (arme->isMagic()) {
        Health += arme->affectHealth(Health);
    }
    return Attack;
}

void Guerrier::armAEffect() {
    Attack = arme->affectAttack(Attack);
    Resistance = arme->affectResistance(Resistance);
    Vitesse = arme->affectVitesse(Vitesse);
}
void Guerrier::addArme(Arme* arme) {
    this->arme = arme;
    armAEffect();
}
bool Guerrier::checkName(std::string name) {
    return Name == name;
}

void Guerrier::showGuerrier() const {
    cout << "Name: " << Name << endl;
    arme->showArme();
}
