#include <iostream>
#include <cmath>
#include "Vecteur3D.h"

using namespace std;

	
int main(){
	
	//---------TESTS - méthodes de base--------------
	Vecteur3D vect1(1.0, 2.0, -0.1);
	Vecteur3D vect2(2.5, 3.5, 4.1);
	Vecteur3D vect3;
	
	//v1 = (1.0, 2.0, -0.1)
	//vect1.set_coord(0,1.0);
	//vect1.set_coord(1,2.0);
	//vect1.set_coord(2, -0.1);
	
	//v2 = (2.5, 3.5, 4.1)
	//vect2.set_coord(0,2.6);
	//vect2.set_coord(1,3.5);
	//vect2.set_coord(2,4.1);
	
	vect3 = vect1;
	
	cout << "Vecteur 1: " << vect1 << endl;
	
	cout << "Vecteur 2: " << vect2 << endl;
	
	cout << "Le vecteur 1 est "; 
	if (vect1==vect2){
		cout << "égal au";
	} else {
		cout << "différent du";
	}
	
	cout << " vecteur 2," << endl << "et est ";
	if (not (vect1==vect3)) {
		cout << "différent du";
	} else {
		cout << "égal au";
	}
	cout << " vecteur 3." << endl;
	cout << endl;
	
	//-------TEST Addition-------
	Vecteur3D a(1.0,1.0,-0.1);
	Vecteur3D b(2.6,3.5,4.1);
	Vecteur3D c(a+b);
	
	cout <<"("<< a <<")" << " + " << "("<< b << ")"  << " = " << "(" << c <<")";
	cout << endl;	
	
	c = b+a;
	cout <<"(" << b <<")" << " + " << "(" << a << ")" << " = "  << "(" << c <<")";
	cout << endl;	
	
	//-------TEST Addition du vecteur nul-------
	Vecteur3D a2(1.0,1.0,-0.1);
	Vecteur3D vecteur_nul;
	Vecteur3D c2(a2+vecteur_nul);
	
	cout <<"(" << a2 << ")"  << " + " <<"(" << vecteur_nul << ")" << " = " << "(" << c2 <<")";
	cout << endl;
	
	//-------TEST Soustraction-------
	Vecteur3D d(1.0,2.0,-0.1);
	Vecteur3D e(2.6,3.5,4.1);
	Vecteur3D f(d-e);
	
	cout <<"("<< d <<")" << " - " << "(" << e << ")" << " = " <<"(" << f <<")";
	cout << endl;
	
	//-------TEST Soustraction du même vecteur-------
	Vecteur3D d2(1.0,2.0,-0.1);
	Vecteur3D e2(d2-d2);
	
	cout <<"("<< d2 << ")" << " - " << "(" << d2 << ")" << " = "  << "(" << e2<< ")";
	cout << endl;
	
	//-------TEST Opposé-------
	
	Vecteur3D g(1.0, 2.0, -0.1) ;
	Vecteur3D g_inverse(-g);
	cout << "l'opposé de " << "(" << g << ")" << " est "  << "(" << g_inverse << ")" ;
	cout << endl; 
	
	//-------TEST Addition d'un opposé-------
	Vecteur3D h(1.0,1.0,-0.1);
	Vecteur3D i(2.6,3.5,4.1);
	Vecteur3D j(-i);
	Vecteur3D k(h+j);
	
	cout <<"(" << h  << ")" << " + " << "(" << j <<")"  << " = " << "(" << k << ")";
	cout << endl;
	
	//-------TEST Multiplication scalaire-------
	Vecteur3D l(1.0,2.0,-0.1) ;
	double scalaire_test = 3.0;
	Vecteur3D m(l*scalaire_test) ;

	
	cout << scalaire_test << " * " << "(" << l << ")" << " = " << "(" << m  <<")";
	cout << endl;
	
	//-------TEST Produit scalaire-------
	Vecteur3D n(1.0,2.0,-0.1); 
	Vecteur3D o(2.6,3.5,4.1);
	double produit_scalaire;
	
	
	produit_scalaire = n*o;
	
	cout <<"(" << n << ")" << " * " << "("<< o << ")" << " = " << produit_scalaire;
	cout << endl;
	
	//-------TEST Produit vectoriel-------
	Vecteur3D p(1.0,2.0,-0.1);
	Vecteur3D q(2.6,3.5,4.1);

	Vecteur3D r(p^q);
	cout <<"(" << p << ")" << " ^ "<< "(" << q << ")"  << " = " << "(" << r << ")";
	cout << endl;
	
	//-------TEST Norme-------
	Vecteur3D s(1.0,2.0,-0.1);
	double t;
	
	
	t = s.norme();
	
	cout <<"||("<< s << ")||"  << " = " << t;
	cout << endl;
	//-------TEST Norme carré-------
	
	Vecteur3D u(1.0,2.0,-0.1);
	double v;
	
	v = u.norme2();
	
	cout << "||(" << u <<")||^2" << " = " << v;
	cout << endl;
	
	Vecteur3D w(2.6,3.5,4.1);
	double x;
	
	x = w.norme2();
	
	cout <<"||(" << w << ")||^2" << " = " << x;
	cout << endl;
	
	//-------TEST Vecteur rendu unitaire-------
	
	Vecteur3D unitaire_test(1.0, 2.5, -3.4);
    Vecteur3D direction( ~unitaire_test ); // utilisation de l'opérateur unaire ~
    cout << "le vecteur unitaire associé a "<< unitaire_test << " est "<< direction << endl;
	
	return 0;
	
}


