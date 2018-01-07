#ifndef ETUDIANTSECONDCYCLE_H
#define ETUDIANTSECONDCYCLE_H

#include "Etudiant.h"
#include <string>


using namespace std;

class EtudiantSecondCycle : public Etudiant{
private:
  string DisciplinePrincipale;
  vector<EtudiantSecondCycle*> eS;

public:

  EtudiantSecondCycle(int,string,string,string,string,string);

  string getDisciplinePrincipale();
  void setDisciplinePrincipale(string);




};
#endif
