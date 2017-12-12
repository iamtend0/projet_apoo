#include "../header/RendezVous.h"

using namespace std;

/** Constructor */
RendezVous::RendezVous(string _date, int _heureDebut, int _heureFin) {
    date = _date;
    heureDebut = _heureDebut;
    heureFin = _heureFin;
}

/** Getters */
string RendezVous::getDate() { return date; }
int RendezVous::getHeureDebut() { return heureDebut; }
int RendezVous::getHeureFin() { return heureFin; }

/** Setters */
void RendezVous::setDate(string nvDate) {
    date = nvDate;
}
void RendezVous::setHeureDebut(int nvHeureDebut) {
    heureDebut = nvHeureDebut;
}
void RendezVous::setHeureFin(int nvHeureFin) {
    heureFin = nvHeureFin;
}
