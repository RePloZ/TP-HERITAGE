#ifndef INTERIMAIRES
#define INTERIMAIRES
#include "technicien.h"

class Intermediaires : public Technicien {
private:
  int h_travail;
public:
  Interimaires();
  int Salaire_Technicien_interimaires(int h_travail);
};

/*
en privés
variable int h_travail
en publique
fonction pour le salaire
fonction pour afficher les valeurs
*/
#endif
