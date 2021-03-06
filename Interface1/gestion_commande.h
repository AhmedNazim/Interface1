#pragma once

#include "Connection.h"
#include "Cl_commande.h"
#include "Cl_client.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC {
ref class gestion_commande
{
	
private: 
	NS_Composants::Connection^ cad;
	NS_Composants::Cl_commande^ commande;
	
	DataSet^ ds;

public: 
	gestion_commande();
	DataSet^ listeCommande(String^);
	
	void ajouter(String^, String^ , String^ , String^, String^, String^, String^, String^, String^ , String^,int,int);
	void modifier ( String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, int, int);
	void supprimer(String^ );
	void facturation(String^, String^, String^, String^, String^, int, int);
	
	


};
}
