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
		/*SELECT ID_client, SUM(quantite) AS articleTotal
		FROM commande
		GROUP BY ID_client*/
		void articleP();
		/*SELECT article.nomAR, sum(commande.quantite) AS quantite
		FROM commande, article
		WHERE commande.ID_article = article.ID
		ORDER BY quantite
		LIMIT 10*/
		void articleM();
		/*SELECT article.nomAR, sum(commande.quantite) AS quantite
		 FROM commande, article
		 WHERE commande.ID_article = article.ID
		 ORDER BY quantite DESC
		 LIMIT 10*/
	};
}