#include <iostream>
#include <cmath>
#include "Vecteur3D.h"
using namespace std;





	//constructeur par defaut créé le vecteur nul
	Vecteur3D::Vecteur3D()
		:x(0.0),y(0.0),z(0.0)
		{
			//peut etre utile pour les tests a virer sinon
			//cout << "creation du vecteur nul" << endl;
		}
		
	//constructeur utilisant les 3 coordoones cartesiennes	
	Vecteur3D::Vecteur3D(double x0,double y0,double z0)
		:x(x0),y(y0),z(z0)
		{}
		
	// constructeur de copie 
	Vecteur3D::Vecteur3D(const Vecteur3D & copied)
		:x(copied.x),y(copied.y),z(copied.z)
		{//cout << "copie"<<endl;
		}
		
		
		
	//mise en place d'un operateur << pour remplacer affiche et d'un operateur + pour remplacer additionne
	ostream& operator<<(ostream& sortie,Vecteur3D const & vecteur3D ){
		sortie << vecteur3D.x <<" "<< vecteur3D.y<<" "<< vecteur3D.z ;
        return sortie;
        }
        
	//Permet de comparer avec une certaine précision l'égalité entre deux vecteurs
	//surcharge de == pour comparer deux vecteurs la precision est a regler
	bool Vecteur3D::operator==(const Vecteur3D & vecteur_2){
		double accuracy(0.000000001);
		return (abs(vecteur_2.x)-abs(x) <= accuracy) and (abs(vecteur_2.y)-abs(y) <= accuracy) and (abs(vecteur_2.z) - abs(z) <= accuracy);
		}
	
	
	//surcharge de l'operateur += pour les vecteur 3D
	void Vecteur3D:: operator+=(const Vecteur3D & vecteur3D){
		x+=vecteur3D.x;
		y+=vecteur3D.y;
		z+=vecteur3D.z;
		}
		
	// surcharge de l'operateur +
	Vecteur3D operator+(Vecteur3D vecteur3D_1, const Vecteur3D & vecteur3D_2){
		
		vecteur3D_1+=vecteur3D_2;
		
		return vecteur3D_1;
		
		}
	//surcharge de l'operateur -= pour les vecteur 3D
	void Vecteur3D:: operator-=(Vecteur3D const& vecteur3D){
		x-=vecteur3D.x;
		y-=vecteur3D.y;
		z-=vecteur3D.z;
		}
		
	// surcharge de l'operateur - soustrait deux vecteurs
	Vecteur3D operator-(Vecteur3D vecteur3D_1, Vecteur3D const& vecteur3D_2){
		vecteur3D_1-=vecteur3D_2;
		return vecteur3D_1;
		
		}




	//Permet de définir les coordonnées d'un vecteur
	//Il y a un problème, on ne peut pas mettre de valeurs par défaut dans les fonctions 
	//Je capte pas pourquoi, je veux mettre x0 = 0, y0 = 0 et z0 = 0
	//void Vecteur3D::set_coord(double x0, double y0, double z0){
		//x = x0;
		//y = y0;
		//z = z0;
	//}
	

	//Renvoie l'opposé d'un vecteur a l'aide de la surcharge de -
	Vecteur3D Vecteur3D:: operator-(){
		return Vecteur3D(-x,-y,-z);
		}
		
	//Multiplie un vecteur par un scalaire et en renvoie le résultat
	Vecteur3D Vecteur3D::operator*(const double& scalaire) const {
		
		return Vecteur3D(x*scalaire,y*scalaire,z*scalaire);
	}
	
	//Renvoie le produit scalaire entre 2 vecteurs
	double Vecteur3D::operator*(const Vecteur3D& vecteur_2) const {
		
		return double(x*vecteur_2.x + y*vecteur_2.y + z*vecteur_2.z);
	}
	
	//Renvoie le produit vectoriel de deux vecteurs
	Vecteur3D Vecteur3D:: operator^(const Vecteur3D& vecteur_2) const {
		
		return Vecteur3D(y*vecteur_2.z-z*vecteur_2.y,z*vecteur_2.x-x*vecteur_2.z,x*vecteur_2.y-y*vecteur_2.x);
	}
	
	//Retourne la norme d'un vecteur
	// tu m'expliquera la facon dont t'as fait ca --> produit scalaire à la racine
	double Vecteur3D::norme() const {
		
		return (sqrt((x*x)+(y*y)+(z*z)));
	}
	
	//Retourne la norme au carré d'un vecteur
	//ca aussi putain  --> produit scalaire simple, possibilité de réutiliser la fonction définie avant
	// pour plus de modularité au lieu de redéfinir manuellement
	
	double Vecteur3D::norme2() const{
		return ((x*x)+(y*y)+(z*z));
	
	}
	
	//Normalise un vecteur à 1 attention au vecteur nul
	Vecteur3D Vecteur3D::operator ~() const{
		double norme_vecteur3D(norme()); //Laisser ça ou bien utiliser la fonction définie en haut ??? utiliser this
		if (norme_vecteur3D==0.0){
			cout<<" probleme attention tentative de normaliser le vecteur nul ";
			return Vecteur3D(0.0,0.0,0.0);
			}
		else {return Vecteur3D(x/norme_vecteur3D,y/norme_vecteur3D,z/norme_vecteur3D) ;}
		}




