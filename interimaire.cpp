#include <string>
#include <iostream>
#include "interimaire.h"

//Interimaire
Interimaire::Interimaire() : h_travail(300){}
int Interimaire::Salaire_Technicien_interimaires(int h_travail){
  int salaire;
  salaire = h_travail * 24.5;
  return salaire;
}
Interimaire::Interimaire(int e_Salaire_interimaire, std::string e_name, std::string e_firstName, std::string e_age){
  Salaire_Technicien_interimaires = e_Salaire_interimaire;
  name = e_name;
  firstName = e_firstName;
  age = e_age;
}
