/*
en privés
variable int prime
en publique
fonction pour le salaire
fonction pour afficher les valeurs
*/
#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT
#include "employ.h"
 
#include <iostream>

 
class représentant
{
    public:
        représentant();
         representant(int primeRepresentant);
        int getPrimeRepresentant();
        void setprimeRepresentant(int primeRepresentant ) const;
 
    private:
        std::int m_primeRepresentant;
     
};
 
#endif
