#include "gestion_commande.h"
namespace NS_SVC {
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

	void gestion_commande::ajouter(String^ adresse, String^ DateReglement, String^ DatePay, String^ DateEmi, String^ DateLiv)
	{
		int id;
		this->commande->setAdresse(adresse);
		this->commande->setDateReglement(DateReglement);

		this->commande->setDatePay(DatePay);

		this->commande->setDateEmi(DateEmi);
		this->commande->setDateLiv(DateLiv);

		id = this->cad->actionRowsID(this->commande->INSERT());
	}

	void gestion_commande::modifier(int Id_commande, String^ adresse, String^ DateReglement, String^ DatePay, String^ DateEmi, String^ DateLiv)
	{
		int id;
		this->commande->setId_commande(Id_commande);
		this->commande->setAdresse(adresse);
		this->commande->setDateReglement(DateReglement);
		this->commande->setDatePay(DatePay);
		this->commande->setDateEmi(DateEmi);
		this->commande->setDateLiv(DateLiv);
		this->cad->actionRows(this->commande->UPDATE());
	}

	void gestion_commande::supprimer(int idCommande)
	{
		this->commande->setId_commande(idCommande);
		this->cad->actionRows(this->commande->DELETE());
	}
}
