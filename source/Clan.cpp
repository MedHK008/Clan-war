#include "Clan.h"

Clan::Clan(string name) : Name(name), Power(0) {}

void Clan::CalculatePower() {
    Power = 0;
    for (auto& guerrier : Guerriers) {
        Power += guerrier.CalculatePower();
    }
}

void Clan::AddGuerrier(const Guerrier& guerrier) {
    Guerriers.push_back(guerrier);
    CalculatePower();
}

void Clan::RemoveGuerrier(const string& name) {
    for (auto it = Guerriers.begin(); it != Guerriers.end(); ++it) {
        if (it->checkName(name)) {
            Guerriers.erase(it);
            break;
        }
    }
    CalculatePower();
}

const vector<Guerrier>& Clan::getGuerriers() const {
    return Guerriers;
}

Guerrier& Clan::getGuerrier(int index) {
    return Guerriers.at(index);
}

void Clan::ApplyDifficulty(Nv_difficulte Niveau) {
    for (auto& guerrier : Guerriers) {
        guerrier.DifficultyEffect(Niveau);
    }
}


void Clan::showClan() const {
    cout << "Clan Name: " << Name << endl;
    cout << "Clan Power: " << Power << endl;
    cout << "Guerriers: " << endl;
    int i = 0;
    for (const auto& guerrier : Guerriers) {
        cout << i << ": ";
        guerrier.showGuerrier();
        i++;
    }
}