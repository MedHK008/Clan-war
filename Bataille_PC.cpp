#include "Bataille_PC.h"
#include "Viking.h"
#include "Arab.h"
#include "Persian.h"
#include "Clan.h"
#include "Pirate.h"
#include "Sword.h"
#include "Axe.h"
#include "Magic_wand.h"
#include "Shield.h"
#include <unistd.h>

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

	do 
	{
		std::cin >> choix;
	} while (choix < 0 || choix>2);

	switch (choix)
	{
		case 0: 
			Niveau = facile;
			break;
		case 1: 
			Niveau = moyen;
			break;
		default: 
			Niveau = difficile;
			break;
	}
}

void Bataille_PC::afficher() const
{
	std::cout << "Niveau de difficulte: " << Niveau << std::endl;
	Bataille::afficher();
}



void Bataille_PC::creer_clan() {
    
}

void Bataille_PC::creer_clan_Pc(int numGuerriers) {
	clan2 = new Clan("Machine Clan");

	for (int i = 0; i < numGuerriers; ++i) {
		int guerrierType = rand() % 4 + 1;

		Guerrier* guerrier = nullptr;
		switch (guerrierType) {
			case 1:
				guerrier = new Viking();
				break;
			case 2:
				guerrier = new Arab();
				break;
			case 3:
				guerrier = new Persian();
				break;
			case 4:
				guerrier = new Pirate();
				break;
			default:
				cout << "Invalid choice, defaulting to Viking." << endl;
				guerrier = new Viking();
				break;
		}

		int armeType = rand() % 4 + 1;

		Arme* arme = nullptr;
		switch (armeType) {
			case 1:
				arme = new Sword("Sword");
				break;
			case 2:
				arme = new Axe("Axe");
				break;
			case 3:
				arme = new Magic_wand("Magic wand");
				break;
			case 4:
				arme = new Shield("Shield");
				break;
			default:
				cout << "Invalid choice, defaulting to Sword." << endl;
				arme = new Sword("Sword");
				break;
		}

		guerrier->addArme(arme);
		clan2->AddGuerrier(*guerrier);
	}

	clan2->showClan();
}

int Bataille_PC::creer_clan_user() {
    string clanName;
    cout << "Enter the name of your clan: ";
    cin >> clanName;
    clan1 = new Clan(clanName);

    int numGuerriers;
    cout << "Enter the number of Guerriers: ";
    cin >> numGuerriers;

    for (int i = 0; i < numGuerriers; ++i) {
        int guerrierType;
        cout << "Choose Guerrier type (1: Viking, 2: Arab, 3: Persian, 4: Pirate): ";
        cin >> guerrierType;

        Guerrier* guerrier = nullptr;
        switch (guerrierType) {
            case 1:
                guerrier = new Viking();
                break;
            case 2:
                guerrier = new Arab();
                break;
			case 3:
				guerrier = new Persian();
				break;
			case 4:
				guerrier = new Pirate();
				break;
            default:
                cout << "Invalid choice, defaulting to Viking." << endl;
                guerrier = new Viking();
                break;
        }

        int armeType;
        cout << "Choose Arme type (1: Sword, 2: Axe, 3: Magic wand, 4: Shield): ";
        cin >> armeType;

        Arme* arme = nullptr;
        switch (armeType) {
            case 1:
                arme = new Sword("Sword");
                break;
            case 2:
                arme = new Axe("Axe");
                break;
            case 3:
                arme = new Magic_wand("Magic wand");
                break;
			case 4:
				arme = new Shield("Shield");
				break;
            default:
                cout << "Invalid choice, defaulting to Sword." << endl;
                arme = new Sword("Sword");
                break;
        }

        guerrier->addArme(arme);
        clan1->AddGuerrier(*guerrier);
    }

    clan1->showClan();
	return numGuerriers;
}

void Bataille_PC::jouer()
{
    choisirNiveau();
    int numGuerriers = creer_clan_user();
    creer_clan_Pc(numGuerriers);

    while (clan1->getGuerriers().size() > 0 && clan2->getGuerriers().size() > 0) {
        int machineIndex = rand() % clan2->getGuerriers().size();
        Guerrier& machineGuerrier = clan2->getGuerrier(machineIndex);

        int userIndex;
        cout << "Choose your Guerrier to fight against " << machineGuerrier.getName() << ": ";
        cin >> userIndex;

        if (userIndex < 0 || userIndex >= clan1->getGuerriers().size()) {
            cout << "Invalid choice, defaulting to first Guerrier." << endl;
            userIndex = 0;
        }

        Guerrier& userGuerrier = clan1->getGuerrier(userIndex);

        while (!userGuerrier.checkHealth() && !machineGuerrier.checkHealth()) {
            machineGuerrier.getHit(userGuerrier.Hit());
			sleep(1);
            if (machineGuerrier.checkHealth()) {
                cout << machineGuerrier.getName() << " from machine clan is defeated!" << endl;
                clan2->RemoveGuerrier(machineGuerrier.getName());
                break;
            }

            userGuerrier.getHit(machineGuerrier.Hit());
			sleep(1);
            if (userGuerrier.checkHealth()) {
                cout << userGuerrier.getName() << " from your clan is defeated!" << endl;
                clan1->RemoveGuerrier(userGuerrier.getName());
                break;
            }
        }
    }

    if (clan1->getGuerriers().size() > 0) {
        cout << "Your clan wins!" << endl;
    } else {
        cout << "Machine clan wins!" << endl;
    }
}