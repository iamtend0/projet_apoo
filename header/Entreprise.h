#ifndef ENTREPRISE_H
#define ENTREPRISE_H
#include <string>
#include <iostream>

using namespace std;

class Entreprise {
private:
    string nom;
    string adresse;
    string nomContact;
    string telContact;

public:
    Entreprise();
    Entreprise(string, string, string, string);
    string getNom();
    string getAdresse();
    string getNomContact();
    string getTelContact();
    void setNom(string);
    void setAdresse(string);
    void setNomContact(string);
    void setTelContact(string);
};


#endif
