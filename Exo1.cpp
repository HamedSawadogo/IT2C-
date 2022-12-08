#include <iostream>
#include <cmath> //equivalent de math.h en C

using namespace std;

int main()
{
  float x; //represente le nombre réel saisi au clavier
  constexpr float pi=(22/7.0);

  cout<<"Entrer un nombre x:  ";
  cin>>x;
  //calcul du carre
  float carre=x*x;
  //affichage du carre
  cout<<"le carre de "<<x<<" est: "<<carre<<endl;
  //affichage de la racine carre
  cout<<"La racine carre de "<<x<<" est: "<<sqrt(x)<<endl;
  //calcul du perimetre 
  // formume =2*pi*rayon  ici le rayon est x
  float perimetre=2*(pi*x);
  //affichage du perimetre
  cout<<"Le perimetre du cercle de rayon "<<x<<" est: "<<perimetre<<endl;
  //calcul du l'aire
  //formule= pi*rayon²
  float aire=pi*carre;
  cout<<"L'aire du cercle de rayon "<<x<<" est: "<<aire<<endl;
  //affichage de la diagonale
  //formule de la diagonale : rappel d² = √(x² + x²)=> d = c√2
  float diagonale=x*sqrt(2);
  cout<<"La longueur de la diagonale d'un carre de cote "<<x<<" est: "<<diagonale<<endl;
 
  return 0;
}
