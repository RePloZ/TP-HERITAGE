#include <iostream>
#include "interimaire.h"
#include "technicien.h"
#include "representants.h"
#include "salarie.h"
using namespace std;

//Interimaires
Interimaires::Interimaires() : h_travail(300);
int Interimaires::Salaire_Technicien_interimaires(int h_travail){
  int salaire;
  salaire = h_de_travail * 24.5;
  return salaire;
}
//Représentant
Representant::Representant() : m_primeRepresentants(250);
  int Representant::Salaire_Commerciaux_Representant(int m_primeRepresentants){
  int deplacement(0);
  int prime(0);
  cout << "Combien de déplacement avez vous fait ?" << endl;
  cin >> deplacement;
  cout << "Combien de fois avez-vous obtenu une prime ?"
  cin >> prime;
  salaire = 2500 + (m_primeRepresentants*prime) + (deplacement*50);
  return salaire;
}
//salariés
Salaries::Salaroes();
int Salaries::Salaire_technicien_salaries(int salaire){
return salaire
}
//Vendeur
Vendeurs::Vendeurs() : m_primeVendeurs();
Vendeurs::Salaire_Commerciaux_Vendeurs(int m_primeVendeurs){
int prime;
cout << Combien avez vous eu de prime << endl;
cin >> prime;
salaire = m_primeVendeurs + (prime*)
}
void afficherletout(string nom; string firstName;string age;int salaire){
  cout << "Nom :" << nom << endl;
  cout << "Prénom :" << firstName << endl;
  cout << "Âge :" << age << endl;
  cout << "Salaire :" << /*Récuperer la valeur salaire*/ << endl;
}
