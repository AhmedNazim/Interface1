#include "gestion_commande.h"
#include <iostream>
#include <fstream>
#include<sstream>
#include<string>
#include<string.h>




using namespace System;
using namespace std;
using namespace System::IO;
//#include <msclr\marshal.h>


//using namespace msclr::interop;

namespace NS_SVC {// ya rayan rak gaertna fl'adresse
	gestion_commande::gestion_commande()
	{
		this->cad = gcnew NS_Composants::Connection();

		this->commande = gcnew NS_Composants::Cl_commande();
	}

	DataSet^ gestion_commande::listeCommande(String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);
		return this->ds;
	}

	void gestion_commande::ajouter(String^ ref ,String^remise, String^toarti,String^totalttc, String^totaltva, String^ totalht,String^ DateReglement, String^ DatePay, String^ DateEmi, String^ DateLiv,int clien,int art)
	{

		int id;
		//this->commande->setAdresse(adresse);
		this->commande->setId_client(clien);
		this->commande->setId_article(art);
		this->commande->setremise(remise);
		this->commande->settotalTTC(totalttc);
		this->commande->settotalTVA(totaltva);
		this->commande->setrefCOM(ref);
		this->commande->setDateReglement(DateReglement);
		this->commande->settotalArticle(toarti);
		this->commande->setDatePay(DatePay);
		this->commande->settotalHT(totalht);
		this->commande->setDateEmi(DateEmi);
		this->commande->setDateLiv(DateLiv);
		//ref commande voir comme ajouter 
		id = this->cad->actionRowsID(this->commande->INSERT());
	}

	void gestion_commande::modifier( String^ ref, String^ remise, String^ toarti, String^ totalttc, String^ totaltva, String^ totalht, String^ DateReglement, String^ DatePay, String^ DateEmi, String^ DateLiv, int clien, int art)
	{

		this->commande->setId_client(clien);
		this->commande->setId_article(art);
		this->commande->setremise(remise);
		this->commande->settotalTTC(totalttc);
		this->commande->settotalTVA(totaltva);
		this->commande->setrefCOM(ref);
		this->commande->setDateReglement(DateReglement);
		this->commande->settotalArticle(toarti);
		this->commande->setDatePay(DatePay);
		this->commande->settotalHT(totalht);
		this->commande->setDateEmi(DateEmi);
		this->commande->setDateLiv(DateLiv);
		this->cad->actionRows(this->commande->UPDATE());
	}

	void gestion_commande::supprimer(String^ idCommande)
	{
		this->commande->setrefCOM(idCommande);
		this->cad->actionRows(this->commande->DLT());
	}
	
	void gestion_commande::	facturation(String^ datereglmet,String^ datepay,String^dateemi,String^dateliv,String^ref,int cl,int art)
	{

		 String^ strNameOfFile;
		 int c = 0;


		    strNameOfFile = "facture" + c + "txt";
           

            // Find out if the user entered a name of a file 
            // that is already in the machine
			FileStream^ fichier =
				gcnew FileStream(strNameOfFile, FileMode::Create);
			BinaryWriter^ bnfichier =
				gcnew BinaryWriter(fichier);
			String^ constring = "Data Source=DESKTOP-PBVM5PL;Initial Catalog=Poo_Project;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);
			conDataBase->Open();
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT nomCL,prenonCL FROM client WHERE ID="+cl+" ", conDataBase);
			SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
			String^ nomCL;
			String^ prenomCL;
			
			while (myReader->Read()) {
				nomCL= myReader->GetString(0);
				prenomCL = myReader->GetString(1);
			}
			conDataBase->Close();

			conDataBase->Open();
		SqlCommand^ cmd = gcnew SqlCommand("SELECT nomAR,couleurAR,natureAR,prixHTAR,prixTVA,prixTTC FROM article WHERE ID=" +art + " ", conDataBase);
		myReader = cmd->ExecuteReader();
		
		String^ nomAR;
		String^ couleurAR;
		String^ natureAR;
		String^ prixHT;
		String^ prixTVA;
		String^ prixTTC;
		while (myReader->Read()) {
			nomAR = myReader->GetString(0);
			couleurAR = myReader->GetString(1);
			natureAR = myReader->GetString(2);
			prixHT = myReader->GetString(3);
			prixTVA = myReader->GetString(4);
			prixTTC = myReader->GetString(5);

		}
		conDataBase->Close();
		if (File::Exists(strNameOfFile))
            {

				
				myReader->Close();
				    bnfichier->Write("Code Lyoko Corp. \n ");
					bnfichier->Write("votre facture  \n ");
					bnfichier->Write("Reference de la commande :\n" + ref +"\n");
					bnfichier->Write("l'identifiant du client" + cl +"\n");
					bnfichier->Write("Nom du Client:\n" + nomCL+"\n");
					bnfichier->Write("Prenom du Client:\n" + prenomCL+"\n");
					bnfichier->Write("Article:\n" + nomAR +"\n");
					bnfichier->Write("l'identifiant de l'article" + art+"\n");
					bnfichier->Write("Couleur de l'article:\n" + couleurAR+"\n");
					bnfichier->Write("Nature de l'article:\n" + natureAR+"\n");
					bnfichier->Write("Prix HT:\n" + prixHT + "\n");
					bnfichier->Write("Prix TVA:\n" + prixTVA + "\n");
					bnfichier->Write("Prix TTC:\n" + prixTTC + "\n");
                    bnfichier->Write("Date reglement:\n"+datereglmet + "\n");
                    bnfichier->Write("Date de Payement:\n"+datepay + "\n");
                    bnfichier->Write("Date d'emission :\n"+dateemi + "\n");
                    bnfichier->Write("Date de livraison: \n "+dateliv + "\n");
					
				
					
					


                }
                
               
			     fichier->Close();
                bnfichier->Close();
				c++;
           
          
            }
}
		
	


	