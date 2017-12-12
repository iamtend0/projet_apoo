#ifndef RENDEZVOUS_H
#define RENDEZVOUS_H
#include <iostream>
#include <string>

using namespace std;

class RendezVous {
private:
    string date; /* @TODO mettre en Date */
    int heureDebut;
    int heureFin;

public:
    RendezVous(string, int, int);
    string getDate();
    int getHeureDebut();
    int getHeureFin();
    void setDate(string);
    void setHeureDebut(int);
    void setHeureFin(int);

};

#endif
