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
	
	DataSet^ gestion_client::adressesClient(int id_client, String^ dataTableName)
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
	     */
}
	
	
	void gestion_client::ajouter(String^ nom, String^ prenom, String^ adresseCL, String^ adresseFAC, String^ DateAnivCL, String^ DatePremierAchat)
	{
		int id;
		
		this->client->setNomCL(nom);
		this->client->setPrononCL(prenom);
		this->client->setAdresseCL(adresseCL);

		this->client->setAdresseFAC(adresseFAC);
		this->client->setDateAnivCL( DateAnivCL);
		this->client->setDatePremierAchat( DatePremierAchat);
		id = this->cad->actionRowsID(this->client->INSERT());
		
	}
	
	/*void gestion_client::ajouter(String^ nom, String^ prenom, array<String^>^ lesAdresses)
	{
		int id;
		int i;
		this->client->setnomCL(nom);
		this->client->setprononCL(prenom);
		id = this->cad->actionRowsID(this->client->INSERT());
		for (i = 0; i < lesAdresses->Length - 1; i++)
		{
			this->adresse->setAdresse(lesAdresses[i]); i++;
			this->adresse->setVille(lesAdresses[i]); i++;
			this->adresse->setCp(lesAdresses[i]);
			this->adresse->setIdPersonne(id);
			this->cad->actionRows(this->adresse->INSERT());
		}
	} 
	*/
	void gestion_client::modifier(int id_personne, String^ nom, String^ prenom, String^ adresseCL, String^ adresseFAC, String^ DateAnivCL, String^ DatePremierAchat)
	{
		int i;
		this->client->setID(id_personne);
		this->client->setNomCL(nom);
		this->client->setPrononCL(prenom);
		this->client->setAdresseCL(adresseCL);

		this->client->setAdresseFAC(adresseFAC);
		this->client->setDateAnivCL(DateAnivCL);
		this->client->setDatePremierAchat(DatePremierAchat);
		this->cad->actionRows(this->client->UPDATE());
		/*for (i = 0; i < lesAdresses->Length - 1; i++)
			
		{
			this->adresse->setIdAdresse(Convert::ToInt32(lesAdresses[i])); i++;
			this->adresse->setAdresse(lesAdresses[i]); i++;
			this->adresse->setVille(lesAdresses[i]); i++;
			this->adresse->setCp(lesAdresses[i]);
			this->cad->actionRows(this->adresse->UPDATE());
		}*/
	}
	void gestion_client::supprimer(int idPersonne)
	{
		this->client->setID(idPersonne);
		this->cad->actionRows(this->client->DELETE());
	}
}
