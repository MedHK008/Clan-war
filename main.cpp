#pragma once
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


using namespace std;

int main() 
{
    Clan clan1("Clan1");
    Guerrier *guerrier1 = new Viking();
    guerrier1->ChooseArm();
    clan1.AddGuerrier(*guerrier1);

    clan1.showClan();
}