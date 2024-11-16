#pragma once
#include <iostream>
#include "Clan.h"

class Bataille
{
	private:
		
		int type_jeu;//0:vs pc 1: un vs un 
		//clan *clan1;
		//clan *clan2;

protected:
    Clan* clan1;
    Clan* clan2;

public:
	Bataille(int type);
	~Bataille();
	void afficher() const;
	virtual void jouer()=0;	
	virtual void creer_clan() = 0;
};



