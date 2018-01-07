#ifndef ETUDIANTPREMIERCYCLE_H
#define ETUDIANTPREMIERCYCLE_H

#include "Etudiant.h"
#include <string>


using namespace std;
class RendezVous;
class EtudiantPremierCycle : public Etudiant{
private:
  string serieBac;
  int anneeBac;
  string lieuObtBac;
  vector<EtudiantPremierCycle*> eP;

public:

  EtudiantPremierCycle(int,string,string,string,string,string,int,string);

  string getSerieBac();
  int getAnneeBac();
  string getLieuObtBac();

  void setSerieBac(string);
  void setAnneeBac(int);
  void setLieuObtBac(string);

};

#endif
