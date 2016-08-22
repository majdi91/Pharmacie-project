#include"stdafx.h"
#include "class.h"
using namespace std;

article:: article (int ref,string nom,int unite,double pirx_u,int qte)
{this->ref=ref;
 this->nom=nom;
 this->qte=qte;
 this->unite=unite;
 this->prix_u=prix_u;
 this->prix_tot=(double)prix_u*unite;
}

medicament :: medicament (int ref,string nom,int unite,double pirx_u,int qte): article(ref,nom,unite,pirx_u,qte)
{}


comprime :: comprime (int ref,string nom ,int unite,double pirx_u,int qte,string dosage,string dat):medicament (ref,nom,unite,pirx_u,qte)
{this->dosage=dosage;
dat_peremption=dat;
}

sirop :: sirop (int ref,string nom ,int unite,double pirx_u,int qte,string dosage,string dat):medicament (ref,nom,unite,pirx_u,qte)
{this->dosage=dosage;
dat_peremption=dat;
}



paramedical::paramedical(int ref,string nom,int unite,double pirx_u,int qte):article (ref,nom,unite,pirx_u,qte)
{}