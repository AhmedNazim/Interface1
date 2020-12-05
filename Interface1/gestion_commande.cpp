#include "gestion_commande.h"
#include <iostream>
#include <fstream>
#include<sstream>
#include<string>
#include<string.h>
//#include <msclr\marshal.h>

using namespace System;
//using namespace msclr::interop;
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

	void gestion_commande::ajouter(String^ ref ,String^remise, String^toarti,String^totalttc, String^totaltva, String^ totalht,String^ DateReglement, String^ DatePay, String^ DateEmi, String^ DateLiv,int clien,int art)
	{

		int id;
		//this->commande->setAdresse(adresse);
		this->commande->setId_client(clien);
		this->commande->setId_article(art);
		this->commande->setremise(remise);
		this->commande->settotalTTC(totalttc);
		this->commande->settotalTVA(totaltva);
		this->commande->setrefCOM(ref);
		this->commande->setDateReglement(DateReglement);
		this->commande->settotalArticle(toarti);
		this->commande->setDatePay(DatePay);
		this->commande->settotalHT(totalht);
		this->commande->setDateEmi(DateEmi);
		this->commande->setDateLiv(DateLiv);
		//ref commande voir comme ajouter 
		id = this->cad->actionRowsID(this->commande->INSERT());
	}

	void gestion_commande::modifier( String^ ref, String^ remise, String^ toarti, String^ totalttc, String^ totaltva, String^ totalht, String^ DateReglement, String^ DatePay, String^ DateEmi, String^ DateLiv, int clien, int art)
	{

		this->commande->setId_client(clien);
		this->commande->setId_article(art);
		this->commande->setremise(remise);
		this->commande->settotalTTC(totalttc);
		this->commande->settotalTVA(totaltva);
		this->commande->setrefCOM(ref);
		this->commande->setDateReglement(DateReglement);
		this->commande->settotalArticle(toarti);
		this->commande->setDatePay(DatePay);
		this->commande->settotalHT(totalht);
		this->commande->setDateEmi(DateEmi);
		this->commande->setDateLiv(DateLiv);
		this->cad->actionRows(this->commande->UPDATE());
	}

	void gestion_commande::supprimer(String^ idCommande)
	{
		this->commande->setrefCOM(idCommande);
		this->cad->actionRows(this->commande->DLT());
	}
	
	/*void gestion_commande::facturation()
	{

		int c = 0;
		std::string nom_fichier = "facture"; // début du nom de fichier
		std::string fin_fichier = ".txt";
		std::stringstream mon_fichier;
		mon_fichier << nom_fichier << c << fin_fichier;
		ofstream fichier(mon_fichier.str().c_str(), ios::out); //déclaration du flux et ouverture du fichier

		if (fichier)  // si l'ouverture a réussi
		{
			string result;
			result = marshal_as<string>(this->commande->getDateReglement());
			fichier << result;
			//fichier << o1.getID_commande() << o1.getDateReglement << o1.getAdresse << o1.getDatePay << o1.getDateEmi << o1.getDateLiv << o1.getId_client << o1.getId_article;
			fichier.close();  // on referme le fichier
			c++;
		}
		else  // sinon
			cerr << "Erreur à l'ouverture !" << endl;

	}*/
}
		
	


	