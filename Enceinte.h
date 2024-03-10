#pragma once
#include <cmath>
#include "Vecteur3D.h"

class Enceinte{
	private :
		double hauteur;
		double largeur;
		double profondeur;

	public:
	
	//Prototype du constructeur par défaut de la classe Enceinte
	Enceinte(double hauteur_=20, double largeur_=20, double profondeur_=20);
	friend std::ostream& operator<<(std::ostream& sortie,Enceinte const& enceinte );
	
	
	
};
