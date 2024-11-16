#pragma once
#include "Bataille.h"

class Bataille_user : public Bataille
{
public:
	Bataille_user();
	~Bataille_user();
	void creer_clan_user();
	void afficher() const;
	void jouer();



};

