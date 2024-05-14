#pragma once
#include "Humain.h"
class Guerrier : public Humain
{
public :
	Guerrier(string nom, int l = 1, bool sexe = 1, int x = 0, int y = 0,bool maudit=0);
	void sePresenter();
	void Attaquer(Humain* victime);
};

