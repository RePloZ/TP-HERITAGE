#ifndef DEF_COMMERCIAL
#define DEF_COMMERCIAL
#include "employe.h"
#include <iostream>


class Commercial : public Employe{
public:
  int getNbPrime();
  void setNbPrime(int value);
private:
int nbPrime;
};
#endif
