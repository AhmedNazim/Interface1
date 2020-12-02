#include "Cl_commande.h"

namespace NS_Composants
{
	Cl_commande::Cl_commande(void)
	{
		this->id_commande = -1;
		//this->adresse = "RIEN";
		this->DateReglement = "RIEN";
		this->DatePay= "RIEN";
		this->DateEmi = "RIEN";
		this->DateLiv = "RIEN";
		this->id_client = -1;
		this->id_article = -1;
	}
	String^ Cl_commande::SELECT(void)
	{
		/*return "SELECT id_adresse, adresse, ville, cp, id_personne " +
			"FROM TB_ADRESSE " +
			"WHERE(id_personne = " + this->id_personne + ");"; */
	}
	String^ Cl_commande::INSERT(void)
	{/*
		return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) " +
			"VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");";*/
	}
	String^ Cl_commande::UPDATE(void)
	{/*
		return "UPDATE TB_ADRESSE " +
			"SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +
			"WHERE(id_adresse = " + this->id_adresse + "); "; */
	}
	String^ Cl_commande::DELETE(void)
	{/*
		return "DELETE FROM TB_ADRESSE " +
			"WHERE(id_adresse = " + this->id_adresse + ");"; */ 
	}
	void Cl_commande::setId_commande(int Id_commande)
	{
		this->id_commande = Id_commande;
	}
	//on va changer avec ref 
	/*void Cl_commande::setAdresse(String^ Adresse)
	{
		//if (Adresse != "")this->adresse = Adresse;
	}*/

	void Cl_commande::setDateReglement(String^ DateReglement)
	{
		this->DateReglement = DateReglement;
	}
	void Cl_commande::setDatePay(String^ DatePay)
	{
		this->DatePay = DatePay;
	}
	void Cl_commande::setDateEmi(String^ DateEmi)
	{
		this->DateEmi = DateEmi;
	}
	void Cl_commande::setId_client(int id_client)
	{
		this->id_client = id_client;
	}
	void Cl_commande::setId_article(int Id_article)
	{
		this->id_article = Id_article;
	}

	int Cl_commande::getId_commande(void )
	{
		return this->id_commande;
	}
	/*String^ Cl_commande::getAdresse(void)
	{
		//return this->adresse;
	}*/
	String^ Cl_commande::getDateReglement(void)
	{
		return this->DateReglement;
	}
	String^ Cl_commande::getDatePay(void)
	{
		return this->DatePay;
	}
	String^ Cl_commande::getDateEmi(void)
	{
		return this->DateEmi;
	}
	String^ Cl_commande::getDateLiv(void)
	{
		return this->DateLiv;
	}
	
	int Cl_commande::getId_client(void)
	{
		return this->id_client;
	}

	int Cl_commande::getId_article(void)
	{
		return this->id_article;
	}
}
