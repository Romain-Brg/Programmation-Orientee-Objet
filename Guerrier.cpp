#include "Guerrier.h"

Guerrier::Guerrier(string nom, int l, bool sexe, int x, int y,bool maudit) : Humain(nom, l, sexe, x, y)
{
	pvMax = (500 + level * 200) * 1.2;
	pv = pvMax;
}

void Guerrier::sePresenter()
{
	Humain::sePresenter();
	switch (sexe)
	{
	case false :
		cout << "("<<nom<<") – Je suis une guerrière." << endl;
		break;
	case true :
		cout << "(" << nom << ") – Je suis un guerrier." << endl;
		break;
	}
}

void Guerrier::Attaquer(Humain* victime)
{
	int degatsInfliges = 100 + abs(level - victime->level) * 5;

	if (victime->pv == 0)
	{
		cout << "(" << nom << ") -- Je ne peux pas l’attaquer, il est déjà mort !" << endl;
	}
	else
	{
		if (victime->pv - degatsInfliges <= 0)
		{
			victime->parler("Argh… Je meurs !");
			level++;
			pvMax = 500 + level * 200;
			victime->pv = 0;
		}
		if (victime->pv - degatsInfliges > 0)
		{
			cout << "******* (" << nom << ") attaque " << victime->nom << " et lui inflige " << degatsInfliges << " points de degats." << endl;
			victime->pv = victime->pv - degatsInfliges;
		}

	}


}
