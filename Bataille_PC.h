#pragma once
#include <iostream>
#include "Bataille.h"
enum Nv_difficulte
{
	facile,
	moyen,
	difficile

};
class Bataille_PC : public Bataille
{
private:
	Nv_difficulte Niveau;

public:
	Bataille_PC();
	~Bataille_PC();
	void choisirNiveau();
	void afficher() const ;
	void jouer();
	void creer_clan() override;
	void creer_clan_Pc(int);
	int creer_clan_user();

};

