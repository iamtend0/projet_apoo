#include "../header/Inscription.h"

using namespace std;

/** Constructor */
Inscription::Inscription(Diplome * _diplomeAssocie,
        string _datePremInscription, int _annee) {
    diplomeAssocie = _diplomeAssocie;
    datePremInscription = _datePremInscription;
    annee = _annee;
}

/** Getters */
Diplome * Inscription::getDiplome() { return diplomeAssocie; }
string Inscription::getDatePremInscription() { return datePremInscription; }
int Inscription::getAnnee() { return annee; }

/** Setters */
void Inscription::setDiplome(Diplome * nvDiplome) {
    diplomeAssocie = nvDiplome;
}
void Inscription::setDatePremInscription(string nvDatePremInscription) {
    datePremInscription = nvDatePremInscription;
}
void Inscription::setAnnee(int nvAnnee) {
    annee = nvAnnee;
}
