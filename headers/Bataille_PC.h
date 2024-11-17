#include <iostream>
#include "Bataille.h"

class Bataille_PC : public Bataille
{
	private:
		Nv_difficulte Niveau;
		int numGuerriers;
	public:
		Bataille_PC();
		~Bataille_PC();
		void choisirNiveau();
		void afficher() const ;
		void jouer();
		void creer_clan_Pc();
		void creer_clan_user() override;

};

