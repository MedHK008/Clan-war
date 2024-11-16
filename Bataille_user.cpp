#include "Bataille_user.h"

Bataille_user::Bataille_user():Bataille(1)
{
}

Bataille_user::~Bataille_user()
{
}

void Bataille_user::creer_clan_user()
{
	std::cout << "Creation du clan 1 : " << std::endl;
	//clan1 = Bataille::creer_clan();
	std::cout << "Creation du clan 2 : " << std::endl;
	//clan2 = Bataille::creer_clan();
}

void Bataille_user::afficher() const
{
	Bataille::afficher();
}

void Bataille_user::jouer()
{
	std::cout << "Jeu en cours..." << std::endl;

}
