#ifndef ENTREPRISE_H
#define ENTREPRISE_H

#include "../header/Date.h"
#include <string>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

class RendezVous;
class Entreprise {
private:
    string nom;
    string adresse;
    string nomContact;
    string telContact;
    vector<Entreprise*> en;
    vector<Entreprise*>::iterator it;
    vector<RendezVous*>r;
    vector<RendezVous*>::iterator it2;
    vector<RendezVous*>::iterator it3;
    vector<RendezVous*>::iterator it4;

public:
    Entreprise(string, string, string, string);
    string getNom()const;
    string getAdresse();
    string getNomContact();
    string getTelContact();
    vector<RendezVous*> getRendezVous();
    vector<Entreprise*> getEntreprise();
    void setNom(string);
    void setAdresse(string);
    void setNomContact(string);
    void setTelContact(string);
    void AjoutRendezVous(RendezVous*,Entreprise*);
    void AjoutEntreprises(Entreprise*);
    void AfficheRendezVousEn();
    void AfficheEntreprise();

};


#endif
