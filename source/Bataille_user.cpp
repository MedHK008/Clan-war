#include "Bataille_user.h"
#include "Clan.h"
#include "Guerrier.h"
#include "Viking.h"
#include "Arab.h"
#include "Persian.h"
#include "Pirate.h"
#include "Arme.h"
#include "Sword.h"
#include "Axe.h"
#include "Magic_wand.h"
#include "Shield.h"
#include <unistd.h>


Bataille_user::Bataille_user():Bataille(1)
{
}

Bataille_user::~Bataille_user()
{
}

void Bataille_user::creer_clan_user()
{
	std::cout << "Creation du clan 1 : " << std::endl;
	clan1 = creer_clan("Player 1");

	std::cout << "Creation du clan 2 : " << std::endl;
	clan2 = creer_clan("Player 2");
}

Clan* Bataille_user::creer_clan(const std::string& playerName) {
    std::string clanName;
    std::cout << playerName << ", enter the name of your clan: ";
    std::cin >> clanName;
    Clan* clan = new Clan(clanName);

    int numGuerriers;
    std::cout << playerName << ", enter the number of Guerriers: ";
    std::cin >> numGuerriers;

    for (int i = 0; i < numGuerriers; ++i) {
        int guerrierType;
        std::cout << playerName << ", choose Guerrier type (1: Viking, 2: Arab, 3: Persian, 4: Pirate): ";
        std::cin >> guerrierType;

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
                std::cout << "Invalid choice, defaulting to Viking." << std::endl;
                guerrier = new Viking();
                break;
        }

        int armeType;
        std::cout << playerName << ", choose Arme type (1: Sword, 2: Axe, 3: Magic wand, 4: Shield): ";
        std::cin >> armeType;

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
                std::cout << "Invalid choice, defaulting to Sword." << std::endl;
                arme = new Sword("Sword");
                break;
        }

        guerrier->addArme(arme);
        clan->AddGuerrier(*guerrier);
    }

    clan->showClan();
    return clan;
}

void Bataille_user::afficher() const
{
	Bataille::afficher();
}

void Bataille_user::jouer()
{
	std::cout << "Jeu en cours..." << std::endl;
    creer_clan_user();

    float hit;
    while (clan1->getGuerriers().size() > 0 && clan2->getGuerriers().size() > 0) {
        int player1Index;
        std::cout << "Player 1, choose your Guerrier to fight: ";
        std::cin >> player1Index;

        if (player1Index < 0 || player1Index >= clan1->getGuerriers().size()) {
            std::cout << "Invalid choice, defaulting to first Guerrier." << std::endl;
            player1Index = 0;
        }

        Guerrier& player1Guerrier = clan1->getGuerrier(player1Index);

        int player2Index;
        std::cout << "Player 2, choose your Guerrier to fight: ";
        std::cin >> player2Index;

        if (player2Index < 0 || player2Index >= clan2->getGuerriers().size()) {
            std::cout << "Invalid choice, defaulting to first Guerrier." << std::endl;
            player2Index = 0;
        }

        Guerrier& player2Guerrier = clan2->getGuerrier(player2Index);

        while (!player1Guerrier.checkHealth() && !player2Guerrier.checkHealth()) {
            hit = player1Guerrier.Hit();
            player2Guerrier.getHit(hit);
            sleep(1);
            if (player2Guerrier.checkHealth()) {
                std::cout << player2Guerrier.getName() << " from Player 2's clan is defeated!" << std::endl;
                clan2->RemoveGuerrier(player2Guerrier.getName());
                break;
            }
            hit = player2Guerrier.Hit();
            player1Guerrier.getHit(hit);
            sleep(1);
            if (player1Guerrier.checkHealth()) {
                std::cout << player1Guerrier.getName() << " from Player 1's clan is defeated!" << std::endl;
                clan1->RemoveGuerrier(player1Guerrier.getName());
                break;
            }
        }
    }

    if (clan1->getGuerriers().size() > 0) {
        std::cout << "Player 1's clan wins!" << std::endl;
    } else {
        std::cout << "Player 2's clan wins!" << std::endl;
    }
}
