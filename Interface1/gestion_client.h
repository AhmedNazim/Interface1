#pragma once


#include "Cl_client.h"
#include "Connection.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC {
	ref class gestion_client {
	private:
		NS_Composants::Connection^ cad;
		NS_Composants::Cl_client^ client;
		DataSet^ ds;
	public:
		gestion_client(void);
		DataSet^ listeClients(String^);
		DataSet^ adressesClient(int, String^);
		void ajouter(String^ nom, String^ prenom, String^ adresseCL, String^ adresseFAC, String^ DateAnivCL, String^ DatePremierAchat);
		//void ajouter(String^, String^, array<String^>^);
		//void modifier(int, String^, String^, array<String^>^);
		void modifier(int id_personne, String^ nom, String^ prenom, String^ adresseCL, String^ adresseFAC, String^ DateAnivCL, String^ DatePremierAchat);
		void supprimer(int);
	};
}