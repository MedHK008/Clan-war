
#include "Magic_wand.h"

int Magic_wand::ATTACK_EFFECT = ATTACK_EFFECT_WAND;
int Magic_wand::RESISTANCE_EFFECT = RESISTANCE_EFFECT_WAND;
int Magic_wand::VITESSE_EFFECT = VITESSE_EFFECT_WAND;
int Magic_wand::HEALTH_EFFECT = HEALTH_EFFECT_WAND;

Magic_wand::Magic_wand(string name) : Arme(name) {}