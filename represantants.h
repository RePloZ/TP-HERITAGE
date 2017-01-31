#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT
#include "commercial.h"
#include <iostream>

class Representant :  public Commercial{
public:
  Representant();
private:
  int nbDeplacement;
};
Representant::Representant(int nbPrime, std::string e_name, std::string e_firstName, std::string e_age);
#endif
