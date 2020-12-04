#include "gestion_client.h"

namespace NS_SVC
{
	gestion_client::gestion_client(void)
	{
		this->cad = gcnew NS_Composants::Connection();
		
		this->client = gcnew NS_Composants::Cl_client();
	}
	DataSet^ gestion_client::listeClients(String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->SELECT(), dataTableName);
		return this->ds;
	}
	//rak gaertna hna tan fl'adresse
	/*DataSet^ gestion_client::adressesClient(int id_client, String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->client->setID(id_client);
		this->ds = this->cad->getRows(this->client->getAdresseCL(), dataTableName);
		return this->ds;
		/*
		this->ds = gcnew DataSet();
		this->adresse->setID(id_personne);
		this->ds = this->cad->getRows(this->adresse->SELECTByIdPersonne(), dataTableName);
		return this->ds;
	     
}*/
	
	
	int gestion_client::ajouter(String^ nomCL, String^ pronon, String^ adresseCL, String^ adresseFAC, String^ DateAnivCL, String^ DatePremierAchat)
	{
		int id;
		
		this->client->setNomCL(nomCL);
		this->client->setPrononCL(pronon);
		this->client->setAdresseCL(adresseCL);

		this->client->setAdresseFAC(adresseFAC);
		this->client->setNomCL(nomCL);
		this->client->setPrononCL(pronon);
		this->client->setAdresseCL(adresseCL);
		this->client->setAdresseFAC(adresseFAC);
		this->client->setDateAnivCL( DateAnivCL);
		this->client->setDatePremierAchat( DatePremierAchat);
		id = this->cad->actionRowsID(this->client->INSERT());
		return id;
	}
	
	
	void gestion_client::modifier(int id_personne, String^ nom, String^ pronon, String^ adresseCL, String^ adresseFAC, String^ DateAnivCL, String^ DatePremierAchat)
	{
		
		this->client->setID(id_personne);
		this->client->setNomCL(nom);
		this->client->setPrononCL(pronon);
		this->client->setAdresseCL(adresseCL);

		this->client->setAdresseFAC(adresseFAC);
		this->client->setDateAnivCL(DateAnivCL);
		this->client->setDatePremierAchat(DatePremierAchat);
		this->cad->actionRows(this->client->UPDATE());
		
	}
	void gestion_client::supprimer(int idPersonne)
	{
		this->client->setID(idPersonne);
		this->cad->actionRows(this->client->DELETE());
	}
	void gestion_client::afficher(String^nomCL, String^pronon, String^adresseCL, String^adresseFAC, String^, String^)
	{
		
	}
}
