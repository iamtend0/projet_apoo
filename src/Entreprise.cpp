#include "../header/Entreprise.h"

using namespace std;

Entreprise() {

}

Entreprise(string _nom, string _adresse, string _nomContact,
    string _telContact) {
    nom = _nom;
    adresse = _adresse;
    nomContact = _nomContact;
    telContact = _telContact;
}
