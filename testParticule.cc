#include <iostream>
#include <cmath>
#include "Vecteur3D.h"
#include "Particule.h"
using namespace std;


int main(){
	//creation des  vecteurs
	

	//Particule particule0;
	Particule particule1(Vecteur3D(1,1,1),Vecteur3D(0,0,0),4.002602);
	Particule particule2(Vecteur3D(1,18.5,1),Vecteur3D(0,0.2,0),20.1797);
	Particule particule3(Vecteur3D(1,1,3.1),Vecteur3D(0,0,-0.5),39.948);
	
	Particule particule4(particule2);
	
	//creation d'un vecteur nul pour essayer le constructeur par default
	
	// particule 1 : pos : 1 1 1 ; v : 0 0 0 ; m : 4.002602
	// particule 2 : pos : 1 18.5 1 ; v : 0 0.2 0 ; m : 20.1797
	// particule 3 : pos : 1 1 3.1 ; v : 0 0 -0.5 ; m : 39.948
	// particule 4 : pos : 1 18.5 1 ; v : 0 0.2 0 ; m : 20.1797
	
	//cout <<"particule 0 : " << particule0 <<endl;
	cout <<"particule 1 : " << particule1 <<endl;
	cout <<"particule 2 : " << particule2 <<endl;
	cout <<"particule 3 : " << particule3 <<endl;
	cout <<"particule 4 : " << particule4 <<endl;
	return 0;
	}
