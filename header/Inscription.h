#ifndef INSCRIPTION_H
#define INSCRIPTION_H
#include <iostream>
#include <string>
#include <vector>
#include "../header/Date.h"


using namespace std;
class Diplome;
class Etudiant;
class Inscription {
private:
    int code;
    string intitule;
    Etudiant* etudiant; // une inscription associée à un etudiant
    Date* datePremInscription;
    int annee; // annee de cette inscription
    vector<Inscription*> inscription;


public:
    Inscription(int,string,Etudiant*, Date*, int);
    int getCode();
    Date* getDatePremInscription();
    int getAnnee();
    vector<Inscription*> getInscription();
    Etudiant* getEtudiant();
    void setCode(int);
    void setDatePremInscription(Date*);
    void setAnnee(int);
    void AjoutInscription(Inscription*);
};

#endif
