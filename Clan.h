#pragma once
#include <iostream>
#include <string>
#include <vector>
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
};