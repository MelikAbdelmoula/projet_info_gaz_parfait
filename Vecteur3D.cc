#include <iostream>
#include <cmath>
using namespace std;


class Vecteur3D{
	private:
	double x,y,z;
	
	public:
	void set_coord(double x0 = 0, double y0 = 0, double z0 = 0){
		x = x0;
		y = y0;
		z = z0;
	}
	void affiche() const {
		cout << x <<" "<< y << " " << z ;
		};
	
	bool compare(const Vecteur3D vecteur_2, double accuracy = 1e-10) const {
		return (abs(vecteur_2.x)-abs(x) <= accuracy) and (abs(vecteur_2.y)-abs(y) <= accuracy) and (abs(vecteur_2.z) - abs(z) <= accuracy); //Retourne vrai si les vecteurs sont égaux
	}
	
	Vecteur3D addition(const Vecteur3D vecteur_2) const  {
		double x_add, y_add, z_add;
		Vecteur3D somme_vectorielle;
		
		x_add = vecteur_2.x + x;
		y_add = vecteur_2.y + y;
		z_add = vecteur_2.z + z;
		
		somme_vectorielle.set_coord(x_add,y_add,z_add);
		
		return somme_vectorielle;
	}
		
	Vecteur3D soustraction(const Vecteur3D vecteur_2) const{ 
		double x_minus, y_minus, z_minus;
		Vecteur3D minus_vectorielle;
		
		x_minus = x - vecteur_2.x;
		y_minus = y - vecteur_2.y;
		z_minus = z - vecteur_2.z;
		
		minus_vectorielle.set_coord(x_minus,y_minus,z_minus);
		
		return minus_vectorielle;
	}
	
	Vecteur3D oppose() const{
		double x_opp, y_opp, z_opp;
		Vecteur3D vecteur_opp;
		
		x_opp = -x;
		y_opp = -y;
		z_opp = -z;
		
		vecteur_opp.set_coord(x_opp,y_opp,z_opp);
		
		return vecteur_opp;
	}
	
	
	Vecteur3D mult(double scalaire) const {
		double x_scal, y_scal, z_scal;
		Vecteur3D vecteur_scal;
		
		x_scal = x*scalaire;
		y_scal = y*scalaire;
		z_scal = z*scalaire;
		
		vecteur_scal.set_coord(x_scal,y_scal,z_scal);
		
		return vecteur_scal;
		
	}
	
	double prod_scal(const Vecteur3D vecteur_2) const {
		double dot_product;
		dot_product = x*vecteur_2.x + y*vecteur_2.y + z*vecteur_2.z;
		
		return dot_product;
	}
	
	Vecteur3D prod_vect(const Vecteur3D vecteur_2) const {
		double x_crossprod, y_crossprod, z_crossprod;
		Vecteur3D vecteur_crossprod;
		
		x_crossprod = y*vecteur_2.z-z*vecteur_2.y;
		y_crossprod = z*vecteur_2.x-x*vecteur_2.z;
		z_crossprod = x*vecteur_2.y-y*vecteur_2.x;
		
		vecteur_crossprod.set_coord(x_crossprod,y_crossprod,z_crossprod);
		return vecteur_crossprod;
	}
		
	double norme() const {
		double x_norme, y_norme, z_norme;
		Vecteur3D vecteur_norme;
		
		x_norme = x;
		y_norme = y,
		z_norme = z;
		
		vecteur_norme.set_coord(x_norme, y_norme, z_norme);
		
		return sqrt(vecteur_norme.prod_scal(vecteur_norme));
	}
	
	double norme2() const{
		double x_norme2, y_norme2, z_norme2;
		Vecteur3D vecteur_norme2;
		
		x_norme2 = x;
		y_norme2 = y,
		z_norme2 = z;
		
		vecteur_norme2.set_coord(x_norme2, y_norme2, z_norme2);
		
		return vecteur_norme2.prod_scal(vecteur_norme2);
	
	}
	
	Vecteur3D unitaire() const{
		double x_uni, y_uni, z_uni;
		double norme = sqrt(x*x + y*y + z*z); //Laisser ça ou bien utiliser la fonction définie en haut ???
		Vecteur3D vecteur_unitaire;
		
		x_uni = x/norme;
		y_uni = y/norme;
		z_uni = z/norme;
		
		vecteur_unitaire.set_coord(x_uni,y_uni,z_uni);
		
		return vecteur_unitaire;
}
	
	
};
	

int main(){
	
	//---------TESTS - méthodes de base--------------
	Vecteur3D vect1;
	Vecteur3D vect2;
	Vecteur3D vect3;
	
	//v1 = (1.0, 2.0, -0.1)
	vect1.set_coord(0,1.0);
	vect1.set_coord(1,2.0);
	vect1.set_coord(2, -0.1);
	
	//v2 = (2.5, 3.5, 4.1)
	vect2.set_coord(0,2.6);
	vect2.set_coord(1,3.5);
	vect2.set_coord(2,4.1);
	
	vect3 = vect1;
	
	cout << "Vecteur 1: " ; vect1.affiche(); cout << endl;
	
	cout << "Vecteur 2: "; vect2.affiche(); cout << endl;
	
	cout << "Le vecteur 1 est "; 
	if (vect1.compare(vect2)){
		cout << "égal au";
	} else {
		cout << "différent du";
	}
	
	cout << " vecteur 2," << endl << "et est ";
	if (not vect1.compare(vect3)) {
		cout << "différent du";
	} else {
		cout << "égal au";
	}
	cout << " vecteur 3." << endl;
	cout << endl;
	
	
	//-------TEST Addition-------
	
	Vecteur3D a, b, c;
	a.set_coord(1.0,1.0,-0.1);
	b.set_coord(2.6,3.5,4.1);
	
	c = a.addition(b);
	
	a.affiche(); cout << " + "; b.affiche(); cout << " = "; c.affiche();
	cout << endl;	
	
	c = b.addition(a);
	b.affiche(); cout << " + "; a.affiche(); cout << " = "; c.affiche();
	cout << endl;	
	
	//-------TEST Addition du vecteur nul-------
	
	Vecteur3D a2, vecteur_nul, c2;
	a2.set_coord(1.0,1.0,-0.1);
	vecteur_nul.set_coord(0,0,0);
	
	c2 = a2.addition(vecteur_nul);
	
	cout <<"("; a2.affiche(); cout <<")"; cout << " + ";cout <<"("; vecteur_nul.affiche(); cout <<")"; cout << " = "; cout <<"("; c2.affiche();cout <<")";
	cout << endl;
	
	
	//-------TEST Soustraction-------
	
	Vecteur3D d, e, f;
	d.set_coord(1.0,2.0,-0.1);
	e.set_coord(2.6,3.5,4.1);
	
	f = d.soustraction(b);
	
	cout <<"(";d.affiche();cout <<")"; cout << " - "; cout << "("; e.affiche();cout<<")"; cout << " = ";cout <<"("; f.affiche();cout <<")";
	cout << endl;
	
	//-------TEST Soustraction du même vecteur-------
	
	Vecteur3D d2, e2;
	d2.set_coord(1.0,2.0,-0.1);
	
	
	e2 = d2.soustraction(d2);
	
	cout <<"(";d2.affiche(); cout <<")"; cout << " - "; cout <<"(";d2.affiche();cout <<")"; cout << " = "; cout <<"(";e2.affiche();cout <<")";
	cout << endl;
	
	//-------TEST Opposé-------
	
	Vecteur3D g, g_inverse;
	g.set_coord(1.0, 2.0, -0.1);

	g_inverse = g.oppose();

	cout << "l'opposé de "; cout <<"("; g.affiche(); cout <<")"; cout << " est "; cout <<"(";g_inverse.affiche(); cout <<")";cout << endl; 
	
	//-------TEST Addition d'un opposé-------
	
	Vecteur3D h, i, j,k;
	h.set_coord(1.0,1.0,-0.1);
	i.set_coord(2.6,3.5,4.1);
	
	j = i.oppose();
	
	k = h.addition(j);
	
	cout <<"(";h.affiche(); cout <<")"; cout << " + "; cout <<"(";j.affiche();cout <<")"; cout << " = "; cout <<"(";k.affiche();cout <<")";
	cout << endl;
	
	//-------TEST Multiplication scalaire-------
	
	Vecteur3D l, m;
	l.set_coord(1.0,2.0,-0.1);
	double scalaire_test = 3.0;
	
	m = l.mult(scalaire_test);
	
	cout << scalaire_test; cout << " * "; cout <<"(";l.affiche();cout <<")"; cout << " = "; cout <<"(";m.affiche();cout <<")";
	cout << endl;
	
	//-------TEST Produit scalaire-------
	
	Vecteur3D n, o;
	double produit_scalaire;
	n.set_coord(1.0,2.0,-0.1);
	o.set_coord(2.6,3.5,4.1);
	
	produit_scalaire = n.prod_scal(o);
	
	cout <<"(";n.affiche();cout <<")"; cout << " * "; cout << "("; o.affiche();cout<<")"; cout << " = "; cout << produit_scalaire;
	cout << endl;
	
	//-------TEST Produit vectoriel-------
	
	Vecteur3D p, q,r;
	p.set_coord(1.0,2.0,-0.1);
	q.set_coord(2.6,3.5,4.1);
	
	r = p.prod_vect(q);
	
	cout <<"(";p.affiche();cout <<")"; cout << " ^ "; cout << "("; q.affiche();cout<<")"; cout << " = "; cout << "("; r.affiche(); cout << ")";
	cout << endl;
	
	//-------TEST Norme-------
	
	Vecteur3D s;
	double t;
	s.set_coord(1.0,2.0,-0.1);
	
	
	t = s.norme();
	
	cout <<"||("; s.affiche(); cout <<")||"; cout << " = "; cout << t;
	cout << endl;
	
	//-------TEST Norme carré-------
	
	Vecteur3D u;
	double v;
	u.set_coord(1.0,2.0,-0.1);
	
	
	v = u.norme2();
	
	cout <<"||("; u.affiche(); cout <<")||^2"; cout << " = "; cout << v;
	cout << endl;
	
	Vecteur3D w;
	double x;
	w.set_coord(2.6,3.5,4.1);
	
	x = w.norme2();
	
	cout <<"||("; w.affiche(); cout <<")||^2"; cout << " = "; cout << x;
	cout << endl;
	
	
	
	return 0;
	
}


