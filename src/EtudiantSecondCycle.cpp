#include "../header/EtudiantSecondCycle.h"

EtudiantSecondCycle::EtudiantSecondCycle(string num ,string n,string p,string a,string tel,string DisciplinePrincipale):
  Etudiant(num,n,p,a,tel),
  DisciplinePrincipale(this->DisciplinePrincipale)

  {}

  string EtudiantSecondCycle::getDisciplinePrincipale(){
    return DisciplinePrincipale;
}
  void EtudiantSecondCycle::setDisciplinePrincipale(string DisciplinePrincipale){
    DisciplinePrincipale=this->DisciplinePrincipale;
  }
