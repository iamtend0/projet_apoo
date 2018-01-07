#include "../header/Etudiant.h"
#include "../header/Experiences.h"
#include "../header/RendezVous.h"
#include <algorithm>

//FONCTEUR

class VectorOfEtudiant
{
  const int Numero;

  public:
  VectorOfEtudiant(const int &numero)
  : Numero(numero)
  {}

  bool operator()(const Etudiant *e) //SURCHARGE DE ()
  {
     return e->getNumero()==Numero;
  }
};

class VectorOfDiplome
{
  const int Code;

  public:
  VectorOfDiplome(const int &code)
  : Code(code)
  {}

  bool operator()(const Diplome *d)
  {
     return d->getCode()==Code;
  }
};

class VectorOfExperiences
{
  const Date* Datedebut;

  public:
  VectorOfExperiences(const Date* datedebut)
  : Datedebut(datedebut)
  {}

  bool operator()(const Experiences *ex)
  {
     return ex->getDateDebut()->getJour()==Datedebut->getJour();
  }
};

class VectorOfExperiences2
{
  const Date* Datedebut;

  public:
  VectorOfExperiences2(const Date* datedebut)
  : Datedebut(datedebut)
  {}

  bool operator()(const Experiences *ex)
  {
     return ex->getDateDebut()->getMois()==Datedebut->getMois();
  }
};

class VectorOfExperiences3
{
  const Date* Datedebut;

  public:
  VectorOfExperiences3(const Date* datedebut)
  : Datedebut(datedebut)
  {}

  bool operator()(const Experiences *ex)
  {
     return ex->getDateDebut()->getAnnee()==Datedebut->getAnnee();
  }
};

class VectorOfRendezVous
{
  const Date* _Date;



  public:
  VectorOfRendezVous(const Date* date)
  : _Date(date)
  {}

  bool operator()(const RendezVous *R)
  {
     return R->getDate()->getJour()==_Date->getJour();
  }
};

class VectorOfRendezVous2
{
  const Date* _Date;



  public:
  VectorOfRendezVous2(const Date* date)
  : _Date(date)
  {}

  bool operator()(const RendezVous *R)
  {
     return R->getDate()->getMois()==_Date->getMois();
  }
};

class VectorOfRendezVous3
{
  const Date* _Date;



  public:
  VectorOfRendezVous3(const Date* date)
  : _Date(date)
  {}

  bool operator()(const RendezVous *R)
  {
     return R->getDate()->getAnnee()==_Date->getAnnee();
  }
};



class VectorOfRendezVous4
{

  const int Heuredebut;


  public:
  VectorOfRendezVous4(const int&heuredebut)
  : Heuredebut(heuredebut)
  {}

  bool operator()(const RendezVous *R)
  {
     return  R->getHeureDebut()==Heuredebut;
  }
};

class VectorOfEntreprise
{
  const string Nom;

  public:
  VectorOfEntreprise(const string &nom)
  : Nom(nom)
  {}

  bool operator()(const RendezVous*E)
  {
     return E->getEntreprise()->getNom()==Nom;
  }
};

bool comparaisonDate(const RendezVous* r1,const RendezVous* r2) //Predicat pour la fonction sort() pour trier les dates de RendezVousdans l'ordre croissant
{
    return r1->getDate()->getJour() < r2->getDate()->getJour();
}

bool comparaisonNom(const RendezVous* r1,const RendezVous* r2) //Predicat pour la fonction sort() pour trier les noms des Entreprises dans l'ordre croissant
{
    return r1->getEntreprise()->getNom() < r2->getEntreprise()->getNom();
}


bool comparaisonHeure(const RendezVous* r1,const RendezVous* r2) //Predicat pour la fonction sort() pour trier les heures de debut de RendezVous dans l'ordre croissant
{
    return r1->getHeureDebut() < r2->getHeureDebut();
}

//Constructeur
Etudiant::Etudiant(int num ,string n,string p,string a,string tel):numero(num),nom(n),prenom(p),adresse(a),numeroTel(tel){}

//Getters
int Etudiant::getNumero()const{
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

 Inscription* Etudiant::getInscription(){
     return i;
 }

 vector<Etudiant*>Etudiant::getEtudiant(){
     return e;
 }

vector<Diplome*> Etudiant::getDiplome(){
    return d;
}

vector<Experiences*> Etudiant::getExperiences(){
    return ex;
}

vector<RendezVous*> Etudiant::getRendezVous(){
    return r;
}
//Setters
void Etudiant::setNumero(int num){
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

//UTILISATION DES FONCTEURS POUR AJOUTER LES DIFFERENTS ELEMENTS(ETUDIANT,DIPLOME,EXPERIENCES,RENDEZVOUS) ET EFFECTUER LES CONTROLES D'EXISTENCE
void Etudiant::AjoutEtudiant(Etudiant* E){
    VectorOfEtudiant tofind(E->getNumero()); //Declaration Foncteur
    it = find_if(e.begin(), e.end(), tofind); //Parcours le vector Etudiant avec find_if pour savoir si le numero de l'etudiant entré en parametre existe deja
                                              //find_if utilise le foncteur VectorOfEtudiant
    if (it != e.end()){                       //Si il trouve un numero correspondant alors l'etudiant est deja enregistré
        cout<<"Cet etudiant existe deja"<<endl;
        cout<<endl;
    }
    else{
        cout<<"L'etudiant a bien été créé"<<endl;
        cout<<endl;
        e.push_back(E);
    }


}

void Etudiant::AjoutDiplome(Diplome* di,Etudiant* E){
    VectorOfDiplome tofind(di->getCode());
    VectorOfEtudiant tofind2(E->getNumero());
    it2 = find_if(d.begin(), d.end(), tofind);
    it = find_if(e.begin(), e.end(), tofind2);
    if (it2 != d.end()&& it!=e.end()){
        if((*it2)->getEtudiant()->getNumero()!=(*it)->getNumero()){
            cout<<"Le diplome a bien été créé"<<endl;
            cout<<endl;
            d.push_back(di);
        }
        else{
        cout<<"Ce diplome existe deja pour l'etudiant"<<endl;
        cout<<endl;
        }
    }
    else{
        cout<<"Le diplome a bien été créé"<<endl;
        cout<<endl;
        d.push_back(di);
    }
}
void Etudiant::AjoutExperiences(Experiences *Ex,Etudiant*E){
    VectorOfExperiences tofind(Ex->getDateDebut());
    VectorOfExperiences2 tofind2(Ex->getDateDebut());
    VectorOfExperiences3 tofind4(Ex->getDateDebut());
    VectorOfEtudiant tofind3(E->getNumero());
    it3 = find_if(ex.begin(), ex.end(), tofind);
    vector<Experiences*>::iterator it2=find_if(ex.begin(), ex.end(), tofind2);
    vector<Experiences*>::iterator it4=find_if(ex.begin(), ex.end(), tofind4);
    it = find_if(e.begin(), e.end(), tofind3);
    if (it3 != ex.end()&&it2!=ex.end()&&it4!=ex.end()&& it!=e.end()){
        cout<<"Cette experience existe deja pour l'etudiant"<<endl;
        cout<<endl;
    }
    else{
        cout<<"L'experience a bien été créé"<<endl;
        cout<<endl;
        ex.push_back(Ex);
    }
}

void Etudiant::AjoutRendezVous(RendezVous *rv,Etudiant *E){
    VectorOfRendezVous tofind(rv->getDate());
    VectorOfRendezVous2 tofind2(rv->getDate());
    VectorOfRendezVous3 tofind3(rv->getDate());
    VectorOfRendezVous4 tofind6(rv->getHeureDebut());
    VectorOfEtudiant tofind4(E->getNumero());
    VectorOfEntreprise tofind5(rv->getEntreprise()->getNom());
    it4 = find_if(r.begin(), r.end(), tofind);
    vector<RendezVous*>::iterator it2=find_if(r.begin(), r.end(), tofind2);
    vector<RendezVous*>::iterator it3=find_if(r.begin(), r.end(), tofind3);
    it6= find_if(r.begin(),r.end(),tofind6);
    it = find_if(e.begin(), e.end(), tofind4);
    it5 = find_if(r.begin(),r.end(),tofind5);
    if ((it4 != r.end()&&it6!=r.end()&&it2!=r.end()&&it3!=r.end())&& (it!=e.end()||it5!=r.end())) {
        cout<<"Ce RendezVous existe deja pour l'etudiant ou l'entreprise"<<endl;
        cout<<endl;


    }
    else{
            cout<<"Le rendezVous a bien été créé"<<endl;
        cout<<endl;
        r.push_back(rv);
    }

     //if(y==r.size() && (*it)->getEtudiant()->getNom()!=rv->getEtudiant()->getNom()){
        //cout<<"Cet etudiant n'existe pas"<<endl;
        //cout<<endl;

}





void Etudiant::AfficheEtudiant(){
    int numero;
    unsigned int y=0;
    cout<<"Entrez un numero d'etudiant "<<endl;
    cin>>numero;

    cout<<"---Etudiant---"<<endl;
    for(vector<Etudiant*>::iterator it=e.begin();it!=e.end();++it){
        if((*it)->getNumero()==numero){
            cout<<"Numero : "<<(*it)->getNumero()<<endl<<"nom : "<<(*it)->getNom()<<endl<<"Prenom: "<<(*it)->getPrenom()<<endl<<"adresse: "<<(*it)->getAdresse()<<endl;
            cout<<"Telephone : "<<(*it)->getNumeroTel()<<endl;
            cout<<endl;

        }
    }
    cout<<"---Diplome----"<<endl;
    for(vector<Diplome*>::iterator it=d.begin();it!=d.end();++it){
    y++;
        if((*it)->getEtudiant()->getNumero()==numero){
            cout<<"Code: "<<(*it)->getCode()<<endl<<"Intitule : "<<(*it)->getIntitule()<<endl<<"Date obtention: "<<(*it)->getDateObt()->getJour()<<"/ "<<(*it)->getDateObt()->getMois()<<"/"<<(*it)->getDateObt()->getAnnee()<<endl<<"Lieu obtention: "<<(*it)->getLieuObt()<<endl;
            cout<<endl;

        }


    }
    cout<<"---Experiences---"<<endl;
    for(vector<Experiences*>::iterator it=ex.begin();it!=ex.end();++it){
        if((*it)->getEtudiant()->getNumero()==numero)
            cout<<"Date de debut: "<<(*it)->getDateDebut()->getJour()<<"/"<<(*it)->getDateDebut()->getMois()<<"/"<<(*it)->getDateDebut()->getAnnee()<<endl<<"Date de fin: "<<(*it)->getDateFin()->getJour()<<endl<<"Entreprise: "<<(*it)->getEntreprise()<<endl<<"Fonction: "<<(*it)->getFonction();
            cout<<endl;
            cout<<endl;
    }

    /*cout<<"---Inscriptions---"<<endl;
    for(vector<Inscription*>::iterator it=i->getInscription().begin();it!=i->getInscription().end();++it){
        if((*it)->getEtudiant()->getNumero()==numero){
            cout<<"Date Premiere Inscription : "<<(*it)->getDatePremInscription()->getJour()<<"/"<<(*it)->getDatePremInscription()->getMois()<<"/"<<(*it)->getDatePremInscription()->getAnnee()<<endl<<"Annee: "<<(*it)->getAnnee()<<endl;
            cout<<endl;


      }
  }*/
  }



void Etudiant::AfficheRendezVousE(){
    int numero;


    cout<<"Entrez un numero d'etudiant "<<endl;
    cin>>numero;
    sort(r.begin(),r.end(),comparaisonDate);
    sort(r.begin(),r.end(),comparaisonHeure);
    sort(r.begin(),r.end(),comparaisonNom);

    for(vector<RendezVous*>::iterator it=r.begin();it!=r.end();++it){

        if((*it)->getEtudiant()->getNumero()==numero){
            cout<<"Cet etudiant "<< "a rendez vous le :"<<(*it)->getDate()->getJour()<<"/"<<(*it)->getDate()->getMois()<<"/"<<(*it)->getDate()->getAnnee()<<" de "<<(*it)->getHeureDebut()<<"h a "<<(*it)->getHeureFin()<<"h";
            cout<<" avec l'entreprise "<<(*it)->getEntreprise()->getNom()<<endl;


        }

    }

}
