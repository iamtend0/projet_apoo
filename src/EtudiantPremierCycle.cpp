#include "../header/EtudiantPremierCycle.h"
#include "../header/RendezVous.h"




EtudiantPremierCycle::EtudiantPremierCycle(int num ,string n,string p,string a,string tel,string _serieBac,int _anneeBac,string _lieuObtBac):
  Etudiant(num,n,p,a,tel),
  serieBac(_serieBac),
  anneeBac(_anneeBac),
  lieuObtBac(_lieuObtBac)

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

  
