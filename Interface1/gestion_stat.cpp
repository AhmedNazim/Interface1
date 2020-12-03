/*#include "gestion_stat.h"

void NS_SVC::gestion_stat::totalAchatCL()
{
	this->cad->actionRowsID("SELECT ID_client, SUM(quantite) AS articleTotal FROM commande GROUP BY ID_client");
}

void NS_SVC::gestion_stat::articleP()
{
	this->cad->actionRowsID("SELECT article.nomAR, sum(commande.quantite) AS quantite FROM commande, article WHERE commande.ID_article = article.ID ORDER BY quantite LIMIT 10");
		}

void NS_SVC::gestion_stat::articleM()
{
	this->cad->actionRowsID("SELECT article.nomAR, sum(commande.quantite) AS quantite FROM commande, article WHERE commande.ID_article = article.ID ORDER BY quantite DESC LIMIT 10");	
}

void NS_SVC::gestion_stat::Calcul_Affaire()
{
	this->cad->actionRowsID("SELECT SUM(totalHT) AS TOTAL FROM commande"); //manque le temps (ça doit calculer le total pour chaque mois 
}*/


