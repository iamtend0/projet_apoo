#include "../header/Experiences.h"


Experiences::Experiences(Date* dateD,Date* dateF,string _entreprise,string f,Etudiant*_etudiant): dateDebut(dateD),dateFin(dateF),entreprise(_entreprise),fonction(f),etudiant(_etudiant) {}

Date* Experiences::getDateDebut()const{
  return dateDebut;
}
Date* Experiences::getDateFin(){
  return dateFin;
}
string Experiences::getEntreprise(){
  return entreprise;
}
string Experiences::getFonction(){
  return fonction;
}
Etudiant* Experiences::getEtudiant(){
    return etudiant;
}

void Experiences::setDateDebut(Date* dateD){
  dateDebut=dateD;
}
void Experiences::setDateFin(Date* dateF){
  dateFin=dateF;
}
void Experiences::setEntreprise(string _entreprise){
  entreprise=_entreprise;
}
void Experiences::setFonction(string f){
  fonction=f;
}
