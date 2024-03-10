#include <iostream>
#include <cmath>
#include "Enceinte.h"
using namespace std;


//Définition du constructeur par défaut de la classe Enceinte
Enceinte :: Enceinte(double hauteur_,double largeur_,double profondeur_)
	:hauteur(hauteur_), largeur(largeur_), profondeur(profondeur_){}


//Mise en place d'un opérateur << pour la classe Enceinte
ostream& operator<<(ostream& sortie,Enceinte const& enceinte ){
		sortie << "hauteur: " <<enceinte.hauteur << " largeur: "<< enceinte.largeur <<" profondeur: "<< enceinte.profondeur ;
        return sortie;
        }
