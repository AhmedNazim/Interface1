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
	
	void gestion_commande::facturation()
	{

		 String^ strNameOfFile;

            Console::Write(L"Please enter your initials or the name "
                L"we will use to remember your order: ");
            strNameOfFile = Console::ReadLine();
            strNameOfFile = strNameOfFile + L".icr";

            // Find out if the user entered a name of a file 
            // that is already in the machine
			FileStream^ fichier =
				gcnew FileStream(strNameOfFile, FileMode::Create);
			BinaryWriter^ bnfichier =
				gcnew BinaryWriter(fichier);

            if (File::Exists(strNameOfFile))
            {

                   
                    Console::WriteLine(L" votre facture est :", strNameOfFile);

                    bnfichier->Write(this->commande->getDateReglement());
                    bnfichier->Write(this->commande->getDatePay());
                    bnfichier->Write(this->commande->getDateEmi());
                    bnfichier->Write(this->commande->getDateLiv());
					bnfichier->Write(this->commande->getId_commande());
					//String^ getAdresse(void);
					bnfichier->Write(this->commande->getId_client());
					bnfichier->Write(this->commande->getId_article());
					


                }
                
               else
                    Console::WriteLine(L"erreur ");
			     fichier->Close();
                bnfichier->Close();
                
           
          
            }
}
		
	


	