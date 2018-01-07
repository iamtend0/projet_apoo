#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "../header/Diplome.h"
#include "../header/Experiences.h"
#include "../header/Date.h"
#include <string>
#include <vector>
#include <algorithm>
#include <list>


using namespace std;
class Experiences;
class RendezVous;
class Etudiant {
private:
  int numero;
  string nom;
  string prenom;
  string adresse;
  string numeroTel;
  vector<Etudiant*>e;
  vector<Etudiant*>::iterator it;
  vector<Diplome*> d;
  vector<Diplome*>::iterator it2;
  vector<Experiences*> ex;
  vector<Experiences*>::iterator it3;
  vector<RendezVous*> r;
  vector<RendezVous*>::iterator it4;
  vector<RendezVous*>::iterator it5;
  vector<RendezVous*>::iterator it6;
  Inscription* i;


public:
  Etudiant(int ,string ,string ,string ,string);

  //GETTERS

  int getNumero()const;
  string getNom();
  string getPrenom();
  string getAdresse();
  string getNumeroTel();
  Inscription* getInscription();
  vector<Etudiant*>getEtudiant();
  vector<Diplome*> getDiplome();
  vector<Experiences*> getExperiences();
  vector<RendezVous*> getRendezVous();
  //SETTERS

  void setNumero(int);
  void setNom(string);
  void setPrenom(string);
  void setAdresse(string);
  void setNumeroTel(string);

  void AjoutEtudiant(Etudiant*);
  void AjoutDiplome(Diplome*,Etudiant* );
  void AjoutExperiences(Experiences*,Etudiant* );
  void AjoutRendezVous(RendezVous*,Etudiant *);
  void AfficheEtudiant();
  void AfficheRendezVousE();






};



#endif
