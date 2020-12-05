#include "Cl_stock.h"
namespace NS_Composants {


	Cl_stock::Cl_stock() {
		this->ID = -1;
		this->nomAR = "Rien";
		this->refAR = "Rien";
		this->couleurAR = "Rien";
		this->natureAR = "Rien";
		this->prixHTAR = 0;
		this->qantiterAR = 0;
		this->prixTVA = 0;
		this->prixTTC = 0;
		this->seul_de_reappro= "Rien";
	};

	String^ Cl_stock::SELECT(void) {
		return "select SELECT * FROM article WHERE refAR = '" + this->nomAR + "' ; ";
	};
	String^ Cl_stock::INSERT(void) {
		
		return "INSERT INTO article(nomAR,refAR,couleurAR,natureAR,prixHTAR,quantiterAR,prixTVA,prixTTC,seuil_de_reappro) VALUES('" + this->getnomAR() + "', '" + this->getrefAR() + "', '" + this->getcouleurAR() + "', '" + this->getnatureAR() + "','" + this->getprixHTAR() + "','" + this->getqantiterAR() + "','" + this->getprixTVA() + "','" + this->getprixTTC() + "','" + this->getseul_de_reappro() + "');";
	};
	String^ Cl_stock::UPDATE(void) {
		
			return "UPDATE article SET nomAR ='" + this->nomAR + "',refAR ='" + this->refAR + "', couleurAR ='" + this->couleurAR + "' ,natureAR ='" + this->natureAR + "' , prixHTAR ='" + this->prixHTAR + "' , quantiterAR ='" + this->qantiterAR + "' , prixTVA ='" + this->prixTVA + "' , prixTTC ='" + this->prixTTC + "' , seuil_de_reappro ='" + this->seul_de_reappro + "' WHERE(ID = " + this->ID + "); ";

	};
	String^ Cl_stock::DELETE(void) {
		return "DELETE FROM article WHERE ID = '" + this->ID + "' ";

	}
	void Cl_stock::setID(int ID)
	{
		this->ID = ID;
	}
	
	void Cl_stock::setnomAR(String^ nomAR)
	{
		this->nomAR = nomAR;
	}

	void Cl_stock::setrefAR(String^ refAR)
	{
		this->refAR = refAR;
	}
	
	void Cl_stock::setcouleurAR(String^ couleurAR)
	{
		this->couleurAR = couleurAR;
	}
	
	void Cl_stock::setnatureAR(String^ natureAR)
	{
	this->natureAR = natureAR;
	}
	void Cl_stock::setqantiterAR(int qantiterAR)
	{
		this->qantiterAR = qantiterAR;
	}
	void Cl_stock::setprixHTAR(double prixHTAR)
	{
		this->prixHTAR = prixHTAR;
	}
	void Cl_stock::setprixTVA(double prixTVA)
	{
		this->prixTVA = prixTVA;
	}
	void Cl_stock::setprixTTC(double prixTTC)
	{
		this->prixTTC = prixTTC;
	}
	void Cl_stock::setseul_de_reappro(String^ seul_de_reappro)
	{
		this->seul_de_reappro = seul_de_reappro;
	}
	int Cl_stock::getID()
	{
		return this->ID;
	}
	String^ Cl_stock::getnomAR()
	{
		return this->nomAR;
	}
	String^ Cl_stock::getrefAR()
	{
		return this->refAR;
	}
	String^ Cl_stock::getcouleurAR()
	{
		return this->couleurAR;
	}
	String^ Cl_stock::getnatureAR()
	{
		return this->natureAR;
	}
	double Cl_stock::getprixHTAR()
	{
		return this->prixHTAR;
	}
	double Cl_stock::getprixTVA()
	{
		return this->prixTVA;
	}
	double Cl_stock::getprixTTC()
	{
		return this->prixTTC;
	}
	int Cl_stock::getqantiterAR()
	{
		return this->qantiterAR;
	}
	String^ Cl_stock::getseul_de_reappro()
	{
		return this->seul_de_reappro;
	}
	;
	


}


