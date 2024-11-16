#include <iostream>
#include <string>
#include "Guerrier.h"
#include "Arab.h"
#include "Viking.h"
#include "Pirate.h"
#include "Persian.h"
#include "Arme.h"
#include "Shield.h"
#include "Magic_wand.h"
#include "Axe.h"
#include "Sword.h"
#include "Clan.h"
#include "Bataille.h"
#include "Bataille_PC.h"
#include "Bataille_user.h"


using namespace std;

int main() 
{
    Bataille_PC bataille;
    bataille.jouer();
    return 0;
}