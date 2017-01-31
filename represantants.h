#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT
#include "commercial.h"
#include <iostream>
#include <string>
class Representant :  public Commercial{
public:
  int getNbDeplacement();
  void setNbDeplacement(int value);
  Representant::Representant(int nbDeplacement, int vNbPrime, std::string e_name, std::string e_firstName, int e_age);
private:
  int nbDeplacement;
};
#endif
