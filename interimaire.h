#ifndef INTERIMAIRES
#define INTERIMAIRES
#include "technicien.h"
#include <iostream>

class Interimaire : public Technicien {
private:
  int nbHeureTravail(0);
public:
  Interimaire::Interimaire(int e_Salaire_interimaire, std::string e_name, std::string e_firstName, std::string e_age);
  int getNbHeureTravail();
  void setNbHeureTravail(int value);
};
#endif
