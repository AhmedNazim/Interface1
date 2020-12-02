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
		return "UPDATE client SET nomCL ='" + this->nomCL + "' , prenonCL='" + this->prononCL + "',adresseCL='" + this->adresseCL + "',DateAnivCL= '"+ this->DateAnivCL + "','"+ this->adresseFAC +"',DatePremierAchat='" + this->DatePremierAchat + "' WHERE ID= " + this->ID + "; ";
	}
	String^ Cl_client::DELETE(void)
	{
		return "DELETE FROM client WHERE ID = '" + this->ID + "' ";
	}
	void Cl_client::setID(int ID_client) {
		this-> ID =  ID_client;
	};
	void Cl_client::setNomCL(String^ nomCL) {
		this->nomCL = nomCL;
	};

	void Cl_client::setPrononCL(String^ pronon) {
		this->prononCL = pronon;
	};
	void Cl_client::setAdresseCL(String^ adresseCL) {
		this->adresseCL = adresseCL;
	};
	void Cl_client::setAdresseFAC(String^ adresseFAC) {
		this-> adresseFAC =  adresseFAC;
	};
	void Cl_client::setDateAnivCL(String^ DateAnivCL) {
		this-> DateAnivCL =  DateAnivCL;
	};
	void Cl_client::setDatePremierAchat(String^ DatePremierAchat) {
		this->DatePremierAchat = DatePremierAchat;
	};
	int Cl_client::getID(void) {
		return this->ID;
	};
	String^ Cl_client::getNomCL(void) {
		return this->nomCL;
	};
	String^ Cl_client::getPrononCL(void) {
		return this->prononCL;

	};
	String^ Cl_client::getAdresseCL(void) {
		return this->adresseCL;

	};
	String^ Cl_client::getAdresseFAC(void) {
		return this->adresseFAC;

	};
	String^ Cl_client::getDateAnivCL(void) {
		return this->DateAnivCL;

	};
	String^ Cl_client::getDatePremierAchat(void) {
		return this->DatePremierAchat;

	};
	}

