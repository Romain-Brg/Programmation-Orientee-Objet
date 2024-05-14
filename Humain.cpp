#include "Humain.h"

Humain::Humain(string nom, int l , bool sexe , int x , int y,bool maudit)
{
	this->nom = nom;
	level = l;
	this->sexe = sexe;
	pvMax = 500 + level * 200;
	pv = pvMax;
	Xcoor = x;
	Ycoor = y;
}

void Humain::parler(string texte)
{
	cout << "(" << nom << ") -- " << texte << endl;
}

void Humain::sePresenter()
{
	if(sexe==1)
		cout << "(" << nom << ") -- Bonjour ! Je suis " << nom << ". Je suis un humain de niveau " << level << "." << endl;
	else
		cout << "(" << nom << ") -- Bonjour ! Je suis " << nom << ". Je suis une humaine de niveau " << level << "." << endl;
}

string Humain::getNom()
{
	return nom;
}

void Humain::Attaquer(Humain* victime)
{
	int degatsInfliges = 15 + abs(level - victime->level) * 2;

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

float Humain::distance(Humain* h)
{
	return sqrt(pow(Xcoor - h->Xcoor,2) + pow(Ycoor - h->Ycoor,2));
}



Humain* Humain::LePlusProche(list<Humain*> persos)
{
	float ecart = 0;
	list<Humain*>::iterator it;
	list<Humain*>::iterator it2=persos.begin();
	while (this->nom == (*it2)->nom && it2 != persos.end())
		it2++;
	for(it=persos.begin();it!=persos.end();it++)
	{
		if (this->distance(*it) < this->distance(*it2) && this->nom != (*it)->nom)
			it2 = it;
	}
	return (*it2);
}

void Humain::Malediction(list<Humain*> persos)
{


}