#pragma once
#include "Connection.h"
#include "Cl_commande.h"
#include "Cl_stock.h"
#include "Cl_client.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC {
	ref class gestion_stat
	{
	private:
		NS_Composants::Connection^ cad;
		NS_Composants::Cl_commande^ commande;
		NS_Composants::Cl_stock^ stock;
		NS_Composants::Cl_client^ client;

		DataSet^ ds;
	public:
		void calcPanierMoy();
		void SeuilRea();
		void totalAchatCL();
		void articleP();
		void articleM();
		void Calcul_Affaire(); //manque le temps (ça doit calculer le total pour chaque mois
		
		

	};
}