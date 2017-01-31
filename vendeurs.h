#ifndef DEF_VENDEUR
#define DEF_VENDEUR

#include "commercial.h"
#include <iostream>
#include <string>

class Vendeur : public Commercial {
  public:
  Vendeur();
  int Salaire_Commerciaux_Vendeurs(int m_primeVendeurs);
  Vendeur::Vendeur(int e_m_primeVendeurs,int m_Salaire_vendeur, std::string e_name, std::string e_firstName, std::string e_age);
  private:
  int m_primeVendeurs;
  int Salaire_vendeur;
};


#endif
