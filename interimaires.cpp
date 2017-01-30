#include "interimaires.h"
using namespace std;

Interimaires::Interimaires() : h_travail(300)

int Interimaires::Salaire_Technicien_interimaires(int h_travail){
  std::int salaire;
  salaire = h_de_travail * 24.5;
  return salaire;
}
void afficherletout(string nom; string firstName;string age;int salaire){
  cout << "Nom :" << nom << endl;
  cout << "Prénom :" << firstName << endl;
  cout << "Âge :" << age << endl;
    cout << "Salaire :" << Salaire_Technicien_interimaires(h_travail) << endl;
}
