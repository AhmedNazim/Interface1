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
		return "select SELECT * FROM client WHERE nomCL = '" + this->nomCL + "'and prenonCL ='" + this->prononCL + "' ; ";
	}
	String^ Cl_client::INSERT(void)
	{
		return "INSERT INTO client(nomCL,prenonCL,adresseCL,adresseFAC,DateAnivCL,DatePremierAchat) VALUES ('" + this->nomCL + "' , '" + this->prononCL + "','" + this->adresseCL + "','"+ this->adresseFAC +"','" + this->DateAnivCL + "','" + this->DatePremierAchat + "') ";
	}
	String^ Cl_client::UPDATE(void)
	{
		"UPDATE client SET nomCL ='" + this->nomCL + "' , prenonCL='" + this->prononCL + "',adresseCL='" + this->adresseCL + "',DateAnivCL= '" this->DateAnivCL + "','"+ this->adresseFAC +"',DatePremierAchat='" + this->DatePremierAchat + "' WHERE ID " + this->ID + "; ";
	}
	String^ Cl_client::DELETE(void)
	{
		return "DELETE FROM client WHERE ID = '" + this->ID + "' ";
	}
	void Cl_client::setID(int ID_client) {
		//this-> ID =  ID_client;
	};
	void Cl_client::setnomCL(String^ nomCL) {
		//this->nomCL = nomCL;
	};

	void Cl_client::setprononCL(String^ pronon) {
		//this->prononCL = pronon;
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

