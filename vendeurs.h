#ifndef DEF_VENDEURS
#define DEF_VENDEURS
#include "commerciaux.h"

class Vendeurs : public Commerciaux {
  public:
  Vendeurs();
  int Salaire_Commerciaux_Vendeurs(int m_primeVendeurs);
  private:
  std::int m_primeVendeurs(100);
  std::int Salaire_vendeur(2500);
};
#endif
