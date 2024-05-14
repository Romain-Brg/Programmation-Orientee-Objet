#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>

#include "Humain.h"
#include"Guerrier.h"
#include "Sorcier.h"

using namespace std;

int main()
{
	
	/*
	Asta.sePresenter();
	Asta.parler("Je suis un voyageur qui cherche refuge.");
	Uther.sePresenter();
	Uther.parler("Je vous souhaite la bienvenue dans mon village.");

	Uther.Attaquer(&Asta);
	Uther.Attaquer(&Asta);
	Uther.Attaquer(&Asta);
	Uther.Attaquer(&Asta);
	Uther.Attaquer(&Asta);*/

	

	list<Humain*> personnages;
	list<Humain*> ::iterator it;
	Guerrier Arthur("Arthur", 10, true,3,12);
	Sorcier Gargamel("Gargamel", 15, true,15,34);
	Humain Asta("Asta", 1, false,15,34);
	Humain Uther("Uther l'ancien", 99, true,3,12);
	personnages.push_back(&Arthur);
	personnages.push_back(&Gargamel);
	personnages.push_back(&Asta);
	personnages.push_back(&Uther);

	for (it = personnages.begin(); it != personnages.end(); it++)
	{
		(*it)->sePresenter();
	}
	cout << Uther.distance(&Asta)<<endl;


	return 0;
}