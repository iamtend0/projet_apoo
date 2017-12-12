#include "../header/Experiences.h"

Experiences::Experiences(string dateD,string dateF,Entreprise _entreprise,string f): dateDebut(dateD),dateFin(dateF),entreprise(_entreprise),fonction(f) {}

string Experiences::getDateDebut(){
  return dateDebut;
}
string Experiences::getDateFin(){
  return dateFin;
}
Entreprise Experiences::getEntreprise(){
  return entreprise;
}
string Experiences::getFonction(){
  return fonction;
}

void Experiences::setDateDebut(string dateD){
  dateDebut=dateD;
}
void Experiences::setDateFin(string dateF){
  dateFin=dateF;
}
void Experiences::setEntreprise(Entreprise _entreprise){
  entreprise=_entreprise;
}
void Experiences::setFonction(string f){
  fonction=f;
}
