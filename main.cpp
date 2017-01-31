#include <iostream>
#include <string>
#include "interimaire.h"
#include "technicien.h"
#include "represantants.h"
#include "vendeurs.h"
using namespace std;

void afficherletout(string nom, string firstName, int age, int salaire){
  cout << "Nom :" << nom << endl;
  cout << "Prénom :" << firstName << endl;
  cout << "Âge :" << age << endl;
  cout << "Salaire :" << "Recuperer la valeur salaire" << endl;
}

int main() {
  string name;
  string firstName;
  int age;
  cout << "Quel est votre nom :" << endl;
  cin >> name;
  cout << "Quel est votre prénom :" << endl;
  cin >> firstName;
  cout << "Quel est votre âge :" << endl;
  cin >> age;

string *pointname(0);
string *pointfirstName(0);
int *pointage(0);
pointname = &name;
pointfirstName = &firstName;
pointage = &age;

string *pointutilisateur(0);
pointutilisateur= &name;
/*
  cout << "Salaire interimaire 40 h :" << Interimaire::Salaire_Technicien_interimaires(interimaire) << endl;
  cout << "Salaire Representants avec 7 primes et 3 deplacements :" << Representant::Salaire_Commerciaux_Representant(representant) << endl;
  cout << "Salaire Technicien :" << Technicien::Salaire_technicien_salaries(technicien) << endl;
  cout << "Salaire Vendeurs avec 7 primes:" << Vendeur::Salaire_Commerciaux_Vendeurs(vendeurs) << endl;
*/
/*
  cout << "Votre proffession" << endl;
  cout << "1 - Interimaire" << endl;
  cout << "2 - Representants" << endl;
  cout << "3 - Technicien" << endl;
  cout << "4 - Vendeurs" << endl;
  int proffession;
  cin >> proffession;
int salaire;
switch (proffession) {
    case 1 :
    new Interimaire *utilisateur(*pointname);
    int h_travail;
    cout << "Combien d'heure de travail ?" << endl;
   salaire = Interimaire::Salaire_Technicien_interimaires(h_travail);
       afficherletout(name,firstName, age, salaire);
       delete Interimaire *utilisateur;
      break;
    case 2 :
    new Representant *utilisateur();
    salaire = Representant::Salaire_Commerciaux_Representant(m_primeRepresentants);
  afficherletout(name,firstName, age, salaire);
  delete Representant *utilisateur;
      break;
    case 3 :
    new Technicien *utilisateur();
    salaire = Technicien::Salaire_technicien_salaries();
    afficherletout(name,firstName,age,salaire);
    delete Technicien *utilisateur;
      break;
    case 4 :
    new Vendeur *utilisateur();
  salaire = Vendeurs::Salaire_Commerciaux_Vendeurs(m_primeVendeurs);
  afficherletout(name,firstName,age,salaire);
  delete Vendeur *utilisateur;
      break;
  }
  return 0;
}
