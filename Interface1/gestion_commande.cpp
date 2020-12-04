#include "gestion_commande.h"
#include <iostream>
#include <fstream>
#include<sstream>
#include<string>
#include<string.h>
using namespace std;
namespace NS_SVC {// ya rayan rak gaertna fl'adresse
	gestion_commande::gestion_commande()
	{
		this->cad = gcnew NS_Composants::Connection();

		this->commande = gcnew NS_Composants::Cl_commande();
	}

	DataSet^ gestion_commande::listeCommande(String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);
		return this->ds;
	}

	void gestion_commande::ajouter(String^ DateReglement, String^ DatePay, String^ DateEmi, String^ DateLiv)
	{
		int id;
		//this->commande->setAdresse(adresse);
		this->commande->setDateReglement(DateReglement);

		this->commande->setDatePay(DatePay);

		this->commande->setDateEmi(DateEmi);
		this->commande->setDateLiv(DateLiv);
		//ref commande voir comme ajouter 
		id = this->cad->actionRowsID(this->commande->INSERT());
	}

	void gestion_commande::modifier(int Id_commande, String^ DateReglement, String^ DatePay, String^ DateEmi, String^ DateLiv)
	{

		this->commande->setId_commande(Id_commande);
		//this->commande->setAdresse(adresse);
		this->commande->setDateReglement(DateReglement);
		this->commande->setDatePay(DatePay);
		this->commande->setDateEmi(DateEmi);
		//ref commande voir comment rajouter 
		this->commande->setDateLiv(DateLiv);
		this->cad->actionRows(this->commande->UPDATE());
	}

	void gestion_commande::supprimer(int idCommande)
	{
		this->commande->setId_commande(idCommande);
		this->cad->actionRows(this->commande->DELETE());
	}
	void gestion_commande::facturation()
	{
		int c = 0;
		std::string nom_fichier = "facture"; // début du nom de fichier
		std::string fin_fichier = ".txt";
		std::stringstream mon_fichier;
		mon_fichier << nom_fichier << c << fin_fichier;
		ofstream fichier(mon_fichier.str().c_str(), ios::out); //déclaration du flux et ouverture du fichier

		if (fichier)  // si l'ouverture a réussi
		{

			fichier << this->commande->getDateReglement() << this->commande->getDatePay() << this->commande->getDateEmi() << this->commande->getDateLiv();
			//fichier << o1.getID_commande() << o1.getDateReglement << o1.getAdresse << o1.getDatePay << o1.getDateEmi << o1.getDateLiv << o1.getId_client << o1.getId_article;
			fichier.close();  // on referme le fichier
			c++;
		}
		else  // sinon
			cerr << "Erreur à l'ouverture !" << endl;




	}
}