#ifndef DIPLOME_H
#define DIPLOME_H
#include <iostream>
#include <string>

using namespace std;

class Diplome {
private:
    string code;
    string intitule;
    string dateObt; /* @TODO mettre en format date */
    string lieuObt;

public:
    Diplome(string, string, string, string);
    string getCode();
    string getIntitule();
    string getDateObt();
    string getLieuObt();
    void setCode(string);
    void setIntitule(string);
    void setDateObt(string);
    void setLieuObt(string);

};

#endif
