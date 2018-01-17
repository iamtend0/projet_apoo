
#include "../header/Entreprise.h"
#include "../header/RendezVous.h"


using namespace std;

//FONCTEUR
class VectorOfEtudiant
{
  const int Numero;

  public:
  VectorOfEtudiant(const int &numero)
  : Numero(numero)
  {}

  bool operator()(const RendezVous *e)
  {
     return e->getEtudiant()->getNumero()==Numero;
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

  bool operator()(const Entreprise *E)
  {
     return E->getNom()==Nom;
  }
};

bool ComparaisonDate1(const RendezVous* r1,const RendezVous* r2) //Predicat pour la fonction sort() pour trier les dates de RendezVousdans l'ordre croissant
{
    return r1->getDate()->getJour() < r2->getDate()->getJour();
}

bool ComparaisonDate2(const RendezVous* r1,const RendezVous* r2) //Predicat pour la fonction sort() pour trier les dates de RendezVousdans l'ordre croissant
{
    return r1->getDate()->getMois() < r2->getDate()->getMois();
}

bool ComparaisonDate3(const RendezVous* r1,const RendezVous* r2) //Predicat pour la fonction sort() pour trier les dates de RendezVousdans l'ordre croissant
{
    return r1->getDate()->getAnnee() < r2->getDate()->getAnnee();
}



bool ComparaisonHeure(const RendezVous* r1,const RendezVous* r2) //Predicat pour la fonction sort() pour trier les heures de debut de RendezVous dans l'ordre croissant
{
    return r1->getHeureDebut() < r2->getHeureDebut();
}



/** Constructeurs */
Entreprise::Entreprise(string _nom, string _adresse, string _nomContact,
    string _telContact) {
    nom = _nom;
    adresse = _adresse;
    nomContact = _nomContact;
    telContact = _telContact;

}

/** Getters */
string Entreprise::getNom()const { return nom; }
string Entreprise::getAdresse() { return adresse; }
string Entreprise::getNomContact() { return nomContact; }
string Entreprise::getTelContact() { return telContact; }
vector<RendezVous*> Entreprise::getRendezVous() {return r;}
vector<Entreprise*> Entreprise::getEntreprise(){return en;}

/** Setters */
void Entreprise::setNom(string nvNom) { nom = nvNom; }
void Entreprise::setAdresse(string nvAdresse) { adresse = nvAdresse; }
void Entreprise::setNomContact(string nvNomContact) { nomContact = nvNomContact; }
void Entreprise::setTelContact(string nvTelContact) { telContact = nvTelContact; }

//UTILISATION DES FONCTEURS POUR AJOUTER LES DIFFERENTS ELEMENTS(ENTREPRISES,RENDEZVOUS) ET EFFECTUER LES CONTROLES D'EXISTENCE
void Entreprise::AjoutRendezVous(RendezVous *rv,Entreprise *En){
    VectorOfRendezVous tofind(rv->getDate());//Declaration Foncteur
    VectorOfRendezVous2 tofind2(rv->getDate());
    VectorOfRendezVous3 tofind3(rv->getDate());
    VectorOfRendezVous4 tofind6(rv->getHeureDebut());
    VectorOfEntreprise tofind4(En->getNom());
    VectorOfEtudiant tofind5(rv->getEtudiant()->getNumero());
    it2 = find_if(r.begin(), r.end(), tofind); //Parcours le vector RENDEZVOUS avec find_if pour savoir si la date et l'heure du debut de rendezVous entré en parametre existe deja
    vector<RendezVous*>::iterator it5=find_if(r.begin(), r.end(), tofind2);
    vector<RendezVous*>::iterator it6=find_if(r.begin(), r.end(), tofind3);
    it4= find_if(r.begin(),r.end(),tofind6);
    it = find_if(en.begin(), en.end(), tofind4);
    it3 = find_if(r.begin(),r.end(),tofind5);
    if ((it2 != r.end()&&it4!=r.end()&&it4!=r.end()&&it5!=r.end())&& (it!=en.end()||it3!=r.end())){ //Si il trouve une date et une heure de debut correspondante alors le rendez vous existe deja pour l'etudiant ou l'entreprise
    cout<<endl;


}
    else
    r.push_back(rv);


     //if(y==r.size() && (*it)->getEtudiant()->getNom()!=rv->getEtudiant()->getNom()){
        //cout<<"Cet etudiant n'existe pas"<<endl;
        //cout<<endl;

}







void Entreprise::AjoutEntreprises(Entreprise* En){
    VectorOfEntreprise tofind(En->getNom());
    it = find_if(en.begin(), en.end(), tofind);

    if (it != en.end()){
        cout<<"Cet entreprise existe déjà"<<endl;
        cout<<endl;
    }
    else{
        cout<<"L'entreprise a bien été créé"<<endl;
        cout<<endl;
        en.push_back(En);
    }
}

void Entreprise::AfficheRendezVousEn(){
    string nomE;
    unsigned int y=0;

    cout<<"Entrez un nom d'entreprise "<<endl;
    cin>>nomE;
    VectorOfEntreprise tofind(nomE);
    it = find_if(en.begin(), en.end(), tofind);

    if (it == en.end()){
        cout<<"Cet entreprise n'existe pas"<<endl;
        cout<<endl;
    }
    else{



    sort(r.begin(),r.end(),ComparaisonDate1);
    sort(r.begin(),r.end(),ComparaisonDate2);
    sort(r.begin(),r.end(),ComparaisonDate3);
    sort(r.begin(),r.end(),ComparaisonHeure);

    for(vector<RendezVous*>::iterator it=r.begin();it!=r.end();++it){
        y++;
        if((*it)->getEntreprise()->getNom()==nomE){
            cout<<"Cet entreprise "<< "a rendez vous le :"<<(*it)->getDate()->getJour()<<"/"<<(*it)->getDate()->getMois()<<"/"<<(*it)->getDate()->getAnnee()<<" de "<<(*it)->getHeureDebut()<<"h a "<<(*it)->getHeureFin()<<"h";
            cout<<" avec l'etudiant "<<(*it)->getEtudiant()->getNom()<<endl;

        }
        if(y==r.size())
            break;
        if(y==r.size() && (*it)->getEntreprise()->getNom()!=nomE)
            cout<<"Pas de rendezVous pour cette entreprise"<<endl;


    }
  }

}

void Entreprise::AfficheEntreprise(){
    string nom;
    cout<<"Entrez un nom d'entreprise existant"<<endl;
    cin>>nom;
    VectorOfEntreprise tofind4(nom);
    it = find_if(en.begin(), en.end(), tofind4);
    if (it == en.end()){
        cout<<"Cet entreprise n'existe pas"<<endl;
        cout<<endl;
    }
    else{



    cout<<"---Entreprise---"<<endl;
    for(vector<Entreprise*>::iterator it=en.begin();it!=en.end();++it){
        if((*it)->getNom()==nom){
            cout<<"Nom : "<<(*it)->getNom()<<endl<<"Adresse : "<<(*it)->getAdresse()<<endl<<"Nomcontact: "<<(*it)->getNomContact()<<endl<<"Telephonecontact: "<<(*it)->getTelContact()<<endl;
            cout<<endl;

        }
    }
  }
}
