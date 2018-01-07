#ifndef RENDEZVOUS_H
#define RENDEZVOUS_H
#include <iostream>
#include <string>

#include "../header/Etudiant.h"
#include "../header/Date.h"

class Entreprise;

using namespace std;

class RendezVous {
private:
    Date* date; /* @TODO mettre en Date */
    int heureDebut;
    int heureFin;
    Etudiant *etudiant;
    Entreprise *entreprise;

public:
    RendezVous(Date*, int, int,Etudiant*,Entreprise*);
    Date* getDate()const;
    int getHeureDebut()const;
    int getHeureFin();
    Etudiant* getEtudiant()const;
    Entreprise* getEntreprise()const;
    void setDate(Date*);
    void setHeureDebut(int);
    void setHeureFin(int);

};

#endif
