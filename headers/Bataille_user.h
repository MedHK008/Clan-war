#pragma once
#include "Bataille.h"

class Bataille_user : public Bataille
{
public:
	Bataille_user();
	~Bataille_user();
	void creer_clan_user() override;
	void afficher() const;
	void jouer();

private:
    Clan* creer_clan(const std::string& playerName);

};

