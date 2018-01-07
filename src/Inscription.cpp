#include "../header/Inscription.h"
#include "../header/Diplome.h"
#include "../header/Etudiant.h"



using namespace std;

/** Constructor */


Inscription::Inscription(int _code,string _intitule,Etudiant* _etudiant,
        Date* _datePremInscription, int _annee) {
    etudiant=_etudiant;
    datePremInscription = _datePremInscription;
    annee = _annee;
}

/** Getters */
int Inscription::getCode() { return code; }
Etudiant* Inscription::getEtudiant(){return etudiant;}
Date* Inscription::getDatePremInscription() { return datePremInscription; }
int Inscription::getAnnee() { return annee; }
vector<Inscription*> Inscription::getInscription(){return inscription;}


/** Setters */
void Inscription::setCode(int nvcode) {
    code= nvcode;
}
void Inscription::setDatePremInscription(Date* nvDatePremInscription) {
    datePremInscription = nvDatePremInscription;
}
void Inscription::setAnnee(int nvAnnee) {
    annee = nvAnnee;
}

void Inscription::AjoutInscription(Inscription* i){
    unsigned int y=0;
    if(inscription.empty()){
        inscription.push_back(i);
        cout<<"L'inscription a bien été crée"<<endl;
    }
    else{
    for(vector<Inscription*>::iterator it=inscription.begin();it!=inscription.end();++it){
        y++;
        if((*it)->getEtudiant()->getNumero()==i->getEtudiant()->getNumero() ){//(*it)->getDiplome()->getCode()==i->getDiplome()->getCode()){
            cout<<"Cet etudiant est deja inscrit à un diplome "<<endl;
            break;
        }
        if(y==inscription.size()){
        inscription.push_back(i);
        cout<<"L'inscription a bien été crée"<<endl;
        cout<<endl;
        break;

            }
        }
    }

}
