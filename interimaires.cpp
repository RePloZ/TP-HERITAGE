#include "interimaires.h"
using namespace std;

Intermediaires::Intermediaires() : h_travail(300)

int Intermediaires::Salaire_Technicien_intermediaires(int h_travail){
  std::int salaire;
  salaire = h_de_travail * 24.5;
  return salaire;
}
void afficherletout(string nom; string firstName;string age;int salaire){
  cout << "Nom :" << nom << endl;
  cout << "Prénom :" << firstName << endl;
  cout << "Âge :" << age << endl;
    cout << "Salaire :" << Salaire_Technicien_intermediaires(h_travail) << endl;
}
