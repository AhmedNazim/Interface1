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
		//if (IdAdresse > 0)this->id_adresse = IdAdresse;
	}
	//on va changer avec ref 
	/*void Cl_commande::setAdresse(String^ Adresse)
	{
		//if (Adresse != "")this->adresse = Adresse;
	}*/

	void Cl_commande::setDateReglement(String^ DateReglement)
	{
		//if (Cp != "")this->cp = Cp;
	}
	void Cl_commande::setDatePay(String^ DatePay)
	{
		//if (Ville != "")this->ville = Ville;
	}
	void Cl_commande::setDateEmi(String^ DateEmi)
	{
		//if (IdPersonne > 0)t//if (IdAdresse > 0)this->id_adresse = IdAdresse;his->id_personne = IdPersonne;
	}
	void Cl_commande::setId_client(int Id_client)
	{
		//if (IdAdresse > 0)this->id_adresse = IdAdresse;
	}
	void Cl_commande::setId_article(int Id_article)
	{
		//if (IdAdresse > 0)this->id_adresse = IdAdresse;
	}

	int Cl_commande::getId_commande(void)
	{
		//return this->id_adresse;
	}
	String^ Cl_commande::getAdresse(void)
	{
		//return this->adresse;
	}
	String^ Cl_commande::getDateReglement(void)
	{
		//return this->cp;
	}
	String^ Cl_commande::getDatePay(void)
	{
		//return this->ville;
	}
	String^ Cl_commande::getDateEmi(void)
	{
		//return this->ville;
	}
	String^ Cl_commande::getDateLiv(void)
	{
		//return this->ville;
	}
	
	int Cl_commande::getId_client(void)
	{
		//return this->id_adresse;
	}

	int Cl_commande::getId_article(void)
	{
		//return this->id_adresse;
	}
}
