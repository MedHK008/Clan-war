#include "Bataille.h"

Bataille::Bataille(int type) : type_jeu(type)
{
}

Bataille::~Bataille()
{
	std::cout << "Fin de la bataille" << std::endl;
}

void Bataille::afficher() const
{
	if(!type_jeu)
		std::cout << "Type de jeu: UN vs PC" << std::endl;
	else
		std::cout << "Type de jeu: UN vs UN" << std::endl;
}

