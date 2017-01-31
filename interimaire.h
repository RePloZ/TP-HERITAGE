#ifndef INTERIMAIRES
#define INTERIMAIRES
#include "technicien.h"
#include <iostream>

class Interimaire : public Technicien {
private:
  int h_travail;
public:
  Interimaire();
  int Salaire_Technicien_interimaires(int h_travail);
};
Interimaire::Interimaire(int e_Salaire_interimaire, std::string e_name, std::string e_firstName, std::string e_age);
#endif
