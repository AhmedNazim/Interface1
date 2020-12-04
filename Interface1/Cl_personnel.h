#pragma once
using namespace System;


/// <summary>
namespace NS_Composants
{
	ref class Cl_personnel
	{
	private: 
		int ID_personnel;
		int ID;
		String^ nomPER;
		String^ prenomPER;
		String^ supH;
		String^ DateAmb;
		String^ addresse;
	public: 
		Cl_personnel(void);
		String^ SELECTByIdPersonne(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setId_personnel(int);
		void setID(int);
		void setNomPER(String^);
		void setPrenomPER(String^);
		void setSupH(String^);
		void setDateAmb(String^);
		void setAddresse(String^);
		int getId_personnel(void);
		int getID(void);
		String^ getNomPER( void);
		String^ getPrenomPER(void);
		String^ getSupH(void);
		String^ getDateAmb(void);
		String^ getAdresse(void);

	};

}