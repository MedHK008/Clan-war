# Clan War

## Project Description

Clan War is a strategic game where players create and manage clans of warriors to battle against each other or against the computer. The game involves selecting warriors, equipping them with weapons, and applying various strategies to win battles.
The is between two warrior , each clan select the warrior to enter the battle, if you play against the Computer their warrior will be selected randomly, it continues like this untill a clan has no more warriors to enter the battle.

## Main Classes

- **Arme**: Base class for all weapons. It includes attributes like attack effect, resistance effect, speed effect, and health effect.
- **Sword, Shield, Axe, Magic_wand**: Derived classes from Arme, each with specific effects on the warrior's attributes.
- **Guerrier**: Base class for all warriors. It includes attributes like attack, resistance, speed, and health.
- **Arab, Persian, Pirate, Viking**: Derived classes from Guerrier, each with specific stats.
- **Clan**: Represents a group of warriors. It includes methods to calculate the clan's power, add or remove warriors, and apply difficulty effects.
- **Bataille**: Abstract base class for battles. It includes methods to play the game, create user clans, and display information.
- **Bataille_user**: Derived class from Bataille for user vs user battles.
- **Bataille_PC**: Derived class from Bataille for user vs computer battles.

## Functionality

- **Creating Clans**: Users can create clans by selecting warriors and equipping them with weapons.
- **Battles**: Users can engage in battles either against another user or against the computer.
- **Difficulty Levels**: The game includes different difficulty levels that affect the warriors' attributes and the overall challenge.
- **Warrior Management**: Users can manage their warriors by adding them to the clan, and by equipping them with different weapons.

## How to Play

1. Create a clan by selecting warriors and equipping them with weapons.
2. Choose the type of battle: user vs user or user vs computer.
3. Engage in battles and apply strategies to win.
