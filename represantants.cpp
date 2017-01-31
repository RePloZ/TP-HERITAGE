#include <string>
#include <iostream>
#include "represantants.h"

using namespace std;
int getNbDeplacement(){
  return nbDeplacement;
}
void setNbDeplacement(int value){
  nbDeplacement = value;
}
Representant::Representant(int vNDeplacement,int vNbPrime, string vName, string vFirstName, int vAge){
  nbDeplacement = vNDeplacement;
  nbPrime = vNbPrime;
  name = Vname;
  firstName = vFirstName;
  age = vAge;
}
int Representant::calculSalaire(){
  return 2500 + (nbDeplacement*50) + (250*nbPrime);
}
