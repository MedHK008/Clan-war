#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Guerrier.h"

using namespace std;

class Clan {
private:
    string Name;
    vector<Guerrier> Guerriers;
    double Power;
public:
    Clan(string name);
    void CalculatePower();
    void AddGuerrier(const Guerrier& guerrier);
    void RemoveGuerrier(const string& name);
    void showClan() const;
    const vector<Guerrier>& getGuerriers() const;
    void ApplyDifficulty(Nv_difficulte Niveau);
    Guerrier& getGuerrier(int index);
};