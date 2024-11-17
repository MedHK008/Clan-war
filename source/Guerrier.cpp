#include "Guerrier.h"

Guerrier::Guerrier(std::string name, float health, float attack, float vitesse):Name(name), Health(health), Attack(attack), Vitesse(vitesse) {}

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
    Power = (Health + Attack + Vitesse);
    return Power;
}

void Guerrier::getHit(float hit) {
    hit *= Resistance;
    Health -= hit;
    cout << Name << " got hit with " << hit << " damage, ";
    if (Health < 0) {
        Health = 0;
    }
    cout << "Current Health: " << Health << endl;
}

float Guerrier::Hit() {
    if(arme == nullptr) {
        cout << "You have no weapon" << endl;
        return 0;
    } else if (arme->isMagic()) {
        Health = arme->affectHealth(Health);
    }
    cout << Name << " attacks with " << Attack << " damage." << endl;
    return this->Attack;
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

bool Guerrier::checkHealth() {
    return Health <= 0;
}

std::string Guerrier::getName() const {
    return Name;
}

void Guerrier::DifficultyEffect(Nv_difficulte Niveau) {
    switch (Niveau) {
        case facile:
            Health *= 0.8;
            Attack *= 0.8;
            Resistance *= 1.2;
            Vitesse *= 0.8;
            break;
        case moyen:
            break;
        case difficile:
            Health *= 1.2;
            Attack *= 1.2;
            Resistance *= 0.8;
            Vitesse *= 1.2;
            break;
    }
}

void Guerrier::showGuerrier() const {
    cout <<  Name << " ";
    arme->showArme();
}
