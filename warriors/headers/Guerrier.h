#include <string>
#include <iostream>
#include <memory>
#include "Arme.h"
#include "Sword.h"
#include "Shield.h"
#include "Axe.h"
#include "Magic_wand.h"

using namespace std;

class Guerrier {
protected:
    string Name;
    float Health;
    float Power;
    float Attack;
    float Resistance;
    float Vitesse;
    unique_ptr<Arme> arme;
    void armAEffect();
public:
    Guerrier(string name, float health, float attack, float resistance, float vitesse);
    void CalculatePower();
    void getHit(float hit);
    float Hit();
    void ChooseArm();
};;