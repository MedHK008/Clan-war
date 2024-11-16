#pragma once
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
    Arme* arme;
    void armAEffect();
public:
    Guerrier(string name, float health, float attack, float resistance, float vitesse);
    Guerrier(const Guerrier& guerrier);
    Guerrier& operator=(const Guerrier& other); // Assignment operator
    float CalculatePower();
    void getHit(float hit);
    float Hit();
    void addArme(Arme* arme);
    bool checkName(string name);
    void showGuerrier() const;
};;