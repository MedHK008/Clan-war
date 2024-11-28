#pragma once
#include <string>
#include <iostream>
#include <memory>
#include "Arme.h"
#include "Sword.h"
#include "Shield.h"
#include "Axe.h"
#include "Magic_wand.h"
#include "Difficulty.h"

using namespace std;

class Guerrier {
protected:
    string Name;
    float Health;
    float Power;
    float Attack;
    float Resistance = 1.0f;
    float Vitesse;
    Arme* arme;
    void armAEffect();
public:
    Guerrier(string name, float health, float attack, float vitesse);
    Guerrier(const Guerrier& guerrier);
    Guerrier& operator=(const Guerrier& other);
    std::string getName() const ;
    float CalculatePower();
    void getHit(float hit);
    float Hit();
    void addArme(Arme* arme);
    bool checkName(string name);
    bool checkHealth();
    void DifficultyEffect(Nv_difficulte Niveau);
    void showGuerrier() const;
};;



