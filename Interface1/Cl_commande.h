#pragma once
using namespace System;
namespace NS_Composants {
	ref class Cl_commande
	{
	private:
		int id_commande;
		//String^ adresse; n'oublie pas 
		String^ totalTTC;//pas de set 
		String^ totalTVA;// pas de set 
		String^ totalHT;//pas de set 
		String^ totalArticle;//pas de set
		String^ DateReglement;
		String^ DatePay;
		String^ DateEmi;
		String^ DateLiv;
		String^ refCOM;//pas de set
		String^ remise;//pas de set 
		int id_client;
		int id_article;
	public:
		Cl_commande(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DLT(void);
		void setId_commande(int);
		void settotalTTC(String^);
		void settotalTVA(String^);
		void settotalHT(String^);
		void settotalArticle(String^);
		void setrefCOM(String^);
		void setremise(String^);

		void setDateReglement(String^);
		//void setAdresse(String^);
		void setDatePay(String^);
		void setDateEmi(String^);
		void setDateLiv(String^);
		void setId_client(int);
		void setId_article(int);

		int getId_commande(void);
		String^ getDateReglement(void);
		//String^ getAdresse(void);
		String^ getDatePay(void);
		String^ getDateEmi(void);
		String^ getDateLiv(void);
		int getId_client(void);
		int getId_article(void);

	};
}