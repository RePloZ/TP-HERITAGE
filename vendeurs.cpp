#include <string>
#include <iostream>
#include "vendeurs.h"

int Vendeur::Salaire_Commerciaux_Vendeurs(int m_primeVendeurs){
int prime;
int salaire;
cout << "Combien avez vous eu de prime" << endl;
cin >> prime;
salaire = 2500 + (prime*m_primeVendeurs);
return salaire;
}
Vendeur::Vendeur(int e_m_primeVendeurs, e_Salaire_vendeur, std::string e_name, std::string e_firstName, std::string e_age): ()
{
  m_primeVendeurs = e_m_primeVendeurs;
  Salaire_vendeur = e_Salaire_vendeur;
  name = e_name;
  firstName = e_firstName;
  age = e_age;
}
