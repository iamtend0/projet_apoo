#include "../header/RendezVous.h"
#include "../header/Entreprise.h"

using namespace std;

/** Constructor */
RendezVous::RendezVous(Date* _date, int _heureDebut, int _heureFin,Etudiant *_e,Entreprise*_en) {
    date = _date;
    heureDebut = _heureDebut;
    heureFin = _heureFin;
    etudiant=_e;
    entreprise=_en;
}



/** Getters */
Date* RendezVous::getDate()const { return date; }
int RendezVous::getHeureDebut()const { return heureDebut; }
int RendezVous::getHeureFin() { return heureFin; }
Etudiant* RendezVous::getEtudiant()const{return etudiant;}
Entreprise* RendezVous::getEntreprise()const{return entreprise;}

/** Setters */
void RendezVous::setDate(Date* nvDate) {
    date = nvDate;
}
void RendezVous::setHeureDebut(int nvHeureDebut) {
    heureDebut = nvHeureDebut;
}
void RendezVous::setHeureFin(int nvHeureFin) {
    heureFin = nvHeureFin;
}
