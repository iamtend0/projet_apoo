#include "../header/Date.h"

Date::Date(){jour=0,mois=0,annee=0;}
Date::Date(int _jour,int _mois,int _annee):jour(_jour),mois(_mois),annee(_annee){}

//GETTERS
int Date::getJour()const{return jour;}
int Date::getMois()const{return mois;}
int Date::getAnnee()const{return annee;}
//SETTERS
void Date::setJour(int j){jour=j;}
void Date::setMois(int m){mois=m;}
void Date::setAnnee(int a){annee=a;}

Date* Date::SaisieDate(){
    int x=0;
    int j;
    int m;
    int a;
cout << "Entrez le  jour (de 1 a 31) : ";
cin >> j;
cout << "Entrez le  mois (de 1 a 12) : ";
cin >> m;
cout << "Entrez une annee : ";
cin >> a;
cout << endl;

while(x==0){

    if ((j < 1) || (j > 31)
    || (m < 1) || (m > 12)
    || ((m == 2) && (((j > 29) && (a % 4 == 0))
    || ((j > 28) && (a % 4 != 0))))){

  cout << "La Date est incorrecte recommencez" << endl;
  cout << "Entrez le  jour (de 1 a 31) : ";
  cin >> j;
  cout << "Entrez le  mois (de 1 a 12) : ";
  cin >> m;
  cout << "Entrez une annee : ";
  cin >> a;
  cout << endl;
  }
  else{
      if ((m == 1) || (m == 3) || (m == 5)
      || (m == 7) || (m == 8) || (m == 10) || (m == 12)) {
        if(j>=1 && j<=31){
            Date* d=new Date(j,m,a);
            return d;
        }
    }
     if ((m == 4) || (m == 6) || (m == 9) || (m == 11)){
        if(j>30){
        cout<<"La Date est incorrecte recommencez"<<endl;
        cout << "Entrez le  jour (de 1 a 31) : ";
        cin >> j;
        cout << "Entrez le  mois (de 1 a 12) : ";
        cin >> m;
        cout << "Entrez une annee : ";
        cin >> a;
        cout << endl;
            }
            else{
              Date* d=new Date(j,m,a);
              return d;
           }
        }
        else { // Cas de fevrier
            if (a   % 4 == 0) { // Cas d'une annee bissextile
                if(j>29){
                    cout<<"La Date est incorrecte(annee bissextile) recommencez"<<endl;
                    cout << "Entrez le  jour (de 1 a 31) : ";
                    cin >> j;
                    cout << "Entrez le  mois (de 1 a 12) : ";
                    cin >> m;
                    cout << "Entrez une annee : ";
                    cin >> a;
                    cout << endl;
                   }
                   else{
                     Date* d=new Date(j,m,a);
                     return d;
                   }
                }
                else {
                   if(j>28){
                       cout<<"La Date est incorrecte (mois de fevrier) recommencez"<<endl;
                       cout << "Entrez le  jour (de 1 a 31) : ";
                       cin >> j;
                       cout << "Entrez le  mois (de 1 a 12) : ";
                       cin >> m;
                       cout << "Entrez une annee : ";
                       cin >> a;
                       cout << endl;
                   }
                   else{
                     Date* d=new Date(j,m,a);
                     return d;
                   }
               }
           }
       }
   }
}
