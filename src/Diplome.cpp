#include "../header/Diplome.h"

using namespace std;

/** Constructor */
Diplome::Diplome(string _code, string _intitule, string _dateObt,
    string _lieuObt) {
    code = _code;
    intitule = _intitule;
    dateObt = _dateObt;
    lieuObt = _lieuObt;
}

/** Getters */
string Diplome::getCode() { return code; }
string Diplome::getIntitule() { return intitule; }
string Diplome::getDateObt() { return dateObt; }
string Diplome::getLieuObt() { return lieuObt; }

/** Setters */
void Diplome::setCode(string nvCode) {
    code = nvCode;
}
void Diplome::setIntitule(string nvIntitule) {
    intitule = nvIntitule;
}
void Diplome::setDateObt(string nvDateObt) {
    dateObt = nvDateObt;
}
void Diplome::setLieuObt(string nvLieuObt) {
    lieuObt = nvLieuObt;
}
