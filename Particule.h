#pragma once
#include <cmath>
#include <iostream> //est necessaire pour la surcharge de l'operateur <<
#include "Vecteur3D.h"

class Particule{
	private :
	// ici les trois attributs de la classe Particule
		
		Vecteur3D position ;
		Vecteur3D vitesse ;
		double masse;
	
	public :
	 void test_test();
	 // prototypes des constructeurs de la classe de particule
	 Particule();
	 Particule(Vecteur3D position_,Vecteur3D vitesse_,double masse_);
	 
	 //l'utilisation du mot clé friend est potentiellement maladroit a verifier +faut'il mettre le mot clé const? apres
	friend std::ostream& operator<<(std::ostream& sortie,Particule const & particule );
	
	};
