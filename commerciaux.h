#ifndef DEF_COMMERCIAUX
#define DEF_COMMERCIAUX
#include "employe.h"

class Commerciaux : public Employes {
  
  Commerciaux();
  Commerciaux (int salaireBase);

  int getSalaireBase();
  void setSalaireBase (int salaireBase);

  private:
  std::int m_salaireBase;

};

#endif
