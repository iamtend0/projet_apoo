#ifndef DATE_H
#define DATE_H
#include <iostream>

using namespace std;

class Date{
private:
    int jour;
    int mois;
    int annee;


public:
    Date();
    Date(int ,int,int);
    //GETTERS
    int getJour()const;
    int getMois()const;
    int getAnnee()const;
    //SETTERS
    void setJour(int);
    void setMois(int);
    void setAnnee(int);

    Date* SaisieDate();
};
#endif
