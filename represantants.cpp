#include <string>
#include <iostream>
#include "representants.h"

using namespace std;

Representant::Representant() : m_primeRepresentants(250){}
  int Representant::Salaire_Commerciaux_Representant(int m_primeRepresentants){
  int deplacement(3);
  int prime(7);
  cout << "Combien de déplacement avez vous fait ?" << endl;
  cin >> deplacement;
  cout << "Combien de fois avez-vous obtenu une prime ?" << endl;
  cin >> prime;
  int salaire;
  salaire = 2500 + (m_primeRepresentants*prime) + (deplacement*50);
  return salaire;
}
Representant::Representant(int e_m_primeRepresentants, std::string e_name, std::string e_firstName, std::string e_age){
  m_primeVendeurs = e_m_primeRepresentants;
  name = e_name;
  firstName = e_firstName;
  age = e_age;
}
