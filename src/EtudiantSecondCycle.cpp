#include "../header/EtudiantSecondCycle.h"



EtudiantSecondCycle::EtudiantSecondCycle(int num ,string n,string p,string a,string tel,string _DisciplinePrincipale):
  Etudiant(num,n,p,a,tel),
  DisciplinePrincipale(_DisciplinePrincipale)

  {}

  string EtudiantSecondCycle::getDisciplinePrincipale(){
    return DisciplinePrincipale;
}
