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
  int Representant::Salaire_Commerciaux_Representant(m_primeRepresentants){
  int deplacement(0);
  cout << Combien de déplacement avez vous fait << endl;
  cin >> deplacement;
  salaire = m_primeRepresentants + (deplacement*50);
  return salaire;
}
//salariés
int Salaries::Salaire_technicien_salaries(int salaire){

}
//Vendeur
Vendeurs::Vendeurs() : m_primeVendeurs();
Vendeurs::

void afficherletout(string nom; string firstName;string age;int salaire){
  cout << "Nom :" << nom << endl;
  cout << "Prénom :" << firstName << endl;
  cout << "Âge :" << age << endl;
    cout << "Salaire :" << /*Récuperer la valeur salaire*/ << endl;
}
