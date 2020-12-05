#include "Cl_personnel.h"
namespace NS_Composants
{
	Cl_personnel::Cl_personnel() {
		this->ID_personnel = -1;
		this -> ID = -1;
		this->nomPER = "RIEN";
		this->prenomPER = "RIEN";
		this->supH = "RIEN";
		this->DateAmb = "RIEN";
	}
	String^ Cl_personnel::SELECTByIdPersonne(void)
	{
		return "SELCET * FROM personnel WHERE nomPER= '" + this->nomPER + "' and prenomPER='" + this->prenomPER + "'";
	};
	String^ Cl_personnel::INSERT(void)
	{
		
		return "INSERT INTO personnel(nomPER, prenomPER, supH, DateAmb) VALUES ('" + this->nomPER + "','" + this->prenomPER + "','" + this->supH + "','" + this->DateAmb + "');";
	};
	String^ Cl_personnel::UPDATE(void)
	{
		return "UPDATE personnel SET nomPER='" + this->nomPER + "',prenomPER='" + this->prenomPER + "',supH='" + this->supH + "',DateAmb='" + this->DateAmb + "' WHERE ID= '" + this->ID + "' ;";
	

	};
	String^ Cl_personnel::DELETE(void)
	{
		
		return "DELETE FROM personnel WHERE ID = '" + this->ID + "' ";
	}
	void Cl_personnel::setId_personnel(int ID_personnel)
	{
		this->ID_personnel = ID_personnel;
	}
	void Cl_personnel::setID(int ID)
	{
		 this->ID = ID;
	}
	
	void Cl_personnel::setNomPER(String^ nomPER)
	{
		this->nomPER = nomPER;
	}
	void Cl_personnel::setPrenomPER(String^ prenomPER)
	{
		this->prenomPER = prenomPER;
	}
	void Cl_personnel::setSupH(String^ supH)
	{
		this->supH = supH;
	}
	void Cl_personnel::setDateAmb(String^ DateAmb)
	{
		this->DateAmb = DateAmb;
	}
	void Cl_personnel::setAddresse(String^ adres)
	{
		this->addresse = adres;
	}
	int Cl_personnel::getId_personnel(void)
	{
		return this->ID_personnel;
	}
	int NS_Composants::Cl_personnel::getID(void)
	{
		return this->ID;
	}
	String^ Cl_personnel::getNomPER(void)
	{
		return this->nomPER;
	}
	String^ Cl_personnel::getPrenomPER(void)
	{
		return this->prenomPER;
	}
	String^ Cl_personnel::getSupH(void)
	{
		return this->supH;
	}
	String^ Cl_personnel::getDateAmb(void)
	{
		return this->DateAmb;
	}
	String^ Cl_personnel::getAdresse(void)
	{
		return this->addresse;
	}
	;






}