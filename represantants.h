#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT
#include "commercial.h"
#include <iostream>

class Representant :  public Commercial{
public:
  Representant();
  int Salaire_Commerciaux_Representant(int m_primeRepresentants);
private:
  int m_primeRepresentants;
};
Representant::Representant(int e_m_primeRepresentants, std::string e_name, std::string e_firstName, std::string e_age);
#endif
