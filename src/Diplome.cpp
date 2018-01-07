#include "../header/Diplome.h"
#include "../header/Etudiant.h"


using namespace std;

/** Constructor */
Diplome::Diplome(int _code, string _intitule, Date* _dateObt,
    string _lieuObt,Etudiant*_etudiant) {
    code = _code;
    intitule = _intitule;
    dateObt = _dateObt;
    lieuObt = _lieuObt;
    etudiant=_etudiant;
}

/** Getters */
int Diplome::getCode()const { return code; }
string Diplome::getIntitule() { return intitule; }
Date* Diplome::getDateObt() { return dateObt; }
string Diplome::getLieuObt() { return lieuObt; }
Etudiant* Diplome::getEtudiant(){return etudiant;}

/** Setters */
void Diplome::setCode(int nvCode) {
    code = nvCode;
}
void Diplome::setIntitule(string nvIntitule) {
    intitule = nvIntitule;
}
void Diplome::setDateObt(Date* nvDateObt) {
    dateObt = nvDateObt;
}
void Diplome::setLieuObt(string nvLieuObt) {
    lieuObt = nvLieuObt;
}
