/*
en privés
variable int prime
en publique
fonction pour le salaire
fonction pour afficher les valeurs
*/
#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT
 
#include <iostream>
#include <string>
 
class représentant
{
    public:
        représentant();
        void getrepresentant(int prime);
        void setrepresentant(string representant) const;
 
    private:
        int m_prime;
        std::string m_representant;
};
 
#endif
