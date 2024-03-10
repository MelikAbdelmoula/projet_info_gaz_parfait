#pragma once
#include <cmath>
#include <iostream> //est necessaire pour la surcharge de l'operateur <<

class Vecteur3D{
	private:
	double x,y,z;
	
	public:
	// je met ici les prototypes des constructeurs mais il est possible qu'on doivent tout faire inside le header
	//constructeur par defaut
	Vecteur3D();

	//constructeur de vecteur avec coordonnées cartesiennes
	Vecteur3D(double x0,double y0,double z0);
	
	// constructeur de copie 
	Vecteur3D(const Vecteur3D & copied);

	
	//Affiche le vecteur sous format (x,y,z)
	//l'utilisation du mot clé friend est potentiellement maladroit a verifier +faut'il mettre le mot clé const? apres
	friend std::ostream& operator<<(std::ostream& sortie,Vecteur3D const & vecteur3D );
	
	//surcharge de l'operateur == qui compare les coordonnées des vecteurs avec une precision a regler
	bool operator ==(const Vecteur3D & vecteur_2);
	
	//surcharge de l'operateur += qui servira pour les autres calculs addi
	void operator+=(Vecteur3D const& vecteur3D);
	
	//surcharge de l'operateur -= qui servira pour les autres calculs soustrait deux vecteurs et en, renvoie le resultat
	void operator-=(Vecteur3D const& vecteur3D);
	
	Vecteur3D  operator-();
	
	
	
	
	//Multiplie un vecteur par un scalaire et en renvoie le résultat
	Vecteur3D operator*(const double& scalaire) const;
	
	double operator *(const Vecteur3D& vecteur_2) const;
	
	//Renvoie le produit vectoriel de deux vecteurs
	Vecteur3D operator^(const Vecteur3D& vecteur_2) const;
		
	//Retourne la norme d'un vecteur
	double norme() const;
	
	//Retourne la norme au carré d'un vecteur
	double norme2() const;
	
	//Normalise un vecteur à 1
	Vecteur3D operator ~() const;
	
};


//surcharge de l'operateur + de maniere externe
Vecteur3D  operator +(Vecteur3D vecteur3D_1, Vecteur3D const& vecteur3D_2);

//surcharge de l'operateur - de maniere externe
Vecteur3D  operator -(Vecteur3D vecteur3D_1, Vecteur3D const& vecteur3D_2);
	



