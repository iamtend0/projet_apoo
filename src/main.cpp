#include "../header/Diplome.h"
#include "../header/Entreprise.h"
#include "../header/Etudiant.h"
#include "../header/EtudiantPremierCycle.h"
#include "../header/EtudiantSecondCycle.h"
#include "../header/Experiences.h"
#include "../header/Inscription.h"
#include "../header/RendezVous.h"
#include "../header/Date.h"

#include <vector>
#include <iostream>
#include <limits>

using namespace std;

string menu,nom,prenom,adresse,telephone,seriebac,lieubac,intitule,lieu,nomEt,nomEnt,discipline;
string nomE,adresseE,contactE,telContactE,fonction,nomEn;
int anneeinscription,numero,code,heuredR,heurefR;
int anneebac;
Date* date;
Date*dateD;
Date*dateF;
Date*dateinscription;
Date*dateR;
int i=0,j=0,k=0,l=0,m=0,n=0;


Etudiant* E=new Etudiant(0,"0","0","0","0");
Entreprise* En=new Entreprise("0","0","0","0");
Date* D=new Date(15,6,2006);
Inscription *inscription=new Inscription(1,"0",E,D,2005);




int main(void) {

while(menu!="12"){
cout<<endl;
cout<<"---Menu du Logiciel--- :"<<endl;
cout<<"1.Ajout EtudiantPremierCycle"<<endl;
cout<<"2.Ajout EtudiantSecondCycle"<<endl;
cout<<"3.Ajout Diplome Etudiant"<<endl;
cout<<"4.Ajout Experiences Etudiant"<<endl;
cout<<"5.Ajout Inscription Diplome"<<endl;
cout<<"6.Ajout Entreprise"<<endl;
cout<<"7.Ajout RendezVous"<<endl;
cout<<"8.Afficher Etudiant"<<endl;
cout<<"9.Afficher Entreprise"<<endl;
cout<<"10.Afficher RendezVous Etudiant"<<endl;
cout<<"11.Afficher RendezVous Entreprise"<<endl;
cout<<"12.Quitter"<<endl;
cout<<endl;

cout<<"Entrez le numero d'un menu: ";
cin>>menu;
cout<<endl;
if(menu=="1"){
    cout<<"---ETUDIANT PREMIER CYCLE---"<<endl;

        cout<<"Entrez le numero d'etudiant"<<endl;
        cin>>numero;
        cout<<"Entrez le nom"<<endl;
        cin>>nom;
        cout<<"Entrez le prenom"<<endl;
        cin>>prenom;
        cout<<"Entrez l'adresse"<<endl;
        cin>>adresse;
        cout<<"Entrez le numero de telephone"<<endl;
        cin>>telephone;
        cout<<"Entrez la serie du baccalaureat"<<endl;
        cin>>seriebac;
        cout<<"Entrez l'annee obtention"<<endl;
        cin>>anneebac;
        cout<<"Entrez le lieu obtention"<<endl;
        cin>>lieubac;


        E->AjoutEtudiant(new EtudiantPremierCycle(numero,nom,prenom,adresse,telephone,seriebac,anneebac,lieubac));



        i++;
        j++;
        k++;
        m++;


}

if(menu=="2"){
    cout<<"---ETUDIANT SECOND CYCLE---"<<endl;

        cout<<"Entrez le numero d'etudiant"<<endl;
        cin>>numero;
        cout<<"Entrez le nom"<<endl;
        cin>>nom;
        cout<<"Entrez le prenom"<<endl;
        cin>>prenom;
        cout<<"Entrez l'adresse"<<endl;
        cin>>adresse;
        cout<<"Entrez le numero de telephone"<<endl;
        cin>>telephone;
        cout<<"Entrez la discipline principale"<<endl;
        cin>>discipline;



        E->AjoutEtudiant(new EtudiantSecondCycle(numero,nom,prenom,adresse,telephone,discipline));

        i++;
        j++;
        k++;
        m++;


}

if(menu=="3"){
    unsigned int y=0;
    if(E->getEtudiant().empty()){
        cout<<"Ajoutez au moins un etudiant"<<endl;
    }
    else{
        cout<<"---DIPLOME---"<<endl;
        cout<<"Entrez le numero d'un etudiant existant"<<endl;
        cin>>numero;
        cout<<"Entrez le code du diplome"<<endl;
        cin>>code;
        cout<<"Entrez l'intitule du diplome"<<endl;
        cin>>intitule;
        cout<<"Entrez la date obtention du diplome"<<endl;
        date=D->SaisieDate();
        cout<<"Entrez le lieu d'obtention du diplome"<<endl;
        cin>>lieu;

        for(unsigned int i=0;i<E->getEtudiant().size();i++){
            y++;
            if(E->getEtudiant()[i]->getNumero()==numero){
             E->AjoutDiplome(new Diplome(code,intitule,date,lieu,E->getEtudiant()[i]),E->getEtudiant()[i]);
             break;
            }
             if(y==E->getEtudiant().size())
                cout<<"Cet Etudiant n'existe pas"<<endl;


        }

      }

  }



if(menu=="4"){
    unsigned int y=0;
    if(E->getEtudiant().empty()){
        cout<<"Ajoutez au moins un etudiant"<<endl;
    }
    else{
        cout<<"---Experiences---"<<endl;
        cout<<"Entrez le numero d'un etudiant existant"<<endl;
        cin>>numero;
        cout<<"Entrez la date de debut"<<endl;
        dateD=D->SaisieDate();
        cout<<"Entrez la date de fin"<<endl;
        dateF=D->SaisieDate();
        cout<<"Entrez le nom de l'entreprise"<<endl;
        cin>>nomEn;
        cout<<"Entrez la fonction"<<endl;
        cin>>fonction;

        for(unsigned int i=0;i<E->getEtudiant().size();i++){
            y++;
            if(E->getEtudiant()[i]->getNumero()==numero){
                E->AjoutExperiences(new Experiences(dateD,dateF,nomEn,fonction,E->getEtudiant()[i]),E->getEtudiant()[i]);
                break;
            }
            if(y==E->getEtudiant().size())
               cout<<"Cet Etudiant n'existe pas"<<endl;



        }

    }

}


if(menu=="5"){

          unsigned int y=0;

          cout<<endl;
          cout<<"---Inscription Diplome---"<<endl;
          cout<<"Entrez le numero d'un etudiant existant"<<endl;
          cin>>numero;
          cout<<"Entrez le code du diplome"<<endl;
          cin>>code;
          cout<<"Entrez l'intitule du diplome"<<endl;
          cin>>intitule;
          cout<<"Entrez la date de la premiere inscription"<<endl;
          dateinscription=D->SaisieDate();
          cout<<"Entrez l'annee de cette inscription"<<endl;
          cin>>anneeinscription;
          cout<<endl;

                  for(unsigned int j=0;j<E->getEtudiant().size();j++){

                      y++;
                      if( E->getEtudiant()[j]->getNumero()==numero){
                          inscription->AjoutInscription(new Inscription(code,intitule,E->getEtudiant()[j],dateinscription,anneeinscription));
                          break;

                    }
                    if(y==E->getEtudiant().size()){
                      cout<<"L'etudiant n'existe pas"<<endl;
                  }


              }
          }






if(menu=="6"){
            cout<<"---ENTREPRISE---"<<endl;
            cout<<"Entrez le nom de l'entreprise"<<endl;
            cin>>nomE;
            cout<<"Entrez l'adresse de l'entreprise"<<endl;
            cin>>adresseE;
            cout<<"Entrez le nom de contact"<<endl;
            cin>>contactE;
            cout<<"Entrez le telephone de contact"<<endl;
            cin>>telContactE;

            En->AjoutEntreprises(new Entreprise(nomE,adresseE,contactE,telContactE));
            l++;
        }


if(menu=="7"){
    if(En->getEntreprise().empty()|| E->getEtudiant().empty()|| E->getDiplome().empty()|| E->getExperiences().empty()){
        cout<<"il faut creer au moins un etudiant complet (diplome,experience...) et une entreprise"<<endl;
        cout<<endl;
        }
        else{
            cout<<"---RENDEZVOUS---"<<endl;
            cout<<"Entrez le numero d'un etudiant "<<endl;
            cin>>numero;
            cout<<"Entrez le nom d'une entreprise "<<endl;
            cin>>nomEnt;
            cout<<"Entrez la date du rendez-vous"<<endl;
            dateR=D->SaisieDate();
            cout<<"Entrez l'heure de debut du rendez-vous"<<endl;
            cin>>heuredR;
            cout<<"Entrez l'heure de fin du rendez-vous"<<endl;
            cin>>heurefR;
            cout<<endl;




            for(unsigned int p=0;p<E->getEtudiant().size();p++){

                for(unsigned int s=0;s<En->getEntreprise().size();s++){
                    if(E->getEtudiant()[p]->getNumero()==numero){
                         if(En->getEntreprise()[s]->getNom()==nomEnt){


                                 E->AjoutRendezVous(new RendezVous(dateR,heuredR,heurefR,E->getEtudiant()[p],En->getEntreprise()[s]),E->getEtudiant()[p]);
                                 En->AjoutRendezVous(new RendezVous(dateR,heuredR,heurefR,E->getEtudiant()[p],En->getEntreprise()[s]),En->getEntreprise()[s]);
                                 break;



                    }


                }
            }
        }

    }

}






if(menu=="8"){
    if(E->getEtudiant().empty()||E->getDiplome().empty()||E->getExperiences().empty()){
           cout<<"Ajoutez au moins un etudiant complet(Diplome,experiences,inscription)"<<endl;
    }
    else{
        //cout<<"---ETUDIANT---"<<endl;
        E->AfficheEtudiant();
    }
}

if(menu=="9"){
    if(En->getEntreprise().empty()){
           cout<<"Aucune entreprise à afficher"<<endl;
    }
    else{
        En->AfficheEntreprise();
    }
}

if(menu=="10"){
    if(E->getRendezVous().empty()){
        cout<<"Aucun RendezVous enregistré"<<endl;
    }
    else{
        cout<<"---RENDEZVOUS---"<<endl;
        E->AfficheRendezVousE();


    }
}
if(menu=="11"){
    if(En->getRendezVous().empty()){
        cout<<"Aucun RendezVous enregistré"<<endl;
    }
    else{
        cout<<"---RENDEZVOUS---"<<endl;
        En->AfficheRendezVousEn();


    }

  }

}




    return 0; //stub
}
