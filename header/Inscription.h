#ifndef INSCRIPTION_H
#define INSCRIPTION_H
#include <iostream>
#include <string>
#include "Diplome.h"

using namespace std;

class Inscription {
private:
    Diplome diplomeAssocie; // une inscription associée à un diplome
    string datePremInscription; /* @TODO mettre en Date */
    int annee; // annee de cette inscription

public:
    Inscription(Diplome, string, int);
    Diplome getDiplome();
    string getDatePremInscription();
    int getAnnee();
};

#endif
