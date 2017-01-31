#include <string>
#include <iostream>
#include "vendeurs.h"

Vendeur::Vendeur(int e_m_primeVendeurs, e_Salaire_vendeur, std::string e_name, std::string e_firstName, std::string e_age): ()
{
  m_primeVendeurs = e_m_primeVendeurs;
  Salaire_vendeur = e_Salaire_vendeur;
  name = e_name;
  firstName = e_firstName;
  age = e_age;
}
Vendeur::calculSalaire(){
  return 2500 + (nbPrime*100);
}
