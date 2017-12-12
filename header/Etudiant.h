#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
#include <vector>
#include "Diplome.h"

using namespace std;

class Etudiant {
private:
  string numero;
  string nom;
  string prenom;
  string adresse;
  string numeroTel;
  vector<Diplome *> diplomes;

public:

  Etudiant(string ,string ,string ,string ,string);

  //GETTERS

  string getNumero();
  string getNom();
  string getPrenom();
  string getAdresse();
  string getNumeroTel();
  vector <Diplome *> getDiplomes();

  //SETTERS

  void setNumero(string);
  void setNom(string);
  void setPrenom(string);
  void setAdresse(string);
  void setNumeroTel(string);

};
#endif
