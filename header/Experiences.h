#ifndef EXPERIENCES_H
#define EXPERIENCES_H

#include "Entreprise.h"
#include <string>

using namespace std;

class Experiences{
private:
  string dateDebut;
  string dateFin;
  Entreprise entreprise;
  string fonction;
public:

  Experiences(string,string,Entreprise,string);

  string getDateDebut();
  string getDateFin();
  Entreprise getEntreprise();
  string getFonction();

  void setDateDebut(string);
  void setDateFin(string);
  void setEntreprise(Entreprise);
  void setFonction(string);

};
#endif
