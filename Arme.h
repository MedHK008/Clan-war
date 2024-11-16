#pragma once
#include <iostream>
#include <string>

using namespace std;

class Arme {
protected:
    string Name;
    float AttackEffect = 0;
    float ResistanceEffect = 0;
    float VitesseEffect = 0;
    float HealthEffect = 0;
public:
    Arme(string name);
    float affectHealth(float health);
    float affectAttack(float attack);
    float affectResistance(float resistance);
    float affectVitesse(float vitesse);
    bool isMagic() const;
    void showArme() const;
};