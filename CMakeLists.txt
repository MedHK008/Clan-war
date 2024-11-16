cmake_minimum_required(VERSION 3.10)
project(ClanWar)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        ClanWar main.cpp Clan.cpp Clan.h
        Arme.h Arme.cpp
        Magic_wand.h Magic_wand.cpp
        Shield.h Shield.cpp
        Sword.h Sword.cpp
        Axe.h Axe.cpp

        Guerrier.h Guerrier.cpp
        Arab.h Arab.cpp
        Persian.h Persian.cpp
        Pirate.h Pirate.cpp
        Viking.h Viking.cpp
)