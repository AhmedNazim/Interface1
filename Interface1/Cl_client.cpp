#include "Cl_client.h"

namespace NS_Composants {
	Cl_client::Cl_client(void) {
		this->ID=-1;
		this->nomCL="Rien";
		this->prononCL = "Rien";
		this->adresseCL = "Rien";
		this->adresseFAC = "Rien";
		this->DateAnivCL = "Rien";
		this->DatePremierAchat = "Rien";
	}
	String^ Cl_client::SELECT(void)
	{
		/*return "SELECT id_adresse, adresse, ville, cp, id_personne " +
			"FROM TB_ADRESSE " +
			"WHERE(id_personne = " + this->id_personne + ");"; */
	}
	String^ Cl_client::INSERT(void)
	{/*
		return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) " +
			"VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");";*/
	}
	String^ Cl_client::UPDATE(void)
	{/*
		return "UPDATE TB_ADRESSE " +
			"SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +
			"WHERE(id_adresse = " + this->id_adresse + "); "; */
	}
	String^ Cl_client::DELETE(void)
	{/*
		return "DELETE FROM TB_ADRESSE " +
			"WHERE(id_adresse = " + this->id_adresse + ");"; */
	}
	void Cl_client::setID(int ID_client) {
		//this-> ID_client =  ID_client;
	};
	void Cl_client::setnomCL(String^ nomCL) {
		//this->nomCL = nomCL;
	};

	void Cl_client::setprononCL(String^ pronon) {
		//this->pronon = pronon;
	};
	void Cl_client::setadresseCL(String^ adresseCL) {
		//this->id_adresse = IdAdresse;
	};
	void Cl_client::setadresseFAC(String^ adresseFAC) {
		//this-> adresseFAC =  adresseFAC;
	};
	void Cl_client::setDateAnivCL(String^ DateAnivCL) {
		//this-> DateAnivCL =  DateAnivCL;
	};
	void Cl_client::setDatePremierAchat(String^ DatePremierAchat) {
		//this->DatePremierAchat = DatePremierAchat;
	};
	int Cl_client::getID(void) {
		//return this->ID;
	};
	String^ Cl_client::getnomCL(void) {
		//return this->nomCL;
	};
	String^ Cl_client::getprononCL(void) {
		//return this->prononCL;

	};
	String^ Cl_client::getadresseCL(void) {
		//return this->adresseCL;

	};
	String^ Cl_client::getadresseFAC(void) {
		//return this->adresseFAC;

	};
	String^ Cl_client::getDateAnivCL(void) {
		//return this->DateAnivCL;

	};
	String^ Cl_client::getDatePremierAchat(void) {
		//return this->DatePremierAchat;

	};
	}

