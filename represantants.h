/*
en privés
variable int prime
en publique
fonction pour le salaire
fonction pour afficher les valeurs
*/
#ifndef DEF_REPRESENTANTS
#define DEF_REPRESENTANTS
#include "employ.h"
 
#include <iostream>

 
class representants :  public:technicien
{
   
     
        représentants();
         representant(int primeRepresentants);
        int getPrimeRepresentants();
        void setprimeRepresentants(int primeRepresentants ) const;
 
    private:
        std::int m_primeRepresentants;
     
};
 
#endif
