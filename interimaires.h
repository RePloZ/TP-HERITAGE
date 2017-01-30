#ifndef INTERMEDIARES
#define INTERMEDIARES
#include "technicien.h"

class Intermediaires : public Technicien {
private:
  int h_travail;
public:
  Intermediaires();

  int Salaire_Technicien_intermediaires(int h_travail){}
};

/*
en privés
variable int h_travail
en publique
fonction pour le salaire
fonction pour afficher les valeurs
*/
#endif
