#include "Cl_client.h"
#include "Cl_commande.h"
#include "Cl_stock.h"
#include "Connection.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC {
	ref class gestion_stat
	{private: 
		NS_Composants::Connection^ cad;
		NS_Composants::Cl_commande^ commande;
		NS_Composants::Cl_stock^ stock;
		NS_Composants::Cl_client^ client;

		DataSet^ ds;
	public:
		void calcPanierMoy();
		void SeuilRea();
		void totalAchatCL();
		/*SELECT id_client, SUM(quantite) AS articleTotal
        FROM commande
        GROUP BY id_client*/
		void articleP();
		/*SELECT stock.nomAR, sum(commande.quantite) AS quantite
        FROM commande, stock
        WHERE commande.id_article = stock.id 
        ORDER BY quantite 
        LIMIT 10*/
		void articleM();
		/*SELECT stock.nomAR, sum(commande.quantite) AS quantite
         FROM commande, stock
         WHERE commande.id_article = stock.id
         ORDER BY quantite DESC
         LIMIT 10*/
	};
}