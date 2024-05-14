#pragma once
#include "Humain.h"
class Sorcier : public Humain
{
private:
	int pmMax;
	int pm;
public:
	Sorcier(string nom, int l = 1, bool sexe = 1, int x = 0, int y = 0,bool maudit=0);
	void sePresenter();

};

