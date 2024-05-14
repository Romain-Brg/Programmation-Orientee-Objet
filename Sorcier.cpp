#include "Sorcier.h"

Sorcier::Sorcier(string nom, int l, bool sexe, int x, int y,bool maudit) : Humain(nom,l,sexe,x,y)
{
	pmMax = 200 + level * 50;
	pm = pmMax;
}

void Sorcier::sePresenter()
{
	Humain::sePresenter();
	switch (sexe)
	{
	case false:
		cout << "(" << nom << ") – Je suis une sorcière." << endl;
		break;
	case true:
		cout << "(" << nom << ") – Je suis un sorcier." << endl;
		break;
	}
}
