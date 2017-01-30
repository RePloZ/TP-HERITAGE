#ifndef DEF_VENDEURS
#define DEF_VENDEURS
#include "commerciaux.h"

class Vendeurs : public Commerciaux {

  int getPrimeVendeurs();
  void setVendeurs (int primeVendeurs);

  private:
  std::int m_primeVendeurs;

};

#endif
