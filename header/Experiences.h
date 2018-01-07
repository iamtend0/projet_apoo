#ifndef EXPERIENCES_H
#define EXPERIENCES_H

#include "../header/Entreprise.h"
#include "../header/Etudiant.h"
#include "../header/Date.h"
#include <string>

using namespace std;


class Experiences{
private:
  Date* dateDebut;
  Date* dateFin;
  string entreprise;
  string fonction;
  Etudiant* etudiant;

public:

  Experiences(Date*,Date*,string,string,Etudiant*);

  Date* getDateDebut() const;
  Date* getDateFin();
  string getEntreprise();
  string getFonction();
  Etudiant* getEtudiant();

  void setDateDebut(Date*);
  void setDateFin(Date*);
  void setEntreprise(string);
  void setFonction(string);

};
#endif
