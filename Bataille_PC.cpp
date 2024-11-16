#include "Bataille_PC.h"

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
}
