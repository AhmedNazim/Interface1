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
		return "SELCET * FROM personnel WHERE nomPER= '" + nomPER + "' and prenomPER='" + prenomPER + "'";
	};
	String^ Cl_personnel::INSERT(void)
	{
		
		return "INSERT INTO personne(nomPER, prenomPER, supH, DateAmb, ID_personnel) VALUES ('" + nomPER + "'," + prenomPER + "','" + supH + "'," + DateAmb + "ID_personnel=ID WHERE nom ='"+ supH + "')";
	};
	String^ Cl_personnel::UPDATE(void)
	{
		return "UPDATE personneel SET nomPER='" + nomPER + "',prenomPER='" + prenomPER + "',supH='" + supH + "',DateAmb='" + DateAmb + "',ID_personnel=ID WHERE nom ='" +supH+"');";
	

	};
	String^ Cl_personnel::DELETE(void)
	{
		
		return "DELETE FROM personnel WHERE ID = '" + ID_personnel + "' ";
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
	;






}