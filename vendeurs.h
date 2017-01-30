#ifndef DEF_VENDEURS
#define DEF_VENDEURS
#include "commerciaux.h"

class Vendeurs : public Commerciaux {
  
  Vendeur();
  Vendeur( int PrimeVendeur);

  int getPrimeVendeurs();
  void setVendeurs (int primeVendeurs);

  private:
  std::int m_primeVendeurs;

};

#endif
