#include "gestion_personnel.h"
namespace  NS_SVC {
	gestion_personnel::gestion_personnel() {
	
		this->cad = gcnew NS_Composants::Connection();

		this->personnel = gcnew NS_Composants::Cl_personnel();
	}
	DataSet^ gestion_personnel::listePersonnel(String^ dataTableName)
	{

		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->personnel->SELECTByIdPersonne(), dataTableName);
		return this->ds;
	}

	int gestion_personnel::ajouter(String^ nomPER, String^ prenomPER, String^ supH, String^ DateAmb)
	{
		int id;

		this->personnel->setNomPER(nomPER);
		this->personnel->setPrenomPER(prenomPER);
		this->personnel->setSupH(supH);

		this->personnel->setDateAmb(DateAmb);
		id = this->cad->actionRowsID(this->personnel->INSERT());
		return id;
	}

	void gestion_personnel::modifier(int ID, String^ nomPER, String^ prenomPER, String^ supH, String^ DateAmb)
	{
		
		this->personnel->setID(ID);
		this->personnel->setNomPER(nomPER);
		this->personnel->setPrenomPER(prenomPER);
		this->personnel->setSupH(supH);

		this->personnel->setDateAmb(DateAmb);
		this->cad->actionRows(this->personnel->UPDATE());
		
	}

	void gestion_personnel::supprimer(int ID)
	{
		this->personnel->setID(ID);
		this->cad->actionRows(this->personnel->DELETE());
	}

}