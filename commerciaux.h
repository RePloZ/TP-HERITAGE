#ifndef COMMERCIAUX
#define COMMERCIAUX
#include "employes.h"

class Commerciaux : public Employes {

  int getSalaireBase();
  void setSalaireBase (int salaireBase);

  private:
  std::int m_salaireBase;

};

#endif
