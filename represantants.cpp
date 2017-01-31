#include <string>
#include <iostream>
#include "representants.h"

using namespace std;

Representant::Representant(int vNDeplacement,int vNbPrime, std::string vName, std::string vFirstName, std::string vAge){
  nbDeplacement = vNDeplacement;
  nbPrime = vNbPrime;
  name = Vname;
  firstName = vFirstName;
  age = vAge;
}
int Representant::calculSalaire(){
  return 2500 + (nbDeplacement*50) + (250*nbPrime)
}
