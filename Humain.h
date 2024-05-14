#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>

using namespace std;
class Humain
{
protected :
	string nom;
	int pvMax;
	int pv;
	int level;
	bool sexe; // 0=femme / 1=homme
	int Xcoor;
	int Ycoor;
	bool contamine;
	friend class Guerrier;
public:
	Humain(string nom, int l=1, bool sexe=1, int x=0 , int y=0,bool maudit=0 );
	virtual void parler(string texte);
	void sePresenter();
	string getNom();
	void Attaquer(Humain* victime);
	float distance(Humain* h);
	Humain* LePlusProche(list<Humain*> persos);
	void Malediction(list<Humain*> persos);


};

