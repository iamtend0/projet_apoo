#include "../header/Entreprise.h"

using namespace std;

/** Constructeurs */
Entreprise::Entreprise(string _nom, string _adresse, string _nomContact,
    string _telContact) {
    nom = _nom;
    adresse = _adresse;
    nomContact = _nomContact;
    telContact = _telContact;
}

/** Getters */
string Entreprise::getNom() { return nom; }
string Entreprise::getAdresse() { return adresse; }
string Entreprise::getNomContact() { return nomContact; }
string Entreprise::getTelContact() { return telContact; }

/** Setters */
void Entreprise::setNom(string nvNom) { nom = nvNom; }
void Entreprise::setAdresse(string nvAdresse) { adresse = nvAdresse; }
void Entreprise::setNomContact(string nvNomContact) { nomContact = nvNomContact; }
void Entreprise::setTelContact(string nvTelContact) { telContact = nvTelContact; }
