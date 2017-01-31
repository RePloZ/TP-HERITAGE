#ifndef INTERIMAIRES
#define INTERIMAIRES
#include "technicien.h"
#include <iostream>

class Interimaire : public Technicien {
private:
  int nbHeureTravail;
public:
  Interimaire::Interimaire(int e_Salaire_interimaire, std::string e_name, std::string e_firstName, std::string e_age);
};
#endif
