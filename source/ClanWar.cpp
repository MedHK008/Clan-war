#include "ClanWar.h"

void ClanWar::displayMenu() {
    int choice;
    std::cout << "Choose game mode:" << std::endl;
    std::cout << "1: Player vs Player" << std::endl;
    std::cout << "2: Player vs Computer" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1: {
            Bataille_user batailleUser;
            batailleUser.jouer();
            break;
        }
        case 2: {
            Bataille_PC bataillePC;
            bataillePC.jouer();
            break;
        }
        default:
            std::cout << "Invalid choice. Exiting." << std::endl;
            break;
    }
}
