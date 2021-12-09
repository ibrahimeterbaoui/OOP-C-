#include<iostream>
#include<cmath>
using namespace std;
class vecteur3d {
	float x;
	float y;
	float z;
	
	public:
	
	//Constructeur d'initialisation
	vecteur3d(float a = 0, float b = 0, float c = 0) : x(a), y(b), z(c) {
	}
	
	//Constructeur de recopie
	vecteur3d(const vecteur3d & v) {
		x = v.x;
		y = v.y;
		z = v.z;		
	}
	
	//L'affichage d'un vecteur
	void afficher() {
		cout << "("<<x<<","<<y<<","<<z<<")" << endl;
	}
	
	//La somme de deux vecteur
	vecteur3d somme(const vecteur3d & v) {
		vecteur3d s;
		s.x = x + v.x;
		s.y = y + v.y;
		s.z = z + v.z;
		return s;
		//Ou return vecteur3d(x+v.x, y+v.y, z+v.z);
	}
	
	//Le produit scalaire de deux vecteurs
	float produit(const vecteur3d & v) {
		return x*v.x + y*v.y + z*v.z;
	}
	
	//tester si deux vecteurs ont les memes composantes
	bool coincide(const vecteur3d & v) {
		return (x == v.x && y == v.y && z == v.z);
	}
	
	//Retourner la norme du vecteur
	float norme() {
		return sqrt(x*x + y*y + z*z);
	}
};

int main() {
	vecteur3d v1(0,0,0);
	cout << "Vecteur V1";
	v1.afficher();
	vecteur3d v2(0,0,0);
	cout << "Vecteur V2";
	v2.afficher();
	cout<<endl;
	cout << "La somme des vecteurs v1 et v2 est : ";
	(v1.somme(v2)).afficher();
	cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2) << endl;
	cout<<endl;

	if(v1.coincide(v2))
	    cout << "Les vecteurs v1 et v2 coincident " << endl; 
	else
	    cout << "Les vecteurs v1 et v2 ne coincident pas " << endl;
	
    cout<<"la norme de V1 est:"<<v1.norme()<<endl;
    cout<<"la norme de V2 est:"<<v2.norme();
}
