#ifndef DIPLOME_H
#define DIPLOME_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "../header/Inscription.h"
#include "../header/Date.h"
class Etudiant;

class Diplome {
private:
    int code;
    string intitule;
    Date* dateObt; /* @TODO mettre en format date */
    string lieuObt;
    Etudiant* etudiant;

public:
    Diplome(int, string, Date*, string,Etudiant*);
    int getCode()const;
    string getIntitule();
    Date* getDateObt();
    string getLieuObt();
    Etudiant* getEtudiant();
    void setCode(int);
    void setIntitule(string);
    void setDateObt(Date*);
    void setLieuObt(string);



};

#endif
