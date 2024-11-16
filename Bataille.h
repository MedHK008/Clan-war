#pragma once
#include <iostream>


class Bataille
{
	private:
		
		int type_jeu;//0:vs pc 1: un vs un 
		//clan *clan1;
		//clan *clan2;


public:
	Bataille(int type);
	~Bataille();
	void afficher() const;
	virtual void jouer()=0;	
	//clan* creer_clan();
};



