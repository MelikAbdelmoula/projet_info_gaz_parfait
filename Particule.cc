#include <iostream>
#include <cmath>
#include "Particule.h"
#include "Vecteur3D.h"
using namespace std;
		
	//constructeurs de la classe Particule avec initialisation des trois attributs obligatoire 
	Particule :: Particule(Vecteur3D position_,Vecteur3D vitesse_,double masse_)
	:position(position_),vitesse(vitesse_),masse(masse_)
	{
		
	}
	
	//constructeurs de la classe Particule par defaut
	Particule :: Particule()
	:position(Vecteur3D(0,0,0)),vitesse(Vecteur3D(0,0,0)),masse(0)
	{}
	
	
	//mise en place d'un operateur << pour une particule
	ostream& operator<<(ostream& sortie,Particule const & particule ){
		sortie << "pos : " <<particule.position << " ; v : "<< particule.vitesse <<" ; m : "<< particule.masse ;
        return sortie;
        }
        
        //format pos : 1 1 1 ; v : 0 0 0 ; m : 4.002602
	
	

