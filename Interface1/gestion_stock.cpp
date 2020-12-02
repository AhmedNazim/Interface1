#include "gestion_stock.h"
namespace NS_SVC {

	gestion_stock::gestion_stock()
	{
		this->cad = gcnew NS_Composants::Connection();

		this->stock = gcnew NS_Composants::Cl_stock();

	}

	DataSet^ gestion_stock::listStock(String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->stock->SELECT(), dataTableName);
		return this->ds;
	}
	void gestion_stock::ajouter(String^ nomAR, String^ refAR, String^ couleurAR, String^ natureAR, double prixHTAR, int qantiterAR, double prixTVA, double prixTTC, String^ seul_de_reappro)
	{
		int id;
		//this->commande->setAdresse(adresse);
		this->stock->setnomAR(nomAR);

		this->stock->setrefAR(refAR);

		this->stock->setcouleurAR(couleurAR);
		this->stock->setnatureAR(natureAR);
		this->stock->setprixHTAR(prixHTAR);
		this->stock->setqantiterAR(qantiterAR);
		this->stock->setprixTVA(prixTVA);
		this->stock->setprixTTC(prixTTC);
		this->stock->setseul_de_reappro(seul_de_reappro);
	
		id = this->cad->actionRowsID(this->stock->INSERT());
	}
	void gestion_stock::modifier(int ID, String^ nomAR, String^ refAR, String^ couleurAR, String^ natureAR, double prixHTAR, int qantiterAR, double prixTVA, double prixTTC, String^ seul_de_reappro)
	{
		int id;
		this->stock->setID(ID);
		this->stock->setnomAR(nomAR);

		this->stock->setrefAR(refAR);

		this->stock->setcouleurAR(couleurAR);
		this->stock->setnatureAR(natureAR);
		this->stock->setprixHTAR(prixHTAR);
		this->stock->setqantiterAR(qantiterAR);
		this->stock->setprixTVA(prixTVA);
		this->stock->setprixTTC(prixTTC);
		this->stock->setseul_de_reappro(seul_de_reappro);

		id = this->cad->actionRowsID(this->stock->UPDATE());
	}
	void gestion_stock::supprimer(int ID)
	{
		this->stock->setID(ID);
		this->cad->actionRows(this->stock->DELETE());

	}
}