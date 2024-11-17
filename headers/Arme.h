#pragma once
#include <iostream>
#include <string>

using namespace std;

class Arme {
protected:
    string Name;
    float AttackEffect;
    float ResistanceEffect;
    float VitesseEffect;
    float HealthEffect;
public:
    Arme(string name, float attackEffect, float resistanceEffect, float vitesseEffect, float healthEffect);
    float affectHealth(float health);
    float affectAttack(float attack);
    float affectResistance(float resistance);
    float affectVitesse(float vitesse);
    bool isMagic() const;
    void showArme() const;
};