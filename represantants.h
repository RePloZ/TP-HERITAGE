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
#include <string>
 
class représentant
{
    public:
        représentant();
        int getrepresentant();
        void setrepresentant(string representant) const;
 
    private:
        int m_prime;
        std::string m_representant;
};
 
#endif
