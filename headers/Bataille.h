#pragma once
#include <iostream>
#include "Clan.h"

class Bataille
{
private:
	int type_jeu;///0:vs pc 1: un vs un 

protected:
    Clan* clan1;
    Clan* clan2;

public:
	Bataille(int type);
	~Bataille();
	virtual void jouer()=0;
	virtual void creer_clan_user()=0;
	void afficher() const;
};



