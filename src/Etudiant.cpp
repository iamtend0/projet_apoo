#include "../header/Etudiant.h"

Etudiant::Etudiant(string num ,string n,string p,string a,string tel):numero(num),nom(n),prenom(p),adresse(a),numeroTel(tel){}


string Etudiant::getNumero(){
  return numero;
}

string Etudiant::getNom(){
  return nom;
}

string Etudiant::getPrenom(){
  return prenom;
}

string Etudiant::getAdresse(){
  return adresse;
}

string Etudiant::getNumeroTel(){
  return numeroTel;
}

void Etudiant::setNumero(string num){
  numero=num;
}

void Etudiant::setNom(string n){
  nom=n;
}

void Etudiant::setPrenom(string p){
  prenom=p;
}

void Etudiant::setAdresse(string a){
  adresse=a;
}

void Etudiant::setNumeroTel(string tel){
  numeroTel=tel;
}
