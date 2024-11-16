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

void Guerrier::armAEffect() {
    Attack = arme->affectAttack(Attack);
    Resistance = arme->affectResistance(Resistance);
    Vitesse = arme->affectVitesse(Vitesse);
}

void Guerrier::ChooseArm() {
    int choice;
    int repeat = 0;
    cout << "Choose your weapon: " << endl;
    cout << "1. Sword" << endl;
    cout << "2. Shield" << endl;
    cout << "3. Axe" << endl;
    cout << "4. Magic wand" << endl;
    cin >> choice;
    do {
        switch (choice) {
            case 1:
                arme = make_unique<Sword>("Sword");
                break;
            case 2:
                arme = make_unique<Shield>("Shield");
                break;
            case 3:
                arme = make_unique<Axe>("Axe");
                break;
            case 4:
                arme = make_unique<Magic_wand>("Magic wand");
                break;
            default:
                cout << "Invalid choice" << endl;
                repeat = 1;
                break;
        }
    }while (repeat == 0);
    armAEffect();
}

