#include <string>

using namespace std;





class article
{ 
protected:
  int ref;
  string nom;
  int unite;
  double prix_u;
  double prix_tot;
  int qte;

  
public:
	article(int=0,string="",int=0,double=0,int=0);
	int	get_ref(){return ref;}
	string 	get_nom(){return nom;}
	int	get_qte(){return qte;}
	int	get_unite(){return unite;}
	double get_prix_u(){return prix_u;}
	double get_prix_tot(){return prix_tot;}
	
};

class medicament : public article
{ 

public :
	medicament(int=0,string="",int=0,double=0,int=0);
};



class comprime : public medicament
{
  string dosage;
  string dat_peremption;
public:
	comprime(int=0,string="",int=0,double=0,int=0,string="",string="");
	string get_dosage(){return dosage;}
	string get_dat(){return dat_peremption;}
	
};

class sirop : public medicament
{
  string dosage;
  string dat_peremption;
public:
	sirop(int=0,string="",int=0,double=0,int=0,string="",string="");
	string get_dosage(){return dosage;}
	string get_dat(){return dat_peremption;}
	
};

class paramedical : public article
{

public:
	paramedical(int=0,string="",int=0,double=0,int=0);
	
	
};
