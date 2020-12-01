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
		
			return "INSERT INTO article(nomAR,refAR,couleurAR,natureAR,prixHTAR,quantiterAR,prixTVA,prixTTC,sseul_de_reappro) " +
			"VALUES('" + this->nomAR + "', '" + this->refAR + "', '" + this->couleurAR + "', " + this->natureAR + "," + this->prixHTAR+"," +this->qantiterAR  +"," +this->prixTVA +"," +this->prixTTC +"," +this->seul_de_reappro +",);";

	};
	String^ Cl_stock::UPDATE(void) {
		
			return "UPDATE article SET nomAR ='" + this->nomAR + "',refAR ='" + this->refAR + "', couleurAR ='" + this->couleurAR + "' ,natureAR ='" + this->natureAR + "' , prixHTAR ='" + this->prixHTAR + "' , qantiterAR ='" + this->qantiterAR + "' , prixTVA ='" + this->prixTVA + "' , prixTTC ='" + this->prixTTC + "' , seul_de_reappro ='" + this->seul_de_reappro + "' WHERE(ID = " + this->ID + "); ";

	};
	String^ Cl_stock::DELETE(void) {
		return "DELETE FROM article WHERE ID = '" + this->ID + "' ";

	}
	void Cl_stock::setID(int)
	{
		// this->ID_client = ID_client;
	}
	
	void Cl_stock::setnomAR(String^)
	{
		// this->ID_client = ID_client;
	}

	void Cl_stock::setrefAR(String^)
	{
		// this->ID_client = ID_client;
	}
	
	void Cl_stock::setcouleurAR(String^)
	{
		// this->ID_client = ID_client;
	}
	
	void Cl_stock::setnatureAR(String^)
	{
		// this->ID_client = ID_client;
	}
	void Cl_stock::setqantiterAR(int)
	{
		// this->ID_client = ID_client;
	}
	void Cl_stock::setprixHTAR(float)
	{
		// this->ID_client = ID_client;
	}
	void Cl_stock::setprixTVA(float)
	{
		// this->ID_client = ID_client;
	}
	void Cl_stock::setprixTTC(float)
	{
		// this->ID_client = ID_client;
	}
	void Cl_stock::setseul_de_reappro(String^)
	{
		// this->ID_client = ID_client;
	}
	int Cl_stock::getID()
	{
		//return this->ID;
	}
	String^ Cl_stock::getnomAR()
	{
		//return this->nomAR;
	}
	String^ Cl_stock::getrefAR()
	{
		//return this->couleurAR;
	}
	String^ Cl_stock::getcouleurAR()
	{
		//return this->couleurAR;
	}
	String^ Cl_stock::getnatureAR()
	{
		//return this->natureAR;
	}
	float Cl_stock::getprixHTAR()
	{
		//return this->prixHTAR;
	}
	float Cl_stock::getprixTVA()
	{
		//return this->prixTVA;
	}
	float Cl_stock::getprixTTC()
	{
		//return this->prixTTC;
	}
	int Cl_stock::getqantiterAR()
	{
		//return this->qantiterAR;
	}
	String^ Cl_stock::getseul_de_reappro()
	{
		//return this->seul_de_reappro;
	}
	;
	


}


