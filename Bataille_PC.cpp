#include "Bataille_PC.h"
#include "Viking.h"
#include "Arab.h"

Bataille_PC::Bataille_PC() :Bataille(0)
{
}

Bataille_PC::~Bataille_PC()
{
}

void Bataille_PC::choisirNiveau()
{
	int choix;
	std::cout << "Choisir le niveau de difficulte" << std::endl;
	std::cout << "0: facile" << std::endl;
	std::cout << "1: moyen" << std::endl;
	std::cout << "2: difficile" << std::endl;
	do {
		std::cin >> choix;
	} while (choix < 0 || choix>2);
	switch (choix)
	{
	case 0: Niveau = facile;
		break;
	case 1: Niveau = moyen;
		break;
	default: Niveau = difficile;
		break;
	}
}

void Bataille_PC::afficher() const
{
	std::cout << "Niveau de difficulte: " << Niveau << std::endl;
	Bataille::afficher();
}

void Bataille_PC::jouer()
{
    std::cout << "Starting the battle..." << std::endl;
    // Implement battle logic here
}

void Bataille_PC::creer_clan() {
    clan1 = new Clan("Clan1");
    Guerrier* guerrier1 = new Viking();
    Arme* arme1 = new Sword("Sword1");
    guerrier1->addArme(arme1);
    clan1->AddGuerrier(*guerrier1);

    Guerrier* guerrier2 = new Arab();
    guerrier2->addArme(arme1);
    clan1->AddGuerrier(*guerrier2);

    clan1->showClan();
}

void Bataille_PC::creer_clan_Pc() {
    creer_clan();
}
