#include "../header/EtudiantPremierCycle.h"

EtudiantPremierCycle::EtudiantPremierCycle(string num ,string n,string p,string a,string tel,string serieBac,int anneeBac,string lieuObtBac):
  Etudiant(num,n,p,a,tel),
  serieBac(this->serieBac),
  anneeBac(this->anneeBac),
  lieuObtBac(this->lieuObtBac)
  {}

  string EtudiantPremierCycle::getSerieBac(){
    return serieBac;
  }
  int EtudiantPremierCycle::getAnneeBac(){
    return anneeBac;
  }
  string EtudiantPremierCycle::getLieuObtBac(){
    return lieuObtBac;
  }

  void EtudiantPremierCycle::setSerieBac(string serieBac){
    serieBac=this->serieBac;
  }
  void EtudiantPremierCycle::setAnneeBac(int anneeBac){
    anneeBac=this->anneeBac;
  }
  void EtudiantPremierCycle::setLieuObtBac(string lieuObtBac){
    lieuObtBac=this->lieuObtBac;
  }
